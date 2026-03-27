0x9E90A0: push    0Ah
0x9E90A2: push    offset aIarmordamagehe; "iArmorDamageHelmChance"
0x9E90A7: mov     ecx, offset iArmorDamageHelmChance
0x9E90AC: call    GameSetting_ConstrAndReg
0x9E90B1: push    offset sub_A1E4B0; void (__cdecl *)()
0x9E90B6: call    _atexit
0x9E90BB: pop     ecx
0x9E90BC: retn
