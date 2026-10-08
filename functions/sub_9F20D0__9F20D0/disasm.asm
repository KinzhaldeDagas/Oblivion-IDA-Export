0x9F20D0: push    offset aYouCannotSle_1; "You cannot sleep when enemies are near "...
0x9F20D5: push    offset aSnosleephostil; "sNoSleepHostilActorsNear"
0x9F20DA: mov     ecx, offset stru_B38AC0; self
0x9F20DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F20E4: push    offset sub_A21CA0; void (__cdecl *)()
0x9F20E9: call    _atexit
0x9F20EE: pop     ecx
0x9F20EF: retn
