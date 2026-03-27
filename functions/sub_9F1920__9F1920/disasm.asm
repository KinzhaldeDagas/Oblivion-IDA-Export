0x9F1920: push    offset aMagnitude; "Magnitude"
0x9F1925: push    offset aSmagnitudetext; "sMagnitudeText"
0x9F192A: mov     ecx, offset dword_B38930
0x9F192F: call    GameSetting_ConstrAndReg
0x9F1934: push    offset sub_A21980; void (__cdecl *)()
0x9F1939: call    _atexit
0x9F193E: pop     ecx
0x9F193F: retn
