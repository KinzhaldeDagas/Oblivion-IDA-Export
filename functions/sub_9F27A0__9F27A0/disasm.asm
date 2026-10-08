0x9F27A0: push    offset aDoYouWantToMov; "Do you want to move your marker or remo"...
0x9F27A5: push    offset aSmovemarkerque; "sMoveMarkerQuestion"
0x9F27AA: mov     ecx, offset stru_B38C70; self
0x9F27AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F27B4: push    offset sub_A22000; void (__cdecl *)()
0x9F27B9: call    _atexit
0x9F27BE: pop     ecx
0x9F27BF: retn
