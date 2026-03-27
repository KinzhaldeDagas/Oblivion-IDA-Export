0x9E7100: fld     ds:flt_A57A64
0x9E7106: push    ecx
0x9E7107: fstp    [esp+4+var_4]; float
0x9E710A: push    offset aFdistanceproje; "fDistanceProjectileExplosionDetection"
0x9E710F: mov     ecx, offset flt_B36948
0x9E7114: call    GameSetting_ConstrAndReg_float
0x9E7119: push    offset sub_A1D9B0; void (__cdecl *)()
0x9E711E: call    _atexit
0x9E7123: pop     ecx
0x9E7124: retn
