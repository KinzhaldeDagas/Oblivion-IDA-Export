0x738420: mov     eax, [esp+arg_0]
0x738424: test    eax, eax
0x738426: jnz     short loc_73842B
0x738428: xor     al, al
0x73842A: retn
0x73842B: mov     ecx, ds:0B40120h
0x738431: test    ecx, ecx
0x738433: jz      short loc_738428
0x738435: mov     edx, [ecx]
0x738437: push    eax
0x738438: mov     eax, [edx+14h]
0x73843B: call    eax
0x73843D: retn
