0x9E9C40: push    32h ; '2'
0x9E9C42: push    offset aIarrowinventor; "iArrowInventoryChance"
0x9E9C47: mov     ecx, offset dword_B370C8
0x9E9C4C: call    GameSetting_ConstrAndReg
0x9E9C51: push    offset sub_A1E8B0; void (__cdecl *)()
0x9E9C56: call    _atexit
0x9E9C5B: pop     ecx
0x9E9C5C: retn
