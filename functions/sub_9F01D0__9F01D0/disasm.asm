0x9F01D0: push    offset aTodayYouWakeUp; "Today you wake up, full of energy and i"...
0x9F01D5: push    offset aSlevelup14; "sLevelUp14"
0x9F01DA: mov     ecx, offset stru_B38360; self
0x9F01DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F01E4: push    offset sub_A20DE0; void (__cdecl *)()
0x9F01E9: call    _atexit
0x9F01EE: pop     ecx
0x9F01EF: retn
