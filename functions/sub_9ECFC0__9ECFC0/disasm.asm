0x9ECFC0: fld     ds:flt_A5ACDC
0x9ECFC6: push    ecx
0x9ECFC7: fstp    [esp+4+var_4]; float
0x9ECFCA: push    offset aFpotiont3calma; "fPotionT3CalMagMult"
0x9ECFCF: mov     ecx, offset fPotionT3CalMagMult
0x9ECFD4: call    GameSetting_ConstrAndReg_float
0x9ECFD9: push    offset sub_A1FB90; void (__cdecl *)()
0x9ECFDE: call    _atexit
0x9ECFE3: pop     ecx
0x9ECFE4: retn
