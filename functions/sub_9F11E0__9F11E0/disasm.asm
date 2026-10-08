0x9F11E0: push    offset aAreYouSureYo_3; "Are you sure you want to delete this sa"...
0x9F11E5: push    offset aSdeletesavegam; "sDeleteSaveGame"
0x9F11EA: mov     ecx, offset stru_B38760; self
0x9F11EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F11F4: push    offset sub_A215E0; void (__cdecl *)()
0x9F11F9: call    _atexit
0x9F11FE: pop     ecx
0x9F11FF: retn
