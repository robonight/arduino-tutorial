#include "gtest/gtest.h"
#include "arduino-mock/Arduino.h"


#include <iostream>
bool toneWasCalled = false;

class ToneMock {
    public: 
        MOCK_METHOD2(tone, void(int pin, int tone));
};

ToneMock* toneMock;

void tone(int pin, int tone) {
    toneMock->tone(pin, tone);
}

void noTone(int pin) {

}

#include "../buzzer.h"

class BuzzerTest : public ::testing::Test {
    protected:
    BuzzerTest() {
        toneMock = new ToneMock();
        arduinoMock = arduinoMockInstance();
        EXPECT_CALL(*arduinoMock, pinMode(5, OUTPUT));
        buzzer = new Buzzer(5);
    }

    virtual ~BuzzerTest() {
        releaseArduinoMock();
        delete buzzer;
        delete toneMock;
    }

    const Buzzer* buzzer;
    ArduinoMock* arduinoMock;
};

TEST_F(BuzzerTest, SchalalalaOne) {
    EXPECT_CALL(*toneMock, tone(5, 261));
    
    buzzer->warn();
    
}

TEST_F(BuzzerTest, SchalalalaTwo) {
    EXPECT_EQ(1, 1);
}
        