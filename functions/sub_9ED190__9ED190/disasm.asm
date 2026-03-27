0x9ED190: fld     ds:flt_A41304
0x9ED196: push    ecx
0x9ED197: fstp    [esp+4+var_4]; float
0x9ED19A: push    offset aFbuoyancydirt; "fBuoyancyDirt"
0x9ED19F: mov     ecx, offset flt_B37A88
0x9ED1A4: call    GameSetting_ConstrAndReg_float
0x9ED1A9: push    offset sub_A1FC30; void (__cdecl *)()
0x9ED1AE: call    _atexit
0x9ED1B3: pop     ecx
0x9ED1B4: retn
