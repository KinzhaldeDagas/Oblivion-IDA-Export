0x9EFED0: push    offset aAddedToThePlay; "added to the player's inventory"
0x9EFED5: push    offset aSadditemtoinve; "sAddItemtoInventory"
0x9EFEDA: mov     ecx, (offset flt_B37ED0+3D0h); self
0x9EFEDF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EFEE4: push    offset sub_A20C60; void (__cdecl *)()
0x9EFEE9: call    _atexit
0x9EFEEE: pop     ecx
0x9EFEEF: retn
