0x9F1BA0: push    offset aYouMustFirst_0; "You must first enter a valid name for t"...
0x9F1BA5: push    offset aSnoname; "sNoName"
0x9F1BAA: mov     ecx, 0B389D0h; self
0x9F1BAF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1BB4: push    offset sub_A21AC0; void (__cdecl *)()
0x9F1BB9: call    _atexit
0x9F1BBE: pop     ecx
0x9F1BBF: retn
