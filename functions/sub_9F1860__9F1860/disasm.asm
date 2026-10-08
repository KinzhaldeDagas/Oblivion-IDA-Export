0x9F1860: push    offset aNamePotion; "Name Potion"
0x9F1865: push    offset aSnamepotion; "sNamePotion"
0x9F186A: mov     ecx, offset stru_B38900; self
0x9F186F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1874: push    offset sub_A21920; void (__cdecl *)()
0x9F1879: call    _atexit
0x9F187E: pop     ecx
0x9F187F: retn
