0x9E9CB0: fld1
0x9E9CB2: push    ecx
0x9E9CB3: fstp    [esp+4+var_4]; float
0x9E9CB6: mov     ecx, offset flt_B370E0
0x9E9CBB: push    offset aFprojectilecol; "fProjectileCollisionImpulseScale"
0x9E9CC0: call    GameSetting_ConstrAndReg_float
0x9E9CC5: push    offset sub_A1E8E0; void (__cdecl *)()
0x9E9CCA: call    _atexit
0x9E9CCF: pop     ecx
0x9E9CD0: retn
