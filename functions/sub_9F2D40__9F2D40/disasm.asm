0x9F2D40: push    offset aRejectsYourYie; "rejects your yield!"
0x9F2D45: push    offset aSyieldrejected; "sYieldRejected"
0x9F2D4A: mov     ecx, 0B38DD8h; self
0x9F2D4F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2D54: push    offset sub_A222D0; void (__cdecl *)()
0x9F2D59: call    _atexit
0x9F2D5E: pop     ecx
0x9F2D5F: retn
