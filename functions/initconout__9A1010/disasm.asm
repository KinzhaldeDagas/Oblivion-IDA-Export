0x9A1010: xor     eax, eax
0x9A1012: push    eax; hTemplateFile
0x9A1013: push    eax; dwFlagsAndAttributes
0x9A1014: push    3; dwCreationDisposition
0x9A1016: push    eax; lpSecurityAttributes
0x9A1017: push    3; dwShareMode
0x9A1019: push    40000000h; dwDesiredAccess
0x9A101E: push    offset aConout
0x9A1023: call    ds:CreateFileA
0x9A1029: mov     hConsoleOutput, eax
0x9A102E: retn
