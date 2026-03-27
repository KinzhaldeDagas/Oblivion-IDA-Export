0x9EDB00: fld     ds:flt_A3744C
0x9EDB06: push    ecx
0x9EDB07: fstp    [esp+4+var_4]; float
0x9EDB0A: push    offset aFrumblehitbloc; "fRumbleHitBlockedTime"
0x9EDB0F: mov     ecx, offset unk_B37C28
0x9EDB14: call    GameSetting_ConstrAndReg_float
0x9EDB19: push    offset sub_A1FF70; void (__cdecl *)()
0x9EDB1E: call    _atexit
0x9EDB23: pop     ecx
0x9EDB24: retn
