0x9F0330: push    offset aYouShouldRestA; "You should rest and meditate on what yo"...
0x9F0335: push    offset aSmeditate; "sMeditate"
0x9F033A: mov     ecx, offset sGameSetting_Meditate
0x9F033F: call    GameSetting_ConstrAndReg
0x9F0344: push    offset sub_A20E90; void (__cdecl *)()
0x9F0349: call    _atexit
0x9F034E: pop     ecx
0x9F034F: retn
