0x9EFF10: push    offset aRemovedFromThe; "removed from the player's inventory"
0x9EFF15: push    offset aSadditemtoin_0; "sAddItemtoInventoryText"
0x9EFF1A: mov     ecx, offset stru_B382B0; self
0x9EFF1F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EFF24: push    offset sub_A20C80; void (__cdecl *)()
0x9EFF29: call    _atexit
0x9EFF2E: pop     ecx
0x9EFF2F: retn
