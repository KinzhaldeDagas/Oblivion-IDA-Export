0x9E2A10: push    offset aGrand; "Grand"
0x9E2A15: push    offset aSsoullevelna_3; "sSoulLevelNameGrand"
0x9E2A1A: mov     ecx, offset stru_B35B7C; self
0x9E2A1F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E2A24: push    offset sub_A1B7C0; void (__cdecl *)()
0x9E2A29: call    _atexit
0x9E2A2E: pop     ecx
0x9E2A2F: retn
