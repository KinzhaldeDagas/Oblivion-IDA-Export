0x9F1A80: push    offset aYourSkillLev_0; "Your skill level is not high enough to "...
0x9F1A85: push    offset aSskillleveltoo; "sSkillLevelTooLow"
0x9F1A8A: mov     ecx, offset dword_B38988
0x9F1A8F: call    GameSetting_ConstrAndReg
0x9F1A94: push    offset sub_A21A30; void (__cdecl *)()
0x9F1A99: call    _atexit
0x9F1A9E: pop     ecx
0x9F1A9F: retn
