0x9F7AF0: push    offset loc_52667C; defaultValue
0x9F7AF5: push    offset aIhaircolor15; "iHairColor15"
0x9F7AFA: mov     ecx, offset stru_B39430; self
0x9F7AFF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7B04: push    offset sub_A22F80; void (__cdecl *)()
0x9F7B09: call    _atexit
0x9F7B0E: pop     ecx
0x9F7B0F: retn
