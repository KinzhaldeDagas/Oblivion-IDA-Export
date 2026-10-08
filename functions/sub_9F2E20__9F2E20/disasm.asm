0x9F2E20: push    offset aDefaultMessage; "DEFAULT MESSAGE TEXT"
0x9F2E25: push    offset aSdefaultmessag; "sDefaultMessage"
0x9F2E2A: mov     ecx, 0B38E10h; self
0x9F2E2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2E34: push    offset sub_A22340; void (__cdecl *)()
0x9F2E39: call    _atexit
0x9F2E3E: pop     ecx
0x9F2E3F: retn
