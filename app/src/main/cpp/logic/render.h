//
// Created by parkyu on 2023/5/11.
//

#ifndef METALMAX_RENDER_H
#define METALMAX_RENDER_H

#include "logic.h"

class BaseRender {
protected:
    const byte up = 0b0001;
    const byte down = 0b0010;
    const byte left = 0b0100;
    const byte right = 0b1000;

    const byte a = 0b0001;
    const byte b = 0b0010;
    const byte ta = 0b0100;
    const byte tb = 0b1000;
public:
    virtual byte * render(byte *screenBuffer) = 0;
    virtual bool processKey(byte directKey, byte functionKey) = 0;
//    virtual void onFocus() = 0;//todo impl
//    virtual void onUnFocus() = 0;//todo impl
    virtual ~BaseRender() {};
};

void push(BaseRender *baseRender);

BaseRender *top();

void pop();

#endif //METALMAX_RENDER_H
