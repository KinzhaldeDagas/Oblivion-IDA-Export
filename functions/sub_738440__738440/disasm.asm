0x738440: mov     ecx, ds:0B40120h
0x738446: test    ecx, ecx
0x738448: jz      short locret_738451
0x73844A: mov     eax, [ecx]
0x73844C: mov     edx, [eax+20h]
0x73844F: jmp     edx
0x738451: retn
