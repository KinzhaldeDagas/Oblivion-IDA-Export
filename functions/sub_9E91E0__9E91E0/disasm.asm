0x9E91E0: fld     ds:flt_A41304
0x9E91E6: push    ecx
0x9E91E7: fstp    [esp+4+var_4]; float
0x9E91EA: push    offset aFblockamountha; "fBlockAmountHandToHandMult"
0x9E91EF: mov     ecx, offset fBlockAmountHandToHandMult
0x9E91F4: call    GameSetting_ConstrAndReg_float
0x9E91F9: push    offset sub_A1E530; void (__cdecl *)()
0x9E91FE: call    _atexit
0x9E9203: pop     ecx
0x9E9204: retn
