0x9ED3A0: fld     ds:flt_A5AF4C
0x9ED3A6: push    ecx
0x9ED3A7: fstp    [esp+4+var_4]; float
0x9ED3AA: push    offset aFsubmergedlodd; "fSubmergedLODDistance"
0x9ED3AF: mov     ecx, offset flt_B37AE0
0x9ED3B4: call    GameSetting_ConstrAndReg_float
0x9ED3B9: push    offset sub_A1FCE0; void (__cdecl *)()
0x9ED3BE: call    _atexit
0x9ED3C3: pop     ecx
0x9ED3C4: retn
