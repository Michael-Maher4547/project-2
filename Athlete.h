//
//  Athlete.h
//  Project 2
//
//  Created by Michael Maher on 10/10/24.
//
#ifndef Athlete_h
#define Athlete_h

//constuctor 
class Athlete {
private:
    int m_height;
    int m_weight;
    char m_gender;

public:
    Athlete();
    Athlete(int height, int weight, char gender);
    
    int getHeight() const;
    void setHeight(int height);
    
    int getWeight() const;
    void setWeight(int weight);
    
    char getGender() const;
    void setGender(char gender);
};

#endif /* Athlete_h */
