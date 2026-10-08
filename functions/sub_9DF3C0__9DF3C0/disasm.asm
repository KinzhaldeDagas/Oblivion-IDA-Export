0x9DF3C0: push    offset aHeartFire; "Heart Fire"
0x9DF3C5: push    offset aSmonthheartfir; "sMonthHeartFire"
0x9DF3CA: mov     ecx, 0B3512Ch; self
0x9DF3CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF3D4: push    offset sub_A19FA0; void (__cdecl *)()
0x9DF3D9: call    _atexit
0x9DF3DE: pop     ecx
0x9DF3DF: retn
