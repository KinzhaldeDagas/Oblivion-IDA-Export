0x9EDCC0: push    22843h
0x9EDCC5: push    offset aIplayercustomc; "iPlayerCustomClass"
0x9EDCCA: mov     ecx, offset iPlayerCustomClass
0x9EDCCF: call    GameSetting_ConstrAndReg
0x9EDCD4: push    offset sub_A20030; void (__cdecl *)()
0x9EDCD9: call    _atexit
0x9EDCDE: pop     ecx
0x9EDCDF: retn
