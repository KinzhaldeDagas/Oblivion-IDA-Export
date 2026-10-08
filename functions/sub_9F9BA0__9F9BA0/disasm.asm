0x9F9BA0: push    offset aWillpowerDescr; "Willpower Description"
0x9F9BA5: push    offset aSattributede_1; "sAttributeDescWillpower"
0x9F9BAA: mov     ecx, 0B3A184h; self
0x9F9BAF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9BB4: push    offset sub_A23B40; void (__cdecl *)()
0x9F9BB9: call    _atexit
0x9F9BBE: pop     ecx
0x9F9BBF: retn
