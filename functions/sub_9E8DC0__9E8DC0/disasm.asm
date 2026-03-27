0x9E8DC0: fld     ds:flt_A46B10
0x9E8DC6: push    ecx
0x9E8DC7: fstp    [esp+4+var_4]; float
0x9E8DCA: push    offset aFdamagesneakat; "fDamageSneakAttackMult"
0x9E8DCF: mov     ecx, offset fDamageSneakAttackMult
0x9E8DD4: call    GameSetting_ConstrAndReg_float
0x9E8DD9: push    offset sub_A1E3B0; void (__cdecl *)()
0x9E8DDE: call    _atexit
0x9E8DE3: pop     ecx
0x9E8DE4: retn
