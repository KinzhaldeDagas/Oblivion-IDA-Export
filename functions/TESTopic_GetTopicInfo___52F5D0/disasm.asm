0x52F5D0: push    ebx
0x52F5D1: push    ebp
0x52F5D2: push    esi
0x52F5D3: push    edi
0x52F5D4: lea     edi, [ecx+28h]
0x52F5D7: test    edi, edi
0x52F5D9: jz      short loc_52F63E
0x52F5DB: mov     bl, [esp+10h+arg_4]
0x52F5DF: mov     ebp, [esp+10h+arg_0]
0x52F5E3: mov     esi, [edi]
0x52F5E5: test    esi, esi
0x52F5E7: jz      short loc_52F63E
0x52F5E9: mov     edx, [esi+10h]
0x52F5EC: test    edx, edx
0x52F5EE: mov     edi, [edi+4]
0x52F5F1: jz      short loc_52F63A
0x52F5F3: test    bl, bl
0x52F5F5: jz      short loc_52F61A
0x52F5F7: lea     ecx, [edx-1]
0x52F5FA: test    ecx, ecx
0x52F5FC: jl      short loc_52F63A
0x52F5FE: mov     edi, edi
0x52F600: cmp     ecx, edx
0x52F602: jnb     short loc_52F613
0x52F604: mov     eax, [esi+8]
0x52F607: mov     eax, [eax+ecx*4]
0x52F60A: test    eax, eax
0x52F60C: jz      short loc_52F613
0x52F60E: cmp     [eax+0Ch], ebp
0x52F611: jz      short loc_52F640
0x52F613: sub     ecx, 1
0x52F616: jns     short loc_52F600
0x52F618: jmp     short loc_52F63A
0x52F61A: xor     ecx, ecx
0x52F61C: test    edx, edx
0x52F61E: jbe     short loc_52F63A
0x52F620: cmp     ecx, edx
0x52F622: jnb     short loc_52F633
0x52F624: mov     eax, [esi+8]
0x52F627: mov     eax, [eax+ecx*4]
0x52F62A: test    eax, eax
0x52F62C: jz      short loc_52F633
0x52F62E: cmp     [eax+0Ch], ebp
0x52F631: jz      short loc_52F640
0x52F633: add     ecx, 1
0x52F636: cmp     ecx, edx
0x52F638: jb      short loc_52F624
0x52F63A: test    edi, edi
0x52F63C: jnz     short loc_52F5E3
0x52F63E: xor     eax, eax
0x52F640: pop     edi
0x52F641: pop     esi
0x52F642: pop     ebp
0x52F643: pop     ebx
0x52F644: retn    8
