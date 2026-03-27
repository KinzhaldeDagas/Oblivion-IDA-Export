0x9F0290: push    offset aLifeIsnTOver_Y; "Life isn't over. You can still get smar"...
0x9F0295: push    offset aSlevelup20; "sLevelUp20"
0x9F029A: mov     ecx, offset dword_B38390
0x9F029F: call    GameSetting_ConstrAndReg
0x9F02A4: push    offset sub_A20E40; void (__cdecl *)()
0x9F02A9: call    _atexit
0x9F02AE: pop     ecx
0x9F02AF: retn
