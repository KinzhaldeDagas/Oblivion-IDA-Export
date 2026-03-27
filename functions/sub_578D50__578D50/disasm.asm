0x578D50: mov     ecx, ds:0B333C4h
0x578D56: test    ecx, ecx
0x578D58: jz      short locret_578D6D
0x578D5A: mov     eax, [ecx]
0x578D5C: mov     edx, [eax+154h]
0x578D62: call    edx
0x578D64: test    eax, eax
0x578D66: jz      short locret_578D6D
0x578D68: jmp     loc_5A8C90
0x578D6D: retn
