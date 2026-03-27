0x9E8200: push    5Ah ; 'Z'
0x9E8202: push    offset aIhighresponsib; "iHighResponsibility"
0x9E8207: mov     ecx, offset unk_B36C40
0x9E820C: call    GameSetting_ConstrAndReg
0x9E8211: push    offset sub_A1DFA0; void (__cdecl *)()
0x9E8216: call    _atexit
0x9E821B: pop     ecx
0x9E821C: retn
