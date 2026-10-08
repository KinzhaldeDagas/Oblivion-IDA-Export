0x9F31F0: push    offset aThatKeyCannotB; "That key cannot be remapped"
0x9F31F5: push    offset aSkeylocked; "sKeyLocked"
0x9F31FA: mov     ecx, offset stru_B38ED0; self
0x9F31FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F3204: push    offset sub_A224C0; void (__cdecl *)()
0x9F3209: call    _atexit
0x9F320E: pop     ecx
0x9F320F: retn
