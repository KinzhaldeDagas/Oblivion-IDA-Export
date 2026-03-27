0x9E8800: fld     ds:flt_A374BC
0x9E8806: push    ecx
0x9E8807: fstp    [esp+4+var_4]; float
0x9E880A: push    offset aFaifleesuccess; "fAIFleeSuccessTimeout"
0x9E880F: mov     ecx, offset flt_B36D50
0x9E8814: call    GameSetting_ConstrAndReg_float
0x9E8819: push    offset sub_A1E1C0; void (__cdecl *)()
0x9E881E: call    _atexit
0x9E8823: pop     ecx
0x9E8824: retn
