0x9F2560: push    offset aCurrentSoulLev; "Current Soul Level"
0x9F2565: push    offset aScurrentsoul; "sCurrentSoul"
0x9F256A: mov     ecx, offset sCurrentSoul
0x9F256F: call    GameSetting_ConstrAndReg
0x9F2574: push    offset sub_A21EE0; void (__cdecl *)()
0x9F2579: call    _atexit
0x9F257E: pop     ecx
0x9F257F: retn
