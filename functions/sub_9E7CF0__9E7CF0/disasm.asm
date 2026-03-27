0x9E7CF0: fld     ds:flt_A2FAAC
0x9E7CF6: push    ecx
0x9E7CF7: fstp    [esp+4+var_4]; float
0x9E7CFA: push    offset aFvanitymodewhe; "fVanityModeWheelMult"
0x9E7CFF: mov     ecx, offset flt_B36B58
0x9E7D04: call    GameSetting_ConstrAndReg_float
0x9E7D09: push    offset sub_A1DDD0; void (__cdecl *)()
0x9E7D0E: call    _atexit
0x9E7D13: pop     ecx
0x9E7D14: retn
