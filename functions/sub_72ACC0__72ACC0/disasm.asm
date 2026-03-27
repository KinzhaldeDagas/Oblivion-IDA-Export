0x72ACC0: push    esi
0x72ACC1: push    edi
0x72ACC2: mov     edi, [esp+8+arg_0]
0x72ACC6: push    edi
0x72ACC7: mov     esi, ecx
0x72ACC9: call    sub_71FEC0
0x72ACCE: mov     eax, [edi+21Ch]
0x72ACD4: push    1
0x72ACD6: lea     ecx, [esp+0Ch+arg_0]
0x72ACDA: push    ecx
0x72ACDB: push    2
0x72ACDD: lea     edx, [esi+58h]
0x72ACE0: push    edx
0x72ACE1: push    eax
0x72ACE2: mov     eax, [eax+4]
0x72ACE5: mov     [esp+1Ch+arg_0], 2
0x72ACED: call    eax
0x72ACEF: mov     edi, [edi+21Ch]
0x72ACF5: mov     edx, [edi+4]
0x72ACF8: push    1
0x72ACFA: lea     ecx, [esp+20h+arg_0]
0x72ACFE: push    ecx
0x72ACFF: push    2
0x72AD01: add     esi, 5Ah ; 'Z'
0x72AD04: push    esi
0x72AD05: push    edi
0x72AD06: mov     [esp+30h+arg_0], 2
0x72AD0E: call    edx
0x72AD10: add     esp, 28h
0x72AD13: pop     edi
0x72AD14: pop     esi
0x72AD15: retn    4
