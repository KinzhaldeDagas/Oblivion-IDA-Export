0x9DC9C0: push    offset aAbort; "Abort"
0x9DC9C5: push    offset aSaborttext; "sAbortText"
0x9DC9CA: mov     ecx, offset dword_B34DB4
0x9DC9CF: call    GameSetting_ConstrAndReg
0x9DC9D4: push    offset sub_A18A90; void (__cdecl *)()
0x9DC9D9: call    _atexit
0x9DC9DE: pop     ecx
0x9DC9DF: retn
