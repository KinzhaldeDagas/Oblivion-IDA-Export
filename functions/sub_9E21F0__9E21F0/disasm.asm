0x9E21F0: push    0; defaultValue
0x9E21F2: push    offset aIlevcrealeveld; "iLevCreaLevelDifferenceMax"
0x9E21F7: mov     ecx, 0B35AB0h; self
0x9E21FC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E2201: push    offset sub_A1B3A0; void (__cdecl *)()
0x9E2206: call    _atexit
0x9E220B: pop     ecx
0x9E220C: retn
