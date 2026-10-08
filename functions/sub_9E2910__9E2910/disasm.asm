0x9E2910: push    offset aPetty; "Petty"
0x9E2915: push    offset aSsoullevelname; "sSoulLevelNamePetty"
0x9E291A: mov     ecx, offset stru_B35B3C; self
0x9E291F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E2924: push    offset sub_A1B740; void (__cdecl *)()
0x9E2929: call    _atexit
0x9E292E: pop     ecx
0x9E292F: retn
