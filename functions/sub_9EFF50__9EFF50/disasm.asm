0x9EFF50: push    offset aWasUnequippedO; "was unequipped on the player"
0x9EFF55: push    offset aSunequipitemon; "sUnequipItemOnPlayer"
0x9EFF5A: mov     ecx, offset dword_B382C0
0x9EFF5F: call    GameSetting_ConstrAndReg
0x9EFF64: push    offset sub_A20CA0; void (__cdecl *)()
0x9EFF69: call    _atexit
0x9EFF6E: pop     ecx
0x9EFF6F: retn
