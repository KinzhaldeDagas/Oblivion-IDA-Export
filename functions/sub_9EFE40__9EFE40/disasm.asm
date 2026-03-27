0x9EFE40: push    1
0x9EFE42: push    offset aImaxplayersumm; "iMaxPlayerSummonedCreatures"
0x9EFE47: mov     ecx, offset iMaxPlayerSummonedCreatures
0x9EFE4C: call    GameSetting_ConstrAndReg
0x9EFE51: push    offset sub_A20C20; void (__cdecl *)()
0x9EFE56: call    _atexit
0x9EFE5B: pop     ecx
0x9EFE5C: retn
