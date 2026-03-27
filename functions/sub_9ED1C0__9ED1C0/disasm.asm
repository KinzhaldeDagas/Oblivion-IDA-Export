0x9ED1C0: fld     ds:flt_A5AC50
0x9ED1C6: push    ecx
0x9ED1C7: fstp    [esp+4+var_4]; float
0x9ED1CA: push    offset aFbuoyancyglass; "fBuoyancyGlass"
0x9ED1CF: mov     ecx, offset flt_B37A90
0x9ED1D4: call    GameSetting_ConstrAndReg_float
0x9ED1D9: push    offset sub_A1FC40; void (__cdecl *)()
0x9ED1DE: call    _atexit
0x9ED1E3: pop     ecx
0x9ED1E4: retn
