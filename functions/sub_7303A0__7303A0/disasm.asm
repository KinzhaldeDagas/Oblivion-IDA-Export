0x7303A0: push    ebx
0x7303A1: push    esi
0x7303A2: push    edi
0x7303A3: mov     edi, [esp+0Ch+arg_0]
0x7303A7: push    edi
0x7303A8: mov     esi, ecx
0x7303AA: call    sub_6FE000
0x7303AF: mov     eax, [edi+220h]
0x7303B5: mov     edx, [eax+8]
0x7303B8: push    1
0x7303BA: lea     ecx, [esp+10h+arg_0]
0x7303BE: push    ecx
0x7303BF: push    4
0x7303C1: lea     ebx, [esi+0Ch]
0x7303C4: push    ebx
0x7303C5: push    eax
0x7303C6: mov     [esp+20h+arg_0], 4
0x7303CE: call    edx
0x7303D0: mov     ecx, [ebx]
0x7303D2: mov     edx, [esi+10h]
0x7303D5: mov     edi, [edi+220h]
0x7303DB: push    1
0x7303DD: lea     eax, [esp+24h+arg_0]
0x7303E1: push    eax
0x7303E2: mov     eax, [edi+8]
0x7303E5: add     ecx, ecx
0x7303E7: add     ecx, ecx
0x7303E9: push    ecx
0x7303EA: push    edx
0x7303EB: push    edi
0x7303EC: mov     [esp+34h+arg_0], 4
0x7303F4: call    eax
0x7303F6: add     esp, 28h
0x7303F9: pop     edi
0x7303FA: pop     esi
0x7303FB: pop     ebx
0x7303FC: retn    4
