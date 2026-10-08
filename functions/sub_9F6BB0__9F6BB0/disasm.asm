0x9F6BB0: push    offset aMouthLips; "Mouth(Lips)"
0x9F6BB5: push    offset aSmouthlips; "sMouthLips"
0x9F6BBA: mov     ecx, offset stru_B39060; self
0x9F6BBF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6BC4: push    offset sub_A227E0; void (__cdecl *)()
0x9F6BC9: call    _atexit
0x9F6BCE: pop     ecx
0x9F6BCF: retn
