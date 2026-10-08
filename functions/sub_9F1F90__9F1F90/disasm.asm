0x9F1F90: push    offset aYouCannotRecha; "You cannot recharge enchanted items dur"...
0x9F1F95: push    offset aScannotequipso; "sCanNotEquipSoulGem"
0x9F1F9A: mov     ecx, offset stru_B38A70; self
0x9F1F9F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1FA4: push    offset sub_A21C00; void (__cdecl *)()
0x9F1FA9: call    _atexit
0x9F1FAE: pop     ecx
0x9F1FAF: retn
