0x718BB0: push    esi
0x718BB1: push    edi
0x718BB2: mov     edi, [esp+8+arg_0]
0x718BB6: push    edi
0x718BB7: mov     esi, ecx
0x718BB9: call    sub_711BF0
0x718BBE: push    edi
0x718BBF: lea     ecx, [esi+24h]
0x718BC2: call    sub_7094A0
0x718BC7: mov     edi, [edi+220h]
0x718BCD: mov     ecx, [edi+8]
0x718BD0: push    1
0x718BD2: lea     eax, [esp+0Ch+arg_0]
0x718BD6: push    eax
0x718BD7: push    4
0x718BD9: add     esi, 30h ; '0'
0x718BDC: push    esi
0x718BDD: push    edi
0x718BDE: mov     [esp+1Ch+arg_0], 4
0x718BE6: call    ecx
0x718BE8: add     esp, 14h
0x718BEB: pop     edi
0x718BEC: pop     esi
0x718BED: retn    4
