0x9F0850: push    offset aIngredientsEat; "Ingredients Eaten: "
0x9F0855: push    offset aSmiscingredien; "sMiscIngredientsEaten"
0x9F085A: mov     ecx, offset dword_B38500
0x9F085F: call    GameSetting_ConstrAndReg
0x9F0864: push    offset sub_A21120; void (__cdecl *)()
0x9F0869: call    _atexit
0x9F086E: pop     ecx
0x9F086F: retn
