#pragma once

class Paint
{
protected:
    float thickness;

public:
    virtual void Draw() = 0;
};