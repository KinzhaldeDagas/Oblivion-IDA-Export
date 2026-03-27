0x9ED1F0: fld     ds:flt_A41304
0x9ED1F6: push    ecx
0x9ED1F7: fstp    [esp+4+var_4]; float
0x9ED1FA: push    offset aFbuoyancygrass; "fBuoyancyGrass"
0x9ED1FF: mov     ecx, offset flt_B37A98
0x9ED204: call    GameSetting_ConstrAndReg_float
0x9ED209: push    offset sub_A1FC50; void (__cdecl *)()
0x9ED20E: call    _atexit
0x9ED213: pop     ecx
0x9ED214: retn
