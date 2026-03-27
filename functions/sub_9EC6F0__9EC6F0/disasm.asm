0x9EC6F0: push    1Eh
0x9EC6F2: push    offset aIdeathdropweap; "iDeathDropWeaponChance"
0x9EC6F7: mov     ecx, offset iDeathDropWeaponChance
0x9EC6FC: call    GameSetting_ConstrAndReg
0x9EC701: push    offset sub_A1F880; void (__cdecl *)()
0x9EC706: call    _atexit
0x9EC70B: pop     ecx
0x9EC70C: retn
