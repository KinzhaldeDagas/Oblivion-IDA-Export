0x9F6930: push    offset off_A62A00; defaultValue
0x9F6935: push    offset aSred; "sRed"
0x9F693A: mov     ecx, offset stru_B38FC0; self
0x9F693F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6944: push    offset sub_A226A0; void (__cdecl *)()
0x9F6949: call    _atexit
0x9F694E: pop     ecx
0x9F694F: retn
