0x7256B0: push    esi
0x7256B1: push    edi
0x7256B2: mov     edi, [esp+8+arg_0]
0x7256B6: push    edi
0x7256B7: mov     esi, ecx
0x7256B9: call    sub_71A730
0x7256BE: mov     eax, [edi+220h]
0x7256C4: push    1
0x7256C6: lea     ecx, [esp+0Ch+arg_0]
0x7256CA: push    ecx
0x7256CB: push    4
0x7256CD: lea     edx, [esi+108h]
0x7256D3: push    edx
0x7256D4: push    eax
0x7256D5: mov     eax, [eax+8]
0x7256D8: mov     [esp+1Ch+arg_0], 4
0x7256E0: call    eax
0x7256E2: mov     eax, [edi+220h]
0x7256E8: push    1
0x7256EA: lea     ecx, [esp+20h+arg_0]
0x7256EE: push    ecx
0x7256EF: push    4
0x7256F1: lea     edx, [esi+10Ch]
0x7256F7: push    edx
0x7256F8: push    eax
0x7256F9: mov     eax, [eax+8]
0x7256FC: mov     [esp+30h+arg_0], 4
0x725704: call    eax
0x725706: mov     edi, [edi+220h]
0x72570C: mov     edx, [edi+8]
0x72570F: push    1
0x725711: lea     ecx, [esp+34h+arg_0]
0x725715: push    ecx
0x725716: push    4
0x725718: add     esi, 110h
0x72571E: push    esi
0x72571F: push    edi
0x725720: mov     [esp+44h+arg_0], 4
0x725728: call    edx
0x72572A: add     esp, 3Ch
0x72572D: pop     edi
0x72572E: pop     esi
0x72572F: retn    4
