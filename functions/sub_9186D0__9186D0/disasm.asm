0x9186D0: push    ebx
0x9186D1: push    ebp
0x9186D2: push    esi
0x9186D3: push    edi
0x9186D4: mov     edi, ecx
0x9186D6: mov     ebx, [edi+3Ch]
0x9186D9: xor     esi, esi
0x9186DB: test    ebx, ebx
0x9186DD: jle     short loc_9186F7
0x9186DF: mov     ebp, [esp+10h+arg_0]
0x9186E3: mov     eax, [edi+38h]
0x9186E6: mov     ecx, [eax+esi*4]
0x9186E9: mov     edx, [ecx]
0x9186EB: call    dword ptr [edx+4]
0x9186EE: cmp     eax, ebp
0x9186F0: jz      short loc_918701
0x9186F2: inc     esi
0x9186F3: cmp     esi, ebx
0x9186F5: jl      short loc_9186E3
0x9186F7: pop     edi
0x9186F8: pop     esi
0x9186F9: pop     ebp
0x9186FA: or      eax, 0FFFFFFFFh
0x9186FD: pop     ebx
0x9186FE: retn    4
0x918701: pop     edi
0x918702: mov     eax, esi
0x918704: pop     esi
0x918705: pop     ebp
0x918706: pop     ebx
0x918707: retn    4
