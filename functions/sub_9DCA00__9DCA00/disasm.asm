0x9DCA00: push    offset aIgnore; "Ignore"
0x9DCA05: push    offset aSignoretext; "sIgnoreText"
0x9DCA0A: mov     ecx, offset dword_B34DC4
0x9DCA0F: call    GameSetting_ConstrAndReg
0x9DCA14: push    offset sub_A18AB0; void (__cdecl *)()
0x9DCA19: call    _atexit
0x9DCA1E: pop     ecx
0x9DCA1F: retn
