0x9DCA20: push    offset aOk; "OK"
0x9DCA25: push    offset aSoktext; "sOKText"
0x9DCA2A: mov     ecx, 0B34DCCh; self
0x9DCA2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DCA34: push    offset sub_A18AC0; void (__cdecl *)()
0x9DCA39: call    _atexit
0x9DCA3E: pop     ecx
0x9DCA3F: retn
