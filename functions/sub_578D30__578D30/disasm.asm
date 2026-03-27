0x578D30: mov     ecx, ds:0B333C4h
0x578D36: test    ecx, ecx
0x578D38: jz      short locret_578D4D
0x578D3A: mov     eax, [ecx]
0x578D3C: mov     edx, [eax+154h]
0x578D42: call    edx
0x578D44: test    eax, eax
0x578D46: jz      short locret_578D4D
0x578D48: jmp     sub_5A8BC0
0x578D4D: retn
