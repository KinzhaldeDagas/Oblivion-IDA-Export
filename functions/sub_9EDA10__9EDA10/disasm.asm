0x9EDA10: fld     ds:flt_A41328
0x9EDA16: push    ecx
0x9EDA17: fstp    [esp+4+var_4]; float
0x9EDA1A: push    offset aFrumblepainstr; "fRumblePainStrength"
0x9EDA1F: mov     ecx, offset unk_B37C00
0x9EDA24: call    GameSetting_ConstrAndReg_float
0x9EDA29: push    offset sub_A1FF20; void (__cdecl *)()
0x9EDA2E: call    _atexit
0x9EDA33: pop     ecx
0x9EDA34: retn
