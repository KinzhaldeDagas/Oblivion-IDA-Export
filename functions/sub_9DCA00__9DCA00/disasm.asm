0x9DCA00: push    offset aIgnore; "Ignore"
0x9DCA05: push    offset aSignoretext; "sIgnoreText"
0x9DCA0A: mov     ecx, 0B34DC4h; self
0x9DCA0F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DCA14: push    offset sub_A18AB0; void (__cdecl *)()
0x9DCA19: call    _atexit
0x9DCA1E: pop     ecx
0x9DCA1F: retn
