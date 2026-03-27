0x9EB5D0: fld     ds:flt_A3D65C
0x9EB5D6: push    ecx
0x9EB5D7: fstp    [esp+4+var_4]; float
0x9EB5DA: push    offset aFactorswimbr_0; "fActorSwimBreathMult"
0x9EB5DF: mov     ecx, offset fActorSwimBreathMult
0x9EB5E4: call    GameSetting_ConstrAndReg_float
0x9EB5E9: push    offset sub_A1F220; void (__cdecl *)()
0x9EB5EE: call    _atexit
0x9EB5F3: pop     ecx
0x9EB5F4: retn
