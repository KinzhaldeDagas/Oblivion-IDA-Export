0x9F86A0: fld     ds:flt_A46B10
0x9F86A6: push    ecx
0x9F86A7: fstp    [esp+4+var_4]; float
0x9F86AA: push    offset aFtrackspeed; "fTrackSpeed"
0x9F86AF: mov     ecx, offset fTrackSpeed
0x9F86B4: call    GameSetting_ConstrAndReg_float
0x9F86B9: push    offset sub_A231F0; void (__cdecl *)()
0x9F86BE: call    _atexit
0x9F86C3: pop     ecx
0x9F86C4: retn
