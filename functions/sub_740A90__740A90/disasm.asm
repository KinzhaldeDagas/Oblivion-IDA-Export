0x740A90: push    esi
0x740A91: mov     esi, [esp+4+arg_0]
0x740A95: test    esi, esi
0x740A97: jnz     short loc_740A9F
0x740A99: xor     al, al
0x740A9B: pop     esi
0x740A9C: retn    4
0x740A9F: mov     edx, [ecx+0Ch]
0x740AA2: cmp     edx, [esi+0Ch]
0x740AA5: jnz     short loc_740A99
0x740AA7: mov     eax, [ecx+10h]
0x740AAA: test    eax, eax
0x740AAC: jz      short loc_740AB8
0x740AAE: cmp     dword ptr [esi+10h], 0
0x740AB2: jz      short loc_740A99
0x740AB4: test    eax, eax
0x740AB6: jnz     short loc_740ABE
0x740AB8: cmp     dword ptr [esi+10h], 0
0x740ABC: jnz     short loc_740A99
0x740ABE: test    eax, eax
0x740AC0: push    edi
0x740AC1: jz      short loc_740AE1
0x740AC3: xor     ecx, ecx
0x740AC5: test    edx, edx
0x740AC7: jbe     short loc_740AE1
0x740AC9: mov     esi, [esi+10h]
0x740ACC: sub     esi, eax
0x740ACE: mov     edi, edi
0x740AD0: mov     edi, [eax]
0x740AD2: cmp     edi, [esi+eax]
0x740AD5: jnz     short loc_740AE8
0x740AD7: add     ecx, 1
0x740ADA: add     eax, 4
0x740ADD: cmp     ecx, edx
0x740ADF: jb      short loc_740AD0
0x740AE1: pop     edi
0x740AE2: mov     al, 1
0x740AE4: pop     esi
0x740AE5: retn    4
0x740AE8: pop     edi
0x740AE9: xor     al, al
0x740AEB: pop     esi
0x740AEC: retn    4
