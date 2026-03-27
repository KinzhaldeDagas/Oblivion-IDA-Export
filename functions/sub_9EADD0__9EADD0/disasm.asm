0x9EADD0: fld     ds:flt_A57414
0x9EADD6: push    ecx
0x9EADD7: fstp    [esp+4+var_4]; float
0x9EADDA: push    offset aFmovenoweaponm; "fMoveNoWeaponMult"
0x9EADDF: mov     ecx, offset fMoveNoWeaponMult
0x9EADE4: call    GameSetting_ConstrAndReg_float
0x9EADE9: push    offset sub_A1EF60; void (__cdecl *)()
0x9EADEE: call    _atexit
0x9EADF3: pop     ecx
0x9EADF4: retn
