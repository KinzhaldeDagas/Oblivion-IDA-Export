0x9EA290: push    64h ; 'd'
0x9EA292: push    offset aIcombathighpri; "iCombatHighPriorityModifier"
0x9EA297: mov     ecx, offset iCombatHighPriorityModifier
0x9EA29C: call    GameSetting_ConstrAndReg
0x9EA2A1: push    offset sub_A1EB40; void (__cdecl *)()
0x9EA2A6: call    _atexit
0x9EA2AB: pop     ecx
0x9EA2AC: retn
