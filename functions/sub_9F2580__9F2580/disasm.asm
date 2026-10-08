0x9F2580: push    offset aArmor; "Armor"
0x9F2585: push    offset aSarmor; "sArmor"
0x9F258A: mov     ecx, offset stru_B38BE8; self
0x9F258F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2594: push    offset sub_A21EF0; void (__cdecl *)()
0x9F2599: call    _atexit
0x9F259E: pop     ecx
0x9F259F: retn
