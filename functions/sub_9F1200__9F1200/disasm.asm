0x9F1200: push    offset aAreYouSureYo_4; "Are you sure you want to load this game"...
0x9F1205: push    offset aSloadfrommainm; "sLoadFromMainMenu"
0x9F120A: mov     ecx, offset stru_B38768; self
0x9F120F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1214: push    offset sub_A215F0; void (__cdecl *)()
0x9F1219: call    _atexit
0x9F121E: pop     ecx
0x9F121F: retn
