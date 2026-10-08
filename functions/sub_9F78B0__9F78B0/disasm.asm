0x9F78B0: push    offset aShaircolor13; "sHairColor13"
0x9F78B5: push    offset aShaircolor13; "sHairColor13"
0x9F78BA: mov     ecx, offset stru_B393A0; self
0x9F78BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F78C4: push    offset sub_A22E60; void (__cdecl *)()
0x9F78C9: call    _atexit
0x9F78CE: pop     ecx
0x9F78CF: retn
