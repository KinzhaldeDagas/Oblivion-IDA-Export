0x9F1740: push    offset aTheCurrentWeap; "The current weapon is already poisoned."
0x9F1745: push    offset aSpoisonalready; "sPoisonAlreadyPoisonedMessage"
0x9F174A: mov     ecx, offset stru_B388B8; self
0x9F174F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1754: push    offset sub_A21890; void (__cdecl *)()
0x9F1759: call    _atexit
0x9F175E: pop     ecx
0x9F175F: retn
