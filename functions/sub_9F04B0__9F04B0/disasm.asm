0x9F04B0: push    offset aCreaturesKille; "Creatures Killed: "
0x9F04B5: push    offset aSmiscnumkills; "sMiscNumKills"
0x9F04BA: mov     ecx, offset sMiscNumKills
0x9F04BF: call    GameSetting_ConstrAndReg
0x9F04C4: push    offset sub_A20F50; void (__cdecl *)()
0x9F04C9: call    _atexit
0x9F04CE: pop     ecx
0x9F04CF: retn
