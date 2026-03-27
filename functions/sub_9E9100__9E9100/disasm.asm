0x9E9100: push    1Eh
0x9E9102: push    offset aIarmordamagesh; "iArmorDamageShieldChance"
0x9E9107: mov     ecx, offset iArmorDamageShieldChance
0x9E910C: call    GameSetting_ConstrAndReg
0x9E9111: push    offset sub_A1E4E0; void (__cdecl *)()
0x9E9116: call    _atexit
0x9E911B: pop     ecx
0x9E911C: retn
