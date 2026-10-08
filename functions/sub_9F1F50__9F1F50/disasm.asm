0x9F1F50: push    offset aYouCannotCreat; "You cannot create potions during combat"...
0x9F1F55: push    offset aScannotequipal; "sCanNotEquipAlchemy"
0x9F1F5A: mov     ecx, offset stru_B38A60; self
0x9F1F5F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1F64: push    offset sub_A21BE0; void (__cdecl *)()
0x9F1F69: call    _atexit
0x9F1F6E: pop     ecx
0x9F1F6F: retn
