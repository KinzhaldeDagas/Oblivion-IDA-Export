0x9F2150: push    offset aYouCannotWaitW; "You cannot wait while in combat."
0x9F2155: push    offset aSnowaitincomba; "sNoWaitInCombat"
0x9F215A: mov     ecx, offset stru_B38AE0; self
0x9F215F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2164: push    offset sub_A21CE0; void (__cdecl *)()
0x9F2169: call    _atexit
0x9F216E: pop     ecx
0x9F216F: retn
