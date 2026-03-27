0x9EE860: fld     ds:flt_A57FB8
0x9EE866: push    ecx
0x9EE867: fstp    [esp+4+var_4]; float
0x9EE86A: push    offset aFmagicexplos_4; "fMagicExplosionIncorporealMult"
0x9EE86F: mov     ecx, offset flt_B37EB8
0x9EE874: call    GameSetting_ConstrAndReg_float
0x9EE879: push    offset sub_A20490; void (__cdecl *)()
0x9EE87E: call    _atexit
0x9EE883: pop     ecx
0x9EE884: retn
