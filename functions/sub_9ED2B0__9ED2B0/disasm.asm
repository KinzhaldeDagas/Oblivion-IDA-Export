0x9ED2B0: fldz
0x9ED2B2: push    ecx
0x9ED2B3: fstp    [esp+4+var_4]; float
0x9ED2B6: mov     ecx, offset flt_B37AB8
0x9ED2BB: push    offset aFbuoyancywater; "fBuoyancyWater"
0x9ED2C0: call    GameSetting_ConstrAndReg_float
0x9ED2C5: push    offset sub_A1FC90; void (__cdecl *)()
0x9ED2CA: call    _atexit
0x9ED2CF: pop     ecx
0x9ED2D0: retn
