0x9EFF50: push    offset aWasUnequippedO; "was unequipped on the player"
0x9EFF55: push    offset aSunequipitemon; "sUnequipItemOnPlayer"
0x9EFF5A: mov     ecx, offset stru_B382C0; self
0x9EFF5F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EFF64: push    offset sub_A20CA0; void (__cdecl *)()
0x9EFF69: call    _atexit
0x9EFF6E: pop     ecx
0x9EFF6F: retn
