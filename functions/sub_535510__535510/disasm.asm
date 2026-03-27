0x535510: mov     ecx, [ecx+1A0h]
0x535516: xor     eax, eax
0x535518: test    ecx, ecx
0x53551A: jz      short locret_535530
0x53551C: mov     eax, [ecx]
0x53551E: mov     edx, [eax+58h]
0x535521: call    edx
0x535523: test    eax, eax
0x535525: jz      short loc_53552E
0x535527: mov     eax, [eax+2B0h]
0x53552D: retn
0x53552E: xor     eax, eax
0x535530: retn
