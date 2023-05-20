//
// Created by parkyu on 2023/5/12.
//

#ifndef METALMAX_RENDER_BATTLE_H
#define METALMAX_RENDER_BATTLE_H

#include "logic.h"
#include "render.h"

class BattleRender : public BaseRender {
private:
    bool enterBattle = false;
    int splashClk = 0;
    int splashCount = 0;
public:
    BattleRender();
    byte * render(byte *screenBuffer);
    void processKeyClick(byte directKey, byte functionKey);
};

#endif //METALMAX_RENDER_BATTLE_H