0x9F1E90: push    offset aYouCannotEquip; "You cannot equip this item."
0x9F1E95: push    offset aScantequipgene; "sCantEquipGeneric"
0x9F1E9A: mov     ecx, offset stru_B38A30; self
0x9F1E9F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1EA4: push    offset sub_A21B80; void (__cdecl *)()
0x9F1EA9: call    _atexit
0x9F1EAE: pop     ecx
0x9F1EAF: retn
