0x9E8140: push    0Ah
0x9E8142: push    offset aIactorkeepturn; "iActorKeepTurnDegree"
0x9E8147: mov     ecx, offset iActorKeepTurnDegree
0x9E814C: call    GameSetting_ConstrAndReg
0x9E8151: push    offset sub_A1DF50; void (__cdecl *)()
0x9E8156: call    _atexit
0x9E815B: pop     ecx
0x9E815C: retn
