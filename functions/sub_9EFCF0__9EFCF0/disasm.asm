0x9EFCF0: fldz
0x9EFCF2: push    ecx
0x9EFCF3: fstp    [esp+4+var_4]; float
0x9EFCF6: mov     ecx, offset fAbsorbGlowColorR
0x9EFCFB: push    offset aFabsorbglowcol; "fAbsorbGlowColorR"
0x9EFD00: call    GameSetting_ConstrAndReg_float
0x9EFD05: push    offset sub_A20BB0; void (__cdecl *)()
0x9EFD0A: call    _atexit
0x9EFD0F: pop     ecx
0x9EFD10: retn
