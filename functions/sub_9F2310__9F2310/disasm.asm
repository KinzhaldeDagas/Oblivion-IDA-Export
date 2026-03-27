0x9F2310: push    offset aYourHorseIsSta; "Your horse is stabled outside the city "...
0x9F2315: push    offset aSfasttravelhor; "sFastTravelHorseatGate"
0x9F231A: mov     ecx, offset sFastTravelHorseatGate
0x9F231F: call    GameSetting_ConstrAndReg
0x9F2324: push    offset sub_A21DC0; void (__cdecl *)()
0x9F2329: call    _atexit
0x9F232E: pop     ecx
0x9F232F: retn
