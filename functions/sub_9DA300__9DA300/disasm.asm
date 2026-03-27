0x9DA300: push    offset aEnchantment; "Enchantment"
0x9DA305: push    offset aSmagictypeench; "sMagicTypeEnchantment"
0x9DA30A: mov     ecx, offset sMagicTypeEnchantment
0x9DA30F: call    GameSetting_ConstrAndReg
0x9DA314: push    offset sub_A17720; void (__cdecl *)()
0x9DA319: call    _atexit
0x9DA31E: pop     ecx
0x9DA31F: retn
