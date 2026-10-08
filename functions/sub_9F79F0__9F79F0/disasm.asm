0x9F79F0: push    2B2F4Dh; defaultValue
0x9F79F5: push    offset aIhaircolor07; "iHairColor07"
0x9F79FA: mov     ecx, offset stru_B393F0; self
0x9F79FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7A04: push    offset sub_A22F00; void (__cdecl *)()
0x9F7A09: call    _atexit
0x9F7A0E: pop     ecx
0x9F7A0F: retn
