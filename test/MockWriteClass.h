// Copyright (c) 2018 Jidesh Veeramachaneni
// Distributed under the MIT License (license terms are at http://opensource.org/licenses/MIT).

#pragma once

#include "gtest/gtest.h"
#include "gmock/gmock.h"

class SomeWriterInterface {
public:
    SomeWriterInterface() {}
    virtual ~SomeWriterInterface() {}

    virtual void begin() = 0;
    virtual void end() = 0;
    virtual void print(const std::string&) = 0;
};

class MockWriter : public SomeWriterInterface {
public:
    MOCK_METHOD0(begin, void(void));
    MOCK_METHOD0(end, void(void));
    MOCK_METHOD1(print, void(const std::string&));
};
