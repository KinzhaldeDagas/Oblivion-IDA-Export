0x9E09E0: push    19h
0x9E09E2: push    offset aIaidefaultpowe; "iAIDefaultPowerAttackChance"
0x9E09E7: mov     ecx, offset byte_B35610
0x9E09EC: call    GameSetting_ConstrAndReg
0x9E09F1: push    offset sub_A1AB50; void (__cdecl *)()
0x9E09F6: call    _atexit
0x9E09FB: pop     ecx
0x9E09FC: retn
