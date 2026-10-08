0x9F2A80: push    offset aYour; "Your"
0x9F2A85: push    offset aSyour; "sYour"
0x9F2A8A: mov     ecx, 0B38D28h; self
0x9F2A8F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2A94: push    offset sub_A22170; void (__cdecl *)()
0x9F2A99: call    _atexit
0x9F2A9E: pop     ecx
0x9F2A9F: retn
