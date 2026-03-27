0x9E8120: push    5Ah ; 'Z'
0x9E8122: push    offset aIactorturndegr; "iActorTurnDegree"
0x9E8127: mov     ecx, offset iActorTurnDegree
0x9E812C: call    GameSetting_ConstrAndReg
0x9E8131: push    offset sub_A1DF40; void (__cdecl *)()
0x9E8136: call    _atexit
0x9E813B: pop     ecx
0x9E813C: retn
