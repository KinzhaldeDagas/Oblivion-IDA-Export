0x9EFF30: push    offset aWasEquippedOnT; "was equipped on the player"
0x9EFF35: push    offset aSequipitemonpl; "sEquipItemOnPlayer"
0x9EFF3A: mov     ecx, offset dword_B382B8
0x9EFF3F: call    GameSetting_ConstrAndReg
0x9EFF44: push    offset sub_A20C90; void (__cdecl *)()
0x9EFF49: call    _atexit
0x9EFF4E: pop     ecx
0x9EFF4F: retn
