// Copyright (c) 2018 Jidesh Veeramachaneni
// Distributed under the MIT License (license terms are at http://opensource.org/licenses/MIT).

#pragma once

// Just an example of a templated class that depends on a 
// class that has a begin, end, and print method.
//
// Good example to show how to mock something using GoogleMock
// if you only had an interface for something you depend on.
template <typename T>
class SomeTemplateLibrary
{
public:
    SomeTemplateLibrary(T& object) : m_object(object) {
        m_object.template begin();
    }
    
    virtual ~SomeTemplateLibrary() {
        m_object.template end();
    }
    
    void HelloWorld () {
        m_object.template print("Hello World!");
    }

private:
    T& m_object;
};
