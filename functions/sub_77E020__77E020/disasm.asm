0x77E020: push    ebx
0x77E021: mov     ebx, [esp+4+arg_4]
0x77E025: push    edi
0x77E026: mov     edi, [esp+8+arg_0]
0x77E02A: cmp     ebx, [edi+1Ch]
0x77E02D: jnb     short loc_77E061
0x77E02F: mov     eax, [edi+24h]
0x77E032: push    esi
0x77E033: mov     esi, [eax+ebx*4]
0x77E036: test    esi, esi
0x77E038: jz      short loc_77E060
0x77E03A: mov     eax, [esi+8]
0x77E03D: test    eax, eax
0x77E03F: jz      short loc_77E051
0x77E041: mov     ecx, [esi+4]
0x77E044: push    eax
0x77E045: call    nullsub_returnvVoid_1arg
0x77E04A: mov     dword ptr [esi+8], 0
0x77E051: cmp     ebx, [edi+1Ch]
0x77E054: jnb     short loc_77E060
0x77E056: mov     ecx, [edi+24h]
0x77E059: mov     dword ptr [ecx+ebx*4], 0
0x77E060: pop     esi
0x77E061: pop     edi
0x77E062: pop     ebx
0x77E063: retn    8
