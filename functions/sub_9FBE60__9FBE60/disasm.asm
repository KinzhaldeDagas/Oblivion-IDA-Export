0x9FBE60: fld1
0x9FBE62: push    ecx
0x9FBE63: fstp    [esp+4+var_4]; float
0x9FBE66: mov     ecx, offset dword_B3B2CC
0x9FBE6B: push    offset aFsigilstoneuse; "fSigilStoneUseFactor"
0x9FBE70: call    GameSetting_ConstrAndReg_float
0x9FBE75: push    offset sub_A24B10; void (__cdecl *)()
0x9FBE7A: call    _atexit
0x9FBE7F: pop     ecx
0x9FBE80: retn
