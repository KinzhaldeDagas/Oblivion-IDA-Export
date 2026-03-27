0x7225B0: push    esi
0x7225B1: push    edi
0x7225B2: mov     edi, [esp+8+arg_0]
0x7225B6: push    edi
0x7225B7: mov     esi, ecx
0x7225B9: call    sub_70B6A0
0x7225BE: mov     eax, [edi+220h]
0x7225C4: mov     edx, [eax+8]
0x7225C7: push    1
0x7225C9: lea     ecx, [esp+0Ch+arg_0]
0x7225CD: push    ecx
0x7225CE: push    2
0x7225D0: add     esi, 0DCh ; 'Ü'
0x7225D6: push    esi
0x7225D7: push    eax
0x7225D8: mov     [esp+1Ch+arg_0], 2
0x7225E0: call    edx
0x7225E2: add     esp, 14h
0x7225E5: pop     edi
0x7225E6: pop     esi
0x7225E7: retn    4
