#include <gtest/gtest.h>
#include "tictactoe/resource_manager.h"

class ResourceManagerTest : public ::testing::Test
{
protected:
    void TestGetter() {
        bool textureCheck = (&(resourceManager->texture) == &(resourceManager->getTexture()));
        bool fontCheck = (&(resourceManager->font) == &(resourceManager->getFont()));
        bool buttonTextureCheck = (&(resourceManager->buttonTexture) == &(resourceManager->getButtonTexture()));
        
        EXPECT_EQ(textureCheck, true);
        EXPECT_EQ(fontCheck, true);
        EXPECT_EQ(buttonTextureCheck, true);
    }
private:
    ResourceManager* resourceManager = new ResourceManager();
};

TEST_F(ResourceManagerTest, testGetter) {
    TestGetter();
}