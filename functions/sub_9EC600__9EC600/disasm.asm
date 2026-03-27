0x9EC600: push    0Ah
0x9EC602: push    offset aIpersuasionbri; "iPersuasionBribeGold"
0x9EC607: mov     ecx, offset iPersuasionBribeGold
0x9EC60C: call    GameSetting_ConstrAndReg
0x9EC611: push    offset sub_A1F810; void (__cdecl *)()
0x9EC616: call    _atexit
0x9EC61B: pop     ecx
0x9EC61C: retn
