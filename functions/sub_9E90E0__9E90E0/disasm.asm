0x9E90E0: push    0Ah
0x9E90E2: push    offset aIarmordamagebo; "iArmorDamageBootsChance"
0x9E90E7: mov     ecx, offset iArmorDamageBootsChance
0x9E90EC: call    GameSetting_ConstrAndReg
0x9E90F1: push    offset sub_A1E4D0; void (__cdecl *)()
0x9E90F6: call    _atexit
0x9E90FB: pop     ecx
0x9E90FC: retn
