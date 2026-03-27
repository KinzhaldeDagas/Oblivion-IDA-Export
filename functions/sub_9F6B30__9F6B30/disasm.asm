0x9F6B30: push    offset aGeneralSkin; "General(Skin)"
0x9F6B35: push    offset aSgeneralskin; "sGeneralSkin"
0x9F6B3A: mov     ecx, offset dword_B39040
0x9F6B3F: call    GameSetting_ConstrAndReg
0x9F6B44: push    offset sub_A227A0; void (__cdecl *)()
0x9F6B49: call    _atexit
0x9F6B4E: pop     ecx
0x9F6B4F: retn
