0x9F2330: push    offset aYouCanTFastTra; Static GameSetting constructor only; not the runtime validation callback.
0x9F2335: push    offset aSfasttravelnot; "sFastTravelNoTravelHealthDamage"
0x9F233A: mov     ecx, offset stru_B38B58; self
0x9F233F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2344: push    offset sub_A21DD0; void (__cdecl *)()
0x9F2349: call    _atexit
0x9F234E: pop     ecx
0x9F234F: retn
