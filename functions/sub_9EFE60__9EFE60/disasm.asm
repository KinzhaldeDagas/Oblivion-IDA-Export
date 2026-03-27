0x9EFE60: push    19h
0x9EFE62: push    offset aImagnitudeleve; "iMagnitudeLevelAffectsAll"
0x9EFE67: mov     ecx, offset iMagnitudeLevelAffectsAll
0x9EFE6C: call    GameSetting_ConstrAndReg
0x9EFE71: push    offset sub_A20C30; void (__cdecl *)()
0x9EFE76: call    _atexit
0x9EFE7B: pop     ecx
0x9EFE7C: retn
