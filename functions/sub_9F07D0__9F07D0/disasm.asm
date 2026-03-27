0x9F07D0: push    offset aDiseasesContra; "Diseases Contracted: "
0x9F07D5: push    offset aSmiscdiseasesc; "sMiscDiseasesContracted"
0x9F07DA: mov     ecx, offset dword_B384E0
0x9F07DF: call    GameSetting_ConstrAndReg
0x9F07E4: push    offset sub_A210E0; void (__cdecl *)()
0x9F07E9: call    _atexit
0x9F07EE: pop     ecx
0x9F07EF: retn
