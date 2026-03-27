0x9ED3D0: fld     ds:flt_A5982C
0x9ED3D6: push    ecx
0x9ED3D7: fstp    [esp+4+var_4]; float
0x9ED3DA: push    offset aFsubmergedmaxw; "fSubmergedMaxWaterDistance"
0x9ED3DF: mov     ecx, offset flt_B37AE8
0x9ED3E4: call    GameSetting_ConstrAndReg_float
0x9ED3E9: push    offset sub_A1FCF0; void (__cdecl *)()
0x9ED3EE: call    _atexit
0x9ED3F3: pop     ecx
0x9ED3F4: retn
