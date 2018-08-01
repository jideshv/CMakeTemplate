// Copyright (c) 2018 Jidesh Veeramachaneni
// Distributed under the MIT License (license terms are at http://opensource.org/licenses/MIT).

#include "gtest/gtest.h"
#include "MockWriteClass.h"
#include "SomeHeaderOnlyLibrary.h"

class Write : public ::testing::Test {
protected:
    Write() {}
    virtual ~Write() {}
    
    void SetUp() override {
        EXPECT_CALL(m_writer, begin());
        m_class_under_test = std::make_shared<SomeTemplateLibrary<MockWriter>>(m_writer);
    }
    
    void TearDown() override {
        EXPECT_CALL(m_writer, end());
        m_class_under_test = nullptr;
    }
    
    std::shared_ptr<SomeTemplateLibrary<MockWriter>> m_class_under_test;
    MockWriter m_writer;
};

TEST (Basic, construct_destruct) {
    MockWriter writer;
    std::shared_ptr<SomeTemplateLibrary<MockWriter>> class_under_test;
    EXPECT_CALL(writer, begin());
    class_under_test = std::make_shared<SomeTemplateLibrary<MockWriter>>(writer);
    EXPECT_CALL(writer, end());
    class_under_test = nullptr;
}

TEST_F (Write, hello_world) {
    EXPECT_CALL(m_writer,print("Hello World!"));
    m_class_under_test->HelloWorld();
}
