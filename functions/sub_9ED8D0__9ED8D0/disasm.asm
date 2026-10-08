0x9ED8D0: push    3E8h; defaultValue
0x9ED8D5: push    offset aImapmarkerreve; "iMapMarkerRevealDistance"
0x9ED8DA: mov     ecx, 0B37BC0h; self
0x9ED8DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9ED8E4: push    offset sub_A1FEA0; void (__cdecl *)()
0x9ED8E9: call    _atexit
0x9ED8EE: pop     ecx
0x9ED8EF: retn
