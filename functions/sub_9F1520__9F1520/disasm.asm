0x9F1520: push    offset aLoadingExtraCo; "Loading extra content. Please wait."
0x9F1525: push    offset aSloadingconten; "sLoadingContentMessage"
0x9F152A: mov     ecx, offset stru_B38830; self
0x9F152F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1534: push    offset sub_A21780; void (__cdecl *)()
0x9F1539: call    _atexit
0x9F153E: pop     ecx
0x9F153F: retn
