0x9E9DA0: fld     ds:flt_A31E2C
0x9E9DA6: push    ecx
0x9E9DA7: fstp    [esp+4+var_4]; float
0x9E9DAA: push    offset aFprojectilek_3; "fProjectileKnockMinMass"
0x9E9DAF: mov     ecx, offset fProjectileKnockMinMass
0x9E9DB4: call    GameSetting_ConstrAndReg_float
0x9E9DB9: push    offset sub_A1E930; void (__cdecl *)()
0x9E9DBE: call    _atexit
0x9E9DC3: pop     ecx
0x9E9DC4: retn
