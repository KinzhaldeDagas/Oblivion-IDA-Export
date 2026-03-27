0x9EDBE0: push    23792h
0x9EDBE5: push    offset aIclassagent; "iClassAgent"
0x9EDBEA: mov     ecx, offset iClassAgent
0x9EDBEF: call    GameSetting_ConstrAndReg
0x9EDBF4: push    offset sub_A1FFC0; void (__cdecl *)()
0x9EDBF9: call    _atexit
0x9EDBFE: pop     ecx
0x9EDBFF: retn
