//
//  Tennis.h
//  Project 2
//
//  Created by Michael Maher on 10/10/24.
//
#ifndef Tennis_h
#define Tennis_h
#include "Athlete.h"

class Tennis : public Athlete {
private:
    int m_serveSpeed;
    bool m_serveAndVolley;

public:
    Tennis();
    Tennis(int serveSpeed, bool serveAndVolley);
    
    int getServeSpeed() const;
    void setServeSpeed(int serveSpeed);
    
    bool getServeAndVolley() const;
    void setServeAndVolley(bool serveAndVolley);
};

#endif /* Tennis_h */
