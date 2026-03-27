0x9ED370: fld     ds:fConstant_2
0x9ED376: push    ecx
0x9ED377: fstp    [esp+4+var_4]; float
0x9ED37A: push    offset aFsubmergedmaxs; "fSubmergedMaxSpeed"
0x9ED37F: mov     ecx, offset flt_B37AD8
0x9ED384: call    GameSetting_ConstrAndReg_float
0x9ED389: push    offset sub_A1FCD0; void (__cdecl *)()
0x9ED38E: call    _atexit
0x9ED393: pop     ecx
0x9ED394: retn
