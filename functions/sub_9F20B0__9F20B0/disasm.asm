0x9F20B0: push    offset aYouCannotSle_0; "You cannot sleep while in combat."
0x9F20B5: push    offset aSnosleepcombat; "sNoSleepCombat"
0x9F20BA: mov     ecx, offset stru_B38AB8; self
0x9F20BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F20C4: push    offset sub_A21C90; void (__cdecl *)()
0x9F20C9: call    _atexit
0x9F20CE: pop     ecx
0x9F20CF: retn
