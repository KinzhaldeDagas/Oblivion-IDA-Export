0x9E7CC0: fld     ds:flt_A3D65C
0x9E7CC6: push    ecx
0x9E7CC7: fstp    [esp+4+var_4]; float
0x9E7CCA: push    offset aFvanitymodedel; "fVanityModeDelay"
0x9E7CCF: mov     ecx, offset unk_B36B50
0x9E7CD4: call    GameSetting_ConstrAndReg_float
0x9E7CD9: push    offset sub_A1DDC0; void (__cdecl *)()
0x9E7CDE: call    _atexit
0x9E7CE3: pop     ecx
0x9E7CE4: retn
