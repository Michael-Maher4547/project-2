//
//  Volleyball.cpp
//  Project 2
//
//  Created by Michael Maher on 10/10/24.
//
#include <iostream>
#include <string>
#include "Volleyball.h"

using namespace std;


Volleyball::Volleyball(string position, float reactionTime)
: m_position(position), m_reactionTime(reactionTime) {}


Volleyball::Volleyball()
{
    //ctor
}

string Volleyball::getPosition() const
{
    return m_position;
}

void Volleyball::setPosition(string position)
{
    m_position = position;
}

float Volleyball::getReactionTime() const
{
    return m_reactionTime;
}

void Volleyball::setReactionTime(float reactionTime)
{
    m_reactionTime = reactionTime;
}

