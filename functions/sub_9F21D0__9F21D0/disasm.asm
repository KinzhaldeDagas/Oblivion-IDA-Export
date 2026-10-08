0x9F21D0: push    offset aYouCannotWai_3; "You cannot wait while in the air."
0x9F21D5: push    offset aSnowaitinair; "sNoWaitInAir"
0x9F21DA: mov     ecx, offset stru_B38B00; self
0x9F21DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F21E4: push    offset sub_A21D20; void (__cdecl *)()
0x9F21E9: call    _atexit
0x9F21EE: pop     ecx
0x9F21EF: retn
