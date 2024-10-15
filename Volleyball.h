//
//  Volleyball.h
//  Project 2
//
//  Created by Michael Maher on 10/10/24.
//
#ifndef Volleyball_h
#define Volleyball_h
#include "Athlete.h"
#include <string>

class Volleyball : public Athlete {
private:
    std::string m_position;
    float m_reactionTime;

public:
    Volleyball();
    Volleyball(std::string position, float reactionTime);
    
    std::string getPosition() const;
    void setPosition(std::string position);
    
    float getReactionTime() const;
    void setReactionTime(float reactionTime);
};


#endif /* Volleyball_h */

