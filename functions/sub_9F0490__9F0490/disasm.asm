0x9F0490: push    offset aMurders; "Murders: "
0x9F0495: push    offset aSmiscnummurder; "sMiscNumMurders"
0x9F049A: mov     ecx, offset sMiscNumMurders
0x9F049F: call    GameSetting_ConstrAndReg
0x9F04A4: push    offset sub_A20F40; void (__cdecl *)()
0x9F04A9: call    _atexit
0x9F04AE: pop     ecx
0x9F04AF: retn
