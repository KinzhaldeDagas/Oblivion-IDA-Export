0x9F2780: push    offset aDoYouWantToSet; "Do you want to set your marker?"
0x9F2785: push    offset aSsetmarkerques; "sSetMarkerQuestion"
0x9F278A: mov     ecx, offset stru_B38C68; self
0x9F278F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2794: push    offset sub_A21FF0; void (__cdecl *)()
0x9F2799: call    _atexit
0x9F279E: pop     ecx
0x9F279F: retn
