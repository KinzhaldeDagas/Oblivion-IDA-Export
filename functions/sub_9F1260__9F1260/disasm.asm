0x9F1260: push    offset aAreYouSureYo_5; "Are you sure you want to load this game"...
0x9F1265: push    offset aSloadwhileplay; "sLoadWhilePlaying"
0x9F126A: mov     ecx, offset stru_B38780; self
0x9F126F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1274: push    offset sub_A21620; void (__cdecl *)()
0x9F1279: call    _atexit
0x9F127E: pop     ecx
0x9F127F: retn
