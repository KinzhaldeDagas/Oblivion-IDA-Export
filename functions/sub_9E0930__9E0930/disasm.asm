0x9E0930: push    28h ; '('
0x9E0932: push    offset aIaidefaultatta; "iAIDefaultAttackChance"
0x9E0937: mov     ecx, offset byte_B355F0
0x9E093C: call    GameSetting_ConstrAndReg
0x9E0941: push    offset sub_A1AB10; void (__cdecl *)()
0x9E0946: call    _atexit
0x9E094B: pop     ecx
0x9E094C: retn
