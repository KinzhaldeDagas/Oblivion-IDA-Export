0x7187B0: push    esi
0x7187B1: push    edi
0x7187B2: mov     edi, [esp+8+arg_0]
0x7187B6: push    edi
0x7187B7: mov     esi, ecx
0x7187B9: call    sub_700A80
0x7187BE: mov     eax, [edi+220h]
0x7187C4: push    1
0x7187C6: lea     ecx, [esp+0Ch+arg_0]
0x7187CA: push    ecx
0x7187CB: push    2
0x7187CD: lea     edx, [esi+18h]
0x7187D0: push    edx
0x7187D1: push    eax
0x7187D2: mov     eax, [eax+8]
0x7187D5: mov     [esp+1Ch+arg_0], 2
0x7187DD: call    eax
0x7187DF: mov     edi, [edi+220h]
0x7187E5: mov     edx, [edi+8]
0x7187E8: push    1
0x7187EA: lea     ecx, [esp+20h+arg_0]
0x7187EE: push    ecx
0x7187EF: push    1
0x7187F1: add     esi, 1Ah
0x7187F4: push    esi
0x7187F5: push    edi
0x7187F6: mov     [esp+30h+arg_0], 1
0x7187FE: call    edx
0x718800: add     esp, 28h
0x718803: pop     edi
0x718804: pop     esi
0x718805: retn    4
