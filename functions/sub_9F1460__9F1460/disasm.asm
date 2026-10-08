0x9F1460: push    offset aYesRestartTheG; "Yes, restart the game."
0x9F1465: push    offset aSyesrestart; "sYesRestart"
0x9F146A: mov     ecx, offset stru_B38800; self
0x9F146F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1474: push    offset sub_A21720; void (__cdecl *)()
0x9F1479: call    _atexit
0x9F147E: pop     ecx
0x9F147F: retn
