0x9E9950: fld     ds:flt_A430CC
0x9E9956: push    ecx
0x9E9957: fstp    [esp+4+var_4]; float
0x9E995A: push    offset aFarrowagemax; "fArrowAgeMax"
0x9E995F: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+370h)
0x9E9964: call    GameSetting_ConstrAndReg_float; Register float game setting fArrowAgeMax with default value 90.0 seconds; lifecycle update enters state 3 after elapsedTime exceeds it.
0x9E9969: push    offset sub_A1E7B0; void (__cdecl *)()
0x9E996E: call    _atexit
0x9E9973: pop     ecx
0x9E9974: retn
