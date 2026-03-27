0x9EB850: fld1
0x9EB852: push    ecx
0x9EB853: fstp    [esp+4+var_4]; float
0x9EB856: mov     ecx, offset fPerkAthleticsNoviceFatigueMult
0x9EB85B: push    offset aFperkathletics; "fPerkAthleticsNoviceFatigueMult"
0x9EB860: call    GameSetting_ConstrAndReg_float
0x9EB865: push    offset sub_A1F300; void (__cdecl *)()
0x9EB86A: call    _atexit
0x9EB86F: pop     ecx
0x9EB870: retn
