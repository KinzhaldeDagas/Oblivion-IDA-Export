0x9F8880: fld     ds:fConstant_2
0x9F8886: push    ecx
0x9F8887: fstp    [esp+4+var_4]; float
0x9F888A: push    offset aFtrackjustaqui; "fTrackJustAquiredDuration"
0x9F888F: mov     ecx, offset fTrackJustAquiredDuration
0x9F8894: call    GameSetting_ConstrAndReg_float
0x9F8899: push    offset sub_A23290; void (__cdecl *)()
0x9F889E: call    _atexit
0x9F88A3: pop     ecx
0x9F88A4: retn
