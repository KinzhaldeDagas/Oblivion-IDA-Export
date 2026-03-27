0x5EAE10: push    esi
0x5EAE11: mov     esi, ecx
0x5EAE13: cmp     dword ptr [esi+58h], 0
0x5EAE17: jz      short loc_5EAE65
0x5EAE19: mov     eax, [esi]
0x5EAE1B: mov     edx, [eax+334h]
0x5EAE21: push    1
0x5EAE23: call    edx
0x5EAE25: test    al, al
0x5EAE27: jz      short loc_5EAE57
0x5EAE29: mov     ecx, [esi+58h]
0x5EAE2C: mov     eax, [ecx]
0x5EAE2E: mov     edx, [eax+244h]
0x5EAE34: call    edx
0x5EAE36: test    al, al
0x5EAE38: jz      short loc_5EAE47
0x5EAE3A: push    0
0x5EAE3C: mov     ecx, esi
0x5EAE3E: call    sub_5E6CD0
0x5EAE43: test    al, al
0x5EAE45: jz      short loc_5EAE57
0x5EAE47: mov     eax, [esi]
0x5EAE49: mov     edx, [eax+338h]
0x5EAE4F: mov     ecx, esi
0x5EAE51: call    edx
0x5EAE53: test    eax, eax
0x5EAE55: jnz     short loc_5EAE67
0x5EAE57: mov     ecx, [esi+58h]
0x5EAE5A: mov     eax, [ecx]
0x5EAE5C: mov     edx, [eax+0CCh]
0x5EAE62: pop     esi
0x5EAE63: jmp     edx
0x5EAE65: xor     eax, eax
0x5EAE67: pop     esi
0x5EAE68: retn
