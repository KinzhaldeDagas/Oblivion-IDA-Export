0x9F3150: push    offset aGotAwayWithSte; "got away with stealing"
0x9F3155: push    offset aSgotawaywithst; "sGotAwayWithStealing"
0x9F315A: mov     ecx, offset stru_B38EA8; self
0x9F315F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F3164: push    offset sub_A22470; void (__cdecl *)()
0x9F3169: call    _atexit
0x9F316E: pop     ecx
0x9F316F: retn
