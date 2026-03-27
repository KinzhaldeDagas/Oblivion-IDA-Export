0x9F2350: push    offset aYouCannotFas_1; "You cannot fast travel while guards are"...
0x9F2355: push    offset aSnofasttravela; "sNoFastTravelAlarm"
0x9F235A: mov     ecx, offset dword_B38B60
0x9F235F: call    GameSetting_ConstrAndReg
0x9F2364: push    offset sub_A21DE0; void (__cdecl *)()
0x9F2369: call    _atexit
0x9F236E: pop     ecx
0x9F236F: retn
