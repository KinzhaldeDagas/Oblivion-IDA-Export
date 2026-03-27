0x6FB590: push    ecx
0x6FB591: push    ebp
0x6FB592: mov     ebp, [esp+8+arg_0]
0x6FB596: push    esi
0x6FB597: push    edi
0x6FB598: push    ebp
0x6FB599: mov     esi, ecx
0x6FB59B: call    sub_6FE000
0x6FB5A0: movzx   eax, word ptr [esi+18h]
0x6FB5A4: push    1
0x6FB5A6: lea     ecx, [esp+14h+var_4]
0x6FB5AA: push    ecx
0x6FB5AB: mov     [esp+18h+arg_0], eax
0x6FB5AF: mov     eax, [ebp+220h]
0x6FB5B5: push    4
0x6FB5B7: lea     edx, [esp+1Ch+arg_0]
0x6FB5BB: push    edx
0x6FB5BC: push    eax
0x6FB5BD: mov     eax, [eax+8]
0x6FB5C0: mov     [esp+24h+var_4], 4
0x6FB5C8: call    eax
0x6FB5CA: xor     edi, edi
0x6FB5CC: add     esp, 14h
0x6FB5CF: cmp     [esp+10h+arg_0], edi
0x6FB5D3: jbe     short loc_6FB5F0
0x6FB5D5: push    ebx
0x6FB5D6: xor     ebx, ebx
0x6FB5D8: mov     ecx, [esi+10h]
0x6FB5DB: push    ebp
0x6FB5DC: add     ecx, ebx
0x6FB5DE: call    sub_6FB460
0x6FB5E3: add     edi, 1
0x6FB5E6: add     ebx, 10h
0x6FB5E9: cmp     edi, [esp+14h+arg_0]
0x6FB5ED: jb      short loc_6FB5D8
0x6FB5EF: pop     ebx
0x6FB5F0: pop     edi
0x6FB5F1: pop     esi
0x6FB5F2: pop     ebp
0x6FB5F3: pop     ecx
0x6FB5F4: retn    4
