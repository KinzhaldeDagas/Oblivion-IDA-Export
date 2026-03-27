0x9ECD80: fld     ds:flt_A41304
0x9ECD86: push    ecx
0x9ECD87: fstp    [esp+4+var_4]; float
0x9ECD8A: push    offset aFpotionmortpes; "fPotionMortPestleMult"
0x9ECD8F: mov     ecx, offset fPotionMortPestleMult
0x9ECD94: call    GameSetting_ConstrAndReg_float
0x9ECD99: push    offset sub_A1FAD0; void (__cdecl *)()
0x9ECD9E: call    _atexit
0x9ECDA3: pop     ecx
0x9ECDA4: retn
