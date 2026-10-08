0x9F1280: push    offset aYouCannotSav_0; "You cannot save right now."
0x9F1285: push    offset aScantsavenow; "sCantSaveNow"
0x9F128A: mov     ecx, offset stru_B38788; self
0x9F128F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1294: push    offset sub_A21630; void (__cdecl *)()
0x9F1299: call    _atexit
0x9F129E: pop     ecx
0x9F129F: retn
