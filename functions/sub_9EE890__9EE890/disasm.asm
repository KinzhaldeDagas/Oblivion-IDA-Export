0x9EE890: fld     ds:flt_A59E20
0x9EE896: push    ecx
0x9EE897: fstp    [esp+4+var_4]; float
0x9EE89A: push    offset aFmagicexplos_5; "fMagicExplosionIncorporealTime"
0x9EE89F: mov     ecx, offset flt_B37EC0
0x9EE8A4: call    GameSetting_ConstrAndReg_float
0x9EE8A9: push    offset sub_A204A0; void (__cdecl *)()
0x9EE8AE: call    _atexit
0x9EE8B3: pop     ecx
0x9EE8B4: retn
