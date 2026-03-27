0x9EB5A0: fld     ds:flt_A31C80
0x9EB5A6: push    ecx
0x9EB5A7: fstp    [esp+4+var_4]; float
0x9EB5AA: push    offset aFactorswimbrea; "fActorSwimBreathBase"
0x9EB5AF: mov     ecx, offset fActorSwimBreathBase
0x9EB5B4: call    GameSetting_ConstrAndReg_float
0x9EB5B9: push    offset sub_A1F210; void (__cdecl *)()
0x9EB5BE: call    _atexit
0x9EB5C3: pop     ecx
0x9EB5C4: retn
