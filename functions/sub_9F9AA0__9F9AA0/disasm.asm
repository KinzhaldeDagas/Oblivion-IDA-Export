0x9F9AA0: push    offset aConfidence; "Confidence"
0x9F9AA5: push    offset aStraitnameconf; "sTraitNameConfidence"
0x9F9AAA: mov     ecx, 0B3A144h; self
0x9F9AAF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9AB4: push    offset sub_A23AC0; void (__cdecl *)()
0x9F9AB9: call    _atexit
0x9F9ABE: pop     ecx
0x9F9ABF: retn
