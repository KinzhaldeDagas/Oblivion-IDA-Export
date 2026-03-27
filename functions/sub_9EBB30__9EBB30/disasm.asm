0x9EBB30: push    28h ; '('
0x9EBB32: push    offset aIcrimegoldat_0; "iCrimeGoldAttack"
0x9EBB37: mov     ecx, offset iCrimeGoldAttack
0x9EBB3C: call    GameSetting_ConstrAndReg
0x9EBB41: push    offset sub_A1F430; void (__cdecl *)()
0x9EBB46: call    _atexit
0x9EBB4B: pop     ecx
0x9EBB4C: retn
