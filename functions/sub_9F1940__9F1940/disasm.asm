0x9F1940: push    offset aDuration; "Duration"
0x9F1945: push    offset aSdurationtext; "sDurationText"
0x9F194A: mov     ecx, offset unk_B38938
0x9F194F: call    GameSetting_ConstrAndReg
0x9F1954: push    offset sub_A21990; void (__cdecl *)()
0x9F1959: call    _atexit
0x9F195E: pop     ecx
0x9F195F: retn
