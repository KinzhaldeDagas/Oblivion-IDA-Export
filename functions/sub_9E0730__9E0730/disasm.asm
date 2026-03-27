0x9E0730: push    4Bh ; 'K'
0x9E0732: push    offset aIaidefaultdodg; "iAIDefaultDodgeChance"
0x9E0737: mov     ecx, offset byte_B35590
0x9E073C: call    GameSetting_ConstrAndReg
0x9E0741: push    offset sub_A1AA50; void (__cdecl *)()
0x9E0746: call    _atexit
0x9E074B: pop     ecx
0x9E074C: retn
