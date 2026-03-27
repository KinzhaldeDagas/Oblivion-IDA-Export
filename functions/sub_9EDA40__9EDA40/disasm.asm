0x9EDA40: fld     ds:flt_A3744C
0x9EDA46: push    ecx
0x9EDA47: fstp    [esp+4+var_4]; float
0x9EDA4A: push    offset aFrumblestruckt; "fRumbleStruckTime"
0x9EDA4F: mov     ecx, offset unk_B37C08
0x9EDA54: call    GameSetting_ConstrAndReg_float
0x9EDA59: push    offset sub_A1FF30; void (__cdecl *)()
0x9EDA5E: call    _atexit
0x9EDA63: pop     ecx
0x9EDA64: retn
