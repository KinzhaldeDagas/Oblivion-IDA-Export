0x9E63D0: fld     ds:flt_A57384
0x9E63D6: push    ecx
0x9E63D7: fstp    [esp+4+var_4]; float
0x9E63DA: push    offset aFsneakbasevalu; "fSneakBaseValue"
0x9E63DF: mov     ecx, offset fSneakBaseValue
0x9E63E4: call    GameSetting_ConstrAndReg_float
0x9E63E9: push    offset sub_A1D520; void (__cdecl *)()
0x9E63EE: call    _atexit
0x9E63F3: pop     ecx
0x9E63F4: retn
