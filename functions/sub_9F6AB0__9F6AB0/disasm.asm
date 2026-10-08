0x9F6AB0: push    offset aForehead; "Forehead"
0x9F6AB5: push    offset aSforehead; "sForehead"
0x9F6ABA: mov     ecx, offset stru_B39020; self
0x9F6ABF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6AC4: push    offset sub_A22760; void (__cdecl *)()
0x9F6AC9: call    _atexit
0x9F6ACE: pop     ecx
0x9F6ACF: retn
