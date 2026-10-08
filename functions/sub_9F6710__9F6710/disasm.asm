0x9F6710: push    offset aPotion_0; "potion"
0x9F6715: push    offset aSpotion; "sPotion"
0x9F671A: mov     ecx, offset stru_B38F38; self
0x9F671F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6724: push    offset sub_A22590; void (__cdecl *)()
0x9F6729: call    _atexit
0x9F672E: pop     ecx
0x9F672F: retn
