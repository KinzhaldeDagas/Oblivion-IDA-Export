0x9F6DB0: push    offset aChinPronounced; "Chin pronounced/recessed"
0x9F6DB5: push    offset aSchinpronounce; "sChinpronounced"
0x9F6DBA: mov     ecx, offset stru_B390E0; self
0x9F6DBF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6DC4: push    offset sub_A228E0; void (__cdecl *)()
0x9F6DC9: call    _atexit
0x9F6DCE: pop     ecx
0x9F6DCF: retn
