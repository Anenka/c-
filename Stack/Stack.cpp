#include "Stack.h"
#include <cassert>
#include <iostream>
using std::cout;
using std::endl;

//‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐
#define ASSERT_OK()\
	if (!ok())\
		{\
		dump();\
		assert (!"Object is OK");\
		}\

#define POISON_INT 100500;
//‐‐‐-------------------------------

    Stack::Stack()
{
    size_=0;
    cout <<__PRETTY_FUNCTION__ << endl;

}
//‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐
    Stack::~Stack()
{
    size_ = POISON_INT;
    for (int i=0; i<capacity_; i++)
        data_[i] = POISON_INT;
}
//‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐
bool Stack::push (value_type value)
{
    if (size_ >= capacity_) {
        ASSERT_OK();
        std::cout << "Stack is full!" << std::endl;
        return false;
    }
    data_ [size_++] = value;
    ASSERT_OK();
    return true;
}
//‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐
Stack::value_type Stack::top()
{
    if (empty())
        assert(!("Stack is empty"));
    ASSERT_OK();
    return data_ [size_-1];
}
//‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐
bool Stack::empty ()
{
    if (size_ == 0) {
        ASSERT_OK();
        return true;
    }
    ASSERT_OK();
    return false;
}
//‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐
Stack::value_type Stack::pop()
{
    if (empty())
        assert(!("Stack is empty"));
    data_ [--size_] = POISON_INT;

}
//‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐
size_t Stack::size()
{
    ASSERT_OK();
    return size_;
}
//‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐
size_t Stack::capacity()
{
    ASSERT_OK();
    return capacity_;
}
//‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐
//! Silent verifier
//‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐
bool Stack::ok() const
{
    return size_ <= capacity_;
}
//‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐
//! Dumper
//‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐
bool Stack::dump() const
{
    if (ok())
        cout << "Stack (ok) \n";
    else cout << "Stack (error) \n";
    cout << "size = " << size_ << endl;
    cout << "capacity = " << capacity_ << endl;
    cout << "data[" << size_ <<"]" << endl;
    for (int i=0; i<capacity_; i++)
        cout << i << "=" << data_[i] << endl;
}
//‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐
//
// Created by Алена on 28.02.17.
//

