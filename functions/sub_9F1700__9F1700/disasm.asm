0x9F1700: push    offset off_A5F4B0; defaultValue
0x9F1705: push    offset aSall; "sAll"
0x9F170A: mov     ecx, offset stru_B388A8; self
0x9F170F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1714: push    offset sub_A21870; void (__cdecl *)()
0x9F1719: call    _atexit
0x9F171E: pop     ecx
0x9F171F: retn
