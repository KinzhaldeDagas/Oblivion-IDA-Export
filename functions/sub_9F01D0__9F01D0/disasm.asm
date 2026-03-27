0x9F01D0: push    offset aTodayYouWakeUp; "Today you wake up, full of energy and i"...
0x9F01D5: push    offset aSlevelup14; "sLevelUp14"
0x9F01DA: mov     ecx, offset dword_B38360
0x9F01DF: call    GameSetting_ConstrAndReg
0x9F01E4: push    offset sub_A20DE0; void (__cdecl *)()
0x9F01E9: call    _atexit
0x9F01EE: pop     ecx
0x9F01EF: retn
