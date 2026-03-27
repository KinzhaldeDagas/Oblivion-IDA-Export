0x9E76A0: fld     ds:flt_A57604
0x9E76A6: push    ecx
0x9E76A7: fstp    [esp+4+var_4]; float
0x9E76AA: push    offset aFlocktrapgooff; "fLockTrapGoOffBase"
0x9E76AF: mov     ecx, offset unk_B36A38
0x9E76B4: call    GameSetting_ConstrAndReg_float
0x9E76B9: push    offset sub_A1DB90; void (__cdecl *)()
0x9E76BE: call    _atexit
0x9E76C3: pop     ecx
0x9E76C4: retn
