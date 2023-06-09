//
// Created by parkyu on 2023/5/11.
//

#ifndef METALMAX_RENDER_H
#define METALMAX_RENDER_H

#include "logic.h"

class BaseRender {
protected:
    const byte a = 0b0001;
    const byte b = 0b0010;
    const byte ta = 0b0100;
    const byte tb = 0b1000;
    const byte keyX = 0b00010000;
    const byte keyY = 0b00100000;
public:
    virtual byte * render(byte *screenBuffer) {};
    virtual void tikLogic() {};
    virtual bool processKey(byte directKey, byte functionKey) {return false;};
    virtual void processKeyClick(byte directKey, byte functionKey) {}
    virtual void onFocus() {};
    virtual void onUnFocus() {};
    virtual ~BaseRender() {};
};

void push(BaseRender *baseRender);

BaseRender *top();

void pop();

void changeMap(int mapId, int x, int y);//only support std pos

int getCurrentMap();

#endif //METALMAX_RENDER_H
