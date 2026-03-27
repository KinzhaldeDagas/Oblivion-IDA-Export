0x9EE320: fld     ds:flt_A2FAAC
0x9EE326: push    ecx
0x9EE327: fstp    [esp+4+var_4]; float
0x9EE32A: push    offset aFmagicdurmagba; "fMagicDurMagBaseCostMult"
0x9EE32F: mov     ecx, offset fMagicDurMagBaseCostMult
0x9EE334: call    GameSetting_ConstrAndReg_float
0x9EE339: push    offset sub_A202D0; void (__cdecl *)()
0x9EE33E: call    _atexit
0x9EE343: pop     ecx
0x9EE344: retn
