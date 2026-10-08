0x9F0BB0: push    offset aCombat_0; "Combat"
0x9F0BB5: push    offset aScombatname; "sCombatName"
0x9F0BBA: mov     ecx, offset stru_B385D8; self
0x9F0BBF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0BC4: push    offset sub_A212D0; void (__cdecl *)()
0x9F0BC9: call    _atexit
0x9F0BCE: pop     ecx
0x9F0BCF: retn
