0x9F87C0: fld     ds:flt_A417B4
0x9F87C6: push    ecx
0x9F87C7: fstp    [esp+4+var_4]; float
0x9F87CA: push    offset aFtrackdeadzone; "fTrackDeadZoneXY"
0x9F87CF: mov     ecx, offset unk_B39B20
0x9F87D4: call    GameSetting_ConstrAndReg_float
0x9F87D9: push    offset sub_A23250; void (__cdecl *)()
0x9F87DE: call    _atexit
0x9F87E3: pop     ecx
0x9F87E4: retn
