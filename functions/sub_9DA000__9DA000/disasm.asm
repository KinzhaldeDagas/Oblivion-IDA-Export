0x9DA000: push    offset aRequires; "Requires "
0x9DA005: push    offset aSmagiccostlies; "sMagicCostliestEffectRequires"
0x9DA00A: mov     ecx, offset sMagicCostliestEffectRequires
0x9DA00F: call    GameSetting_ConstrAndReg
0x9DA014: push    offset sub_A175A0; void (__cdecl *)()
0x9DA019: call    _atexit
0x9DA01E: pop     ecx
0x9DA01F: retn
