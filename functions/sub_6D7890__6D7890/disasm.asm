0x6D7890: push    ebx
0x6D7891: push    ebp
0x6D7892: mov     ebp, [esp+8+arg_0]
0x6D7896: push    esi
0x6D7897: push    edi
0x6D7898: push    ebp
0x6D7899: mov     edi, ecx
0x6D789B: call    sub_6FE000
0x6D78A0: mov     eax, [ebp+220h]
0x6D78A6: mov     edx, [eax+8]
0x6D78A9: push    1
0x6D78AB: lea     ecx, [esp+14h+arg_0]
0x6D78AF: push    ecx
0x6D78B0: push    4
0x6D78B2: lea     ebx, [edi+0Ch]
0x6D78B5: push    ebx
0x6D78B6: push    eax
0x6D78B7: mov     [esp+24h+arg_0], 4
0x6D78BF: call    edx
0x6D78C1: xor     esi, esi
0x6D78C3: add     esp, 14h
0x6D78C6: cmp     [ebx], esi
0x6D78C8: jbe     short loc_6D78E3
0x6D78CA: lea     ebx, [ebx+0]
0x6D78D0: mov     eax, [edi+10h]
0x6D78D3: push    ebp
0x6D78D4: lea     ecx, [eax+esi*8]
0x6D78D7: call    sub_6EC760
0x6D78DC: add     esi, 1
0x6D78DF: cmp     esi, [ebx]
0x6D78E1: jb      short loc_6D78D0
0x6D78E3: pop     edi
0x6D78E4: pop     esi
0x6D78E5: pop     ebp
0x6D78E6: pop     ebx
0x6D78E7: retn    4
