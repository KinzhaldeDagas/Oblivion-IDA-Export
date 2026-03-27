0x9F2DE0: push    offset aHasBeenDamaged; "has been damaged"
0x9F2DE5: push    offset aSattributedama; "sAttributeDamaged"
0x9F2DEA: mov     ecx, offset sAttributeDamaged
0x9F2DEF: call    GameSetting_ConstrAndReg
0x9F2DF4: push    offset sub_A22320; void (__cdecl *)()
0x9F2DF9: call    _atexit
0x9F2DFE: pop     ecx
0x9F2DFF: retn
