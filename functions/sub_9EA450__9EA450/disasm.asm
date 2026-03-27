0x9EA450: push    1
0x9EA452: push    offset aIcombatcastdra; "iCombatCastDrainMinimumValue"
0x9EA457: mov     ecx, offset iCombatCastDrainMinimumValue
0x9EA45C: call    GameSetting_ConstrAndReg
0x9EA461: push    offset sub_A1EC00; void (__cdecl *)()
0x9EA466: call    _atexit
0x9EA46B: pop     ecx
0x9EA46C: retn
