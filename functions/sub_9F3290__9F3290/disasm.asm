0x9F3290: push    offset aMappingsToThei; "mappings to their default values"
0x9F3295: push    offset aScontrolsmen_1; "sControlsMenuConfirmReset2"
0x9F329A: mov     ecx, offset stru_B38EF8; self
0x9F329F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F32A4: push    offset sub_A22510; void (__cdecl *)()
0x9F32A9: call    _atexit
0x9F32AE: pop     ecx
0x9F32AF: retn
