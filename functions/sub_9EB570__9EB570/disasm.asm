0x9EB570: fld     ds:flt_A31E2C
0x9EB576: push    ecx
0x9EB577: fstp    [esp+4+var_4]; float
0x9EB57A: push    offset aFactorstrength; "fActorStrengthEncumbranceMult"
0x9EB57F: mov     ecx, offset fActorStrengthEncumbranceMult
0x9EB584: call    GameSetting_ConstrAndReg_float
0x9EB589: push    offset sub_A1F200; void (__cdecl *)()
0x9EB58E: call    _atexit
0x9EB593: pop     ecx
0x9EB594: retn
