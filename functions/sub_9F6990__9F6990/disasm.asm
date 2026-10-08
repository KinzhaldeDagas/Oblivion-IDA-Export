0x9F6990: push    offset aLength; Registers sLength ('Length'), the Hair category control bound to TESNPC::hairLength.
0x9F6995: push    offset aSlength; "sLength"
0x9F699A: mov     ecx, offset g_gameSetting_sLength; self
0x9F699F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F69A4: push    offset sub_A226D0; void (__cdecl *)()
0x9F69A9: call    _atexit
0x9F69AE: pop     ecx
0x9F69AF: retn
