0x9F0590: push    offset aTrespasses; "Trespasses: "
0x9F0595: push    offset aSmiscnumtrespa; "sMiscNumTrespasses"
0x9F059A: mov     ecx, offset sMiscNumTrespasses
0x9F059F: call    GameSetting_ConstrAndReg
0x9F05A4: push    offset sub_A20FC0; void (__cdecl *)()
0x9F05A9: call    _atexit
0x9F05AE: pop     ecx
0x9F05AF: retn
