0x52F570: push    ebx
0x52F571: mov     ebx, [esp+4+arg_0]
0x52F575: test    ebx, ebx
0x52F577: jnz     short loc_52F57F
0x52F579: xor     eax, eax
0x52F57B: pop     ebx
0x52F57C: retn    4
0x52F57F: push    esi
0x52F580: push    edi
0x52F581: lea     edi, [ecx+28h]
0x52F584: test    edi, edi
0x52F586: jz      short loc_52F5BB
0x52F588: mov     esi, [edi]
0x52F58A: test    esi, esi
0x52F58C: jz      short loc_52F5BB
0x52F58E: mov     edx, [esi+10h]
0x52F591: test    edx, edx
0x52F593: mov     edi, [edi+4]
0x52F596: jz      short loc_52F5B7
0x52F598: xor     eax, eax
0x52F59A: test    edx, edx
0x52F59C: jbe     short loc_52F5B7
0x52F59E: cmp     eax, edx
0x52F5A0: jnb     short loc_52F5AA
0x52F5A2: mov     ecx, [esi+8]
0x52F5A5: mov     ecx, [ecx+eax*4]
0x52F5A8: jmp     short loc_52F5AC
0x52F5AA: xor     ecx, ecx
0x52F5AC: cmp     ecx, ebx
0x52F5AE: jz      short loc_52F5C3
0x52F5B0: add     eax, 1
0x52F5B3: cmp     eax, edx
0x52F5B5: jb      short loc_52F5A2
0x52F5B7: test    edi, edi
0x52F5B9: jnz     short loc_52F588
0x52F5BB: pop     edi
0x52F5BC: pop     esi
0x52F5BD: xor     eax, eax
0x52F5BF: pop     ebx
0x52F5C0: retn    4
0x52F5C3: mov     eax, [esi]
0x52F5C5: pop     edi
0x52F5C6: pop     esi
0x52F5C7: pop     ebx
0x52F5C8: retn    4
