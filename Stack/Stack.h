//
// Created by Алена on 28.02.17.
//

#ifndef STACK_STACK_H
#define STACK_STACK_H

//‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐
//! @file Stack.h
//! Implements a stack class
//!
//! @author Beskrovnaya_A, 2017
//‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐
//‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐
//! Stack class
//‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐
class Stack
{
public:
    typedef float value_type;

    Stack();

    ~Stack();
    //‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐
    //! Pushes a value to the stack
    //! @param value is an element to be pushed
    //! @return success of operation
    //‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐

    bool push (value_type value);
    value_type top ();
    bool empty ();
    value_type pop();
    size_t size();
    size_t capacity();
    bool ok() const;
    bool dump() const;

private:
    static const size_t capacity_ = 10;

    value_type data_ [capacity_];
    size_t size_;
};

#endif //STACK_STACK_H
