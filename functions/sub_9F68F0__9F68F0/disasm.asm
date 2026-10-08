0x9F68F0: push    offset aRaceDescriptio; "Race Description"
0x9F68F5: push    offset aSracedescripti; "sRaceDescription"
0x9F68FA: mov     ecx, offset stru_B38FB0; self
0x9F68FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6904: push    offset sub_A22680; void (__cdecl *)()
0x9F6909: call    _atexit
0x9F690E: pop     ecx
0x9F690F: retn
