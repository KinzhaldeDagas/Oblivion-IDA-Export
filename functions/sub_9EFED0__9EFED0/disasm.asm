0x9EFED0: push    offset aAddedToThePlay; "added to the player's inventory"
0x9EFED5: push    offset aSadditemtoinve; "sAddItemtoInventory"
0x9EFEDA: mov     ecx, offset sAddItemtoInventory
0x9EFEDF: call    GameSetting_ConstrAndReg
0x9EFEE4: push    offset sub_A20C60; void (__cdecl *)()
0x9EFEE9: call    _atexit
0x9EFEEE: pop     ecx
0x9EFEEF: retn
