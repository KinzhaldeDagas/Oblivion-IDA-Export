0x9F04F0: push    offset aLocksPicked; "Locks Picked: "
0x9F04F5: push    offset aSmiscnumlocksp; "sMiscNumLocksPicked"
0x9F04FA: mov     ecx, offset sMiscNumLocksPicked
0x9F04FF: call    GameSetting_ConstrAndReg
0x9F0504: push    offset sub_A20F70; void (__cdecl *)()
0x9F0509: call    _atexit
0x9F050E: pop     ecx
0x9F050F: retn
