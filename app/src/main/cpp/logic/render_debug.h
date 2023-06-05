//
// Created by parkyu on 2023/5/11.
//

#ifndef METALMAX_RENDER_DEBUG_H
#define METALMAX_RENDER_DEBUG_H

#include "logic.h"
#include "render.h"

class DebugRender : public BaseRender {
private:
    int pos;
    int selectPos = 0;
    void processSelection();
    void renderDebugMenu(byte *screenBuffer);
public:
    DebugRender();
    ~DebugRender();
    byte * render(byte *screenBuffer);
    void tikLogic();
    void processKeyClick(byte directKey, byte functionKey);
};

#endif //METALMAX_RENDER_DEBUG_H
