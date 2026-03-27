0x927370: mov     edx, [esp+arg_4]
0x927374: mov     eax, [edx+10h]
0x927377: push    ebx
0x927378: push    esi
0x927379: mov     esi, [esp+8+arg_8]
0x92737D: add     eax, edx
0x92737F: mov     edx, [esi+10h]
0x927382: add     edx, esi
0x927384: cmp     eax, edx
0x927386: push    edi
0x927387: jbe     short loc_92738F
0x927389: mov     ebx, eax
0x92738B: mov     eax, edx
0x92738D: jmp     short loc_927391
0x92738F: mov     ebx, edx
0x927391: mov     edi, [ecx+18h]
0x927394: xor     esi, esi
0x927396: test    edi, edi
0x927398: jle     short loc_9273B1
0x92739A: mov     ecx, [ecx+14h]
0x92739D: lea     ecx, [ecx+0]
0x9273A0: cmp     [ecx], ebx
0x9273A2: jnz     short loc_9273A9
0x9273A4: cmp     [ecx+4], eax
0x9273A7: jz      short loc_9273B4
0x9273A9: inc     esi
0x9273AA: add     ecx, 8
0x9273AD: cmp     esi, edi
0x9273AF: jl      short loc_9273A0
0x9273B1: or      esi, 0FFFFFFFFh
0x9273B4: mov     eax, [esp+0Ch+arg_0]
0x9273B8: test    esi, esi
0x9273BA: pop     edi
0x9273BB: setl    cl
0x9273BE: pop     esi
0x9273BF: mov     [eax], cl
0x9273C1: pop     ebx
0x9273C2: retn    0Ch
