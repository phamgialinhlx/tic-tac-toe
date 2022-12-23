#include <gtest/gtest.h>
#include "tictactoe/controller.h"
#include "tictactoe/game_state.h"
#include "tictactoe/render_engine.h"

#include<iostream>

class ControllerTest : public ::testing::Test
{
protected:
    void TestInitialQueue() {
        std::cout << "controller" << std::endl;
        EXPECT_EQ(1, 1);
    }
private:
    // GameState state;
    // GameWindow window;
    // Controller* controller = new Controller(state, window);
};

TEST_F(ControllerTest, testInitialQueue) {
    TestInitialQueue();
}
