#ifndef __CONTROLLER_H__
#define __CONTROLLER_H__

enum Range {
  ERROR, WARN, OK, NO_DISTANCE
};

const int GreenRange = 100;
const int YellowRange = 50;
const int RedRange = 1;

Range convert(unsigned int distance) {
    if(distance >= GreenRange)
    {
      return OK;
    }
    else if(distance >= YellowRange)
    {
      return WARN;
    }
    else if(distance >= RedRange)
    {
      return ERROR;
    }
    else if(distance == 0)
    {
      return NO_DISTANCE;
    }    
}



#endif
