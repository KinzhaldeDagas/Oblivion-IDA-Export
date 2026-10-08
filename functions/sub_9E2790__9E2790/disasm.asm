0x9E2790: push    offset aLight; "Light"
0x9E2795: push    offset aSarmorweightli; "sArmorWeightLight"
0x9E279A: mov     ecx, (offset dword_B35AD8+4); self
0x9E279F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E27A4: push    offset sub_A1B690; void (__cdecl *)()
0x9E27A9: call    _atexit
0x9E27AE: pop     ecx
0x9E27AF: retn
