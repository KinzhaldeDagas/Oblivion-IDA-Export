0x9DA380: push    offset aWeapon; "Weapon"
0x9DA385: push    offset aSmagiccastwhen; "sMagicCastWhenStrikes"
0x9DA38A: mov     ecx, offset sMagicCastWhenStrikes
0x9DA38F: call    GameSetting_ConstrAndReg
0x9DA394: push    offset sub_A17760; void (__cdecl *)()
0x9DA399: call    _atexit
0x9DA39E: pop     ecx
0x9DA39F: retn
