//
//  Athlete.cpp
//  Project 2
//
//  Created by Michael Maher on 10/10/24.
//
#include "Athlete.h"
#include <iostream>
#include <string>

using namespace std;

Athlete::Athlete(int height, int weight, char gender)
: m_height(height), m_weight(weight), m_gender(gender) {}


Athlete::Athlete()
{
    //ctor
}

int Athlete::getHeight() const
{
    return m_height;
}

void Athlete::setHeight(int height)
    {
        m_height = height;
    }

int Athlete::getWeight() const
{
    return m_weight;
}

void Athlete::setWeight(int weight)
{
    m_weight = weight;
}

char Athlete::getGender() const
{
return m_gender;
}

void Athlete::setGender(char gender)
{
    m_gender = gender;
}

