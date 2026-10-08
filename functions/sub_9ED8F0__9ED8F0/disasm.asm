0x9ED8F0: push    4E20h; defaultValue
0x9ED8F5: push    offset aImapmarkervisi; "iMapMarkerVisibleDistance"
0x9ED8FA: mov     ecx, 0B37BC8h; self
0x9ED8FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9ED904: push    offset sub_A1FEB0; void (__cdecl *)()
0x9ED909: call    _atexit
0x9ED90E: pop     ecx
0x9ED90F: retn
