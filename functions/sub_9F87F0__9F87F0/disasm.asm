0x9F87F0: fld     ds:flt_A31C80
0x9F87F6: push    ecx
0x9F87F7: fstp    [esp+4+var_4]; float
0x9F87FA: push    offset aFtrackdeadzo_0; "fTrackDeadZoneZ"
0x9F87FF: mov     ecx, offset unk_B39B28
0x9F8804: call    GameSetting_ConstrAndReg_float
0x9F8809: push    offset sub_A23260; void (__cdecl *)()
0x9F880E: call    _atexit
0x9F8813: pop     ecx
0x9F8814: retn
