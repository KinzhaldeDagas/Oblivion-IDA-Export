0x754D00: push    esi
0x754D01: push    edi
0x754D02: mov     edi, [esp+8+arg_0]
0x754D06: push    edi
0x754D07: mov     esi, ecx
0x754D09: call    sub_75F050
0x754D0E: mov     ecx, [esi+2Ch]
0x754D11: mov     eax, [edi]
0x754D13: mov     edx, [eax+2Ch]
0x754D16: push    ecx
0x754D17: mov     ecx, edi
0x754D19: call    edx
0x754D1B: mov     edi, [edi+220h]
0x754D21: mov     ecx, [edi+8]
0x754D24: push    1
0x754D26: lea     eax, [esp+0Ch+arg_0]
0x754D2A: push    eax
0x754D2B: push    4
0x754D2D: add     esi, 30h ; '0'
0x754D30: push    esi
0x754D31: push    edi
0x754D32: mov     [esp+1Ch+arg_0], 4
0x754D3A: call    ecx
0x754D3C: add     esp, 14h
0x754D3F: pop     edi
0x754D40: pop     esi
0x754D41: retn    4
