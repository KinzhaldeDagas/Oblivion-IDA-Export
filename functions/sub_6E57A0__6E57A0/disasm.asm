0x6E57A0: push    esi
0x6E57A1: push    edi
0x6E57A2: mov     edi, [esp+8+arg_0]
0x6E57A6: push    edi
0x6E57A7: mov     esi, ecx
0x6E57A9: call    sub_6ED500
0x6E57AE: mov     eax, [edi+220h]
0x6E57B4: push    1
0x6E57B6: lea     ecx, [esp+0Ch+arg_0]
0x6E57BA: push    ecx
0x6E57BB: push    4
0x6E57BD: lea     edx, [esi+1Ch]
0x6E57C0: push    edx
0x6E57C1: push    eax
0x6E57C2: mov     eax, [eax+8]
0x6E57C5: mov     [esp+1Ch+arg_0], 4
0x6E57CD: call    eax
0x6E57CF: mov     edi, [edi+220h]
0x6E57D5: mov     edx, [edi+8]
0x6E57D8: push    1
0x6E57DA: lea     ecx, [esp+20h+arg_0]
0x6E57DE: push    ecx
0x6E57DF: push    4
0x6E57E1: add     esi, 20h ; ' '
0x6E57E4: push    esi
0x6E57E5: push    edi
0x6E57E6: mov     [esp+30h+arg_0], 4
0x6E57EE: call    edx
0x6E57F0: add     esp, 28h
0x6E57F3: pop     edi
0x6E57F4: pop     esi
0x6E57F5: retn    4
