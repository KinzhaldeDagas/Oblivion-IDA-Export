0x9F13E0: push    offset aSaveGameDelete; "Save game deleted."
0x9F13E5: push    offset aSdeletesuccess; "sDeleteSuccessful"
0x9F13EA: mov     ecx, offset stru_B387E0; self
0x9F13EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F13F4: push    offset sub_A216E0; void (__cdecl *)()
0x9F13F9: call    _atexit
0x9F13FE: pop     ecx
0x9F13FF: retn
