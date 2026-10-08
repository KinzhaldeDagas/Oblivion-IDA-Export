0x9E8860: fld1
0x9E8862: push    ecx
0x9E8863: fstp    [esp+4+var_4]; float
0x9E8866: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+88h)
0x9E886B: push    offset aFaiyieldmult; "fAIYieldMult"
0x9E8870: call    GameSetting_ConstrAndReg_float
0x9E8875: push    offset sub_A1E1E0; void (__cdecl *)()
0x9E887A: call    _atexit
0x9E887F: pop     ecx
0x9E8880: retn
