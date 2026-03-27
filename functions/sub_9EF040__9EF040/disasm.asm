0x9EF040: push    4
0x9EF042: push    offset aImagiclightmax; "iMagicLightMaxCount"
0x9EF047: mov     ecx, offset iMagicLightMaxCount
0x9EF04C: call    GameSetting_ConstrAndReg
0x9EF051: push    offset sub_A20730; void (__cdecl *)()
0x9EF056: call    _atexit
0x9EF05B: pop     ecx
0x9EF05C: retn
