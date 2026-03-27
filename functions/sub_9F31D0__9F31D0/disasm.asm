0x9F31D0: push    offset aNoActiveDevice; "No active devices were detected"
0x9F31D5: push    offset aSnodevice; "sNoDevice"
0x9F31DA: mov     ecx, offset dword_B38EC8
0x9F31DF: call    GameSetting_ConstrAndReg
0x9F31E4: push    offset sub_A224B0; void (__cdecl *)()
0x9F31E9: call    _atexit
0x9F31EE: pop     ecx
0x9F31EF: retn
