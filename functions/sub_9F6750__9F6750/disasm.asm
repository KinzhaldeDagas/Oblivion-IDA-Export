0x9F6750: push    offset aEnchantedItem; "enchanted item"
0x9F6755: push    offset aSenchanteditem; "sEnchantedItem"
0x9F675A: mov     ecx, offset stru_B38F48; self
0x9F675F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6764: push    offset sub_A225B0; void (__cdecl *)()
0x9F6769: call    _atexit
0x9F676E: pop     ecx
0x9F676F: retn
