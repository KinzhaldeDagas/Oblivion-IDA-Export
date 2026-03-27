0x74D390: push    esi
0x74D391: push    edi
0x74D392: mov     edi, [esp+8+arg_0]
0x74D396: push    edi
0x74D397: mov     esi, ecx
0x74D399: call    sub_753060
0x74D39E: mov     eax, [edi+220h]
0x74D3A4: push    1
0x74D3A6: lea     ecx, [esp+0Ch+arg_0]
0x74D3AA: push    ecx
0x74D3AB: push    4
0x74D3AD: lea     edx, [esi+54h]
0x74D3B0: push    edx
0x74D3B1: push    eax
0x74D3B2: mov     eax, [eax+8]
0x74D3B5: mov     [esp+1Ch+arg_0], 4
0x74D3BD: call    eax
0x74D3BF: mov     eax, [edi+220h]
0x74D3C5: push    1
0x74D3C7: lea     ecx, [esp+20h+arg_0]
0x74D3CB: push    ecx
0x74D3CC: push    4
0x74D3CE: lea     edx, [esi+58h]
0x74D3D1: push    edx
0x74D3D2: push    eax
0x74D3D3: mov     eax, [eax+8]
0x74D3D6: mov     [esp+30h+arg_0], 4
0x74D3DE: call    eax
0x74D3E0: mov     edi, [edi+220h]
0x74D3E6: mov     edx, [edi+8]
0x74D3E9: push    1
0x74D3EB: lea     ecx, [esp+34h+arg_0]
0x74D3EF: push    ecx
0x74D3F0: push    4
0x74D3F2: add     esi, 5Ch ; '\'
0x74D3F5: push    esi
0x74D3F6: push    edi
0x74D3F7: mov     [esp+44h+arg_0], 4
0x74D3FF: call    edx
0x74D401: add     esp, 3Ch
0x74D404: pop     edi
0x74D405: pop     esi
0x74D406: retn    4
