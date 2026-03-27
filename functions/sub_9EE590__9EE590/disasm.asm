0x9EE590: fld     ds:flt_A41304
0x9EE596: push    ecx
0x9EE597: fstp    [esp+4+var_4]; float
0x9EE59A: push    offset aFmagicenchan_2; "fMagicEnchantmentDrainMult"
0x9EE59F: mov     ecx, offset flt_B37E40
0x9EE5A4: call    GameSetting_ConstrAndReg_float
0x9EE5A9: push    offset sub_A203A0; void (__cdecl *)()
0x9EE5AE: call    _atexit
0x9EE5B3: pop     ecx
0x9EE5B4: retn
