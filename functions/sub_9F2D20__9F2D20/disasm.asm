0x9F2D20: push    offset aAcceptsYourYie; "accepts your yield."
0x9F2D25: push    offset aSyieldaccepted; "sYieldAccepted"
0x9F2D2A: mov     ecx, 0B38DD0h; self
0x9F2D2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2D34: push    offset sub_A222C0; void (__cdecl *)()
0x9F2D39: call    _atexit
0x9F2D3E: pop     ecx
0x9F2D3F: retn
