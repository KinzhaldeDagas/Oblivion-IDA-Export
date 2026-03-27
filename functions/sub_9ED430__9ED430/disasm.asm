0x9ED430: fld     ds:flt_A46B10
0x9ED436: push    ecx
0x9ED437: fstp    [esp+4+var_4]; float
0x9ED43A: push    offset aFsubmergedli_0; "fSubmergedLinearDampingV"
0x9ED43F: mov     ecx, offset fSubmergedLinearDampingV
0x9ED444: call    GameSetting_ConstrAndReg_float
0x9ED449: push    offset sub_A1FD10; void (__cdecl *)()
0x9ED44E: call    _atexit
0x9ED453: pop     ecx
0x9ED454: retn
