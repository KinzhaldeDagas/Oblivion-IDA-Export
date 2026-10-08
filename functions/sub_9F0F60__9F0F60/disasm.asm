0x9F0F60: push    offset aThisSaveRelies; "This save relies on content that is no "...
0x9F0F65: push    offset aSsavegameconte; "sSaveGameContentIsMissing"
0x9F0F6A: mov     ecx, offset stru_B386C0; self
0x9F0F6F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0F74: push    offset sub_A214A0; void (__cdecl *)()
0x9F0F79: call    _atexit
0x9F0F7E: pop     ecx
0x9F0F7F: retn
