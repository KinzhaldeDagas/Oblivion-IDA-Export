0x9E9060: push    19h
0x9E9062: push    offset aIarmordamagecu; "iArmorDamageCuirassChance"
0x9E9067: mov     ecx, offset iArmorDamageCuirassChance
0x9E906C: call    GameSetting_ConstrAndReg
0x9E9071: push    offset sub_A1E490; void (__cdecl *)()
0x9E9076: call    _atexit
0x9E907B: pop     ecx
0x9E907C: retn
