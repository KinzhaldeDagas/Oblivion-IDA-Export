0x9F0A50: push    offset aThisNpcCannotH; "This NPC cannot help you train any high"...
0x9F0A55: push    offset aScannottrainhi; "sCanNotTrainHigher"
0x9F0A5A: mov     ecx, offset dword_B38580
0x9F0A5F: call    GameSetting_ConstrAndReg
0x9F0A64: push    offset sub_A21220; void (__cdecl *)()
0x9F0A69: call    _atexit
0x9F0A6E: pop     ecx
0x9F0A6F: retn
