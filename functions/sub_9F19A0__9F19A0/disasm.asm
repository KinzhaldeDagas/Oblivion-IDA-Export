0x9F19A0: push    offset aArea; "Area"
0x9F19A5: push    offset aSareatext; "sAreaText"
0x9F19AA: mov     ecx, offset sAreaText
0x9F19AF: call    GameSetting_ConstrAndReg
0x9F19B4: push    offset sub_A219C0; void (__cdecl *)()
0x9F19B9: call    _atexit
0x9F19BE: pop     ecx
0x9F19BF: retn
