//
//  Tennis.cpp
//  Project 2
//
//  Created by Michael Maher on 10/10/24.
//
#include "Tennis.h"
#include <iostream>
#include <string>

using namespace std;

Tennis::Tennis(int serveSpeed, bool serveAndVolley)
: m_serveSpeed(serveSpeed), m_serveAndVolley(serveAndVolley) {}


Tennis::Tennis()
{
    //ctor
}
int Tennis::getServeSpeed() const
{
    return m_serveSpeed;
}

void Tennis::setServeSpeed(int serveSpeed)
{
    m_serveSpeed = serveSpeed;
}

bool Tennis::getServeAndVolley() const
{
    return m_serveAndVolley;
}

void Tennis::setServeAndVolley(bool serveAndVolley)
{
    m_serveAndVolley = serveAndVolley;
}


