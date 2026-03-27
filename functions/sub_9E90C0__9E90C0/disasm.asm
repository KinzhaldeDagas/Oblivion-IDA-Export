0x9E90C0: push    0Ah
0x9E90C2: push    offset aIarmordamagega; "iArmorDamageGauntletsChance"
0x9E90C7: mov     ecx, offset iArmorDamageGauntletsChance
0x9E90CC: call    GameSetting_ConstrAndReg
0x9E90D1: push    offset sub_A1E4C0; void (__cdecl *)()
0x9E90D6: call    _atexit
0x9E90DB: pop     ecx
0x9E90DC: retn
