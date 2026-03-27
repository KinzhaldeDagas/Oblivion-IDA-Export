0x73E020: push    esi
0x73E021: push    edi
0x73E022: mov     edi, [esp+8+a2]
0x73E026: push    edi; a2
0x73E027: mov     esi, ecx
0x73E029: call    sub_700650
0x73E02E: test    al, al
0x73E030: jnz     short loc_73E037
0x73E032: pop     edi
0x73E033: pop     esi
0x73E034: retn    4
0x73E037: mov     ecx, [esi+14h]
0x73E03A: mov     eax, [ecx]
0x73E03C: mov     edx, [eax+24h]
0x73E03F: push    edi
0x73E040: call    edx
0x73E042: pop     edi
0x73E043: mov     al, 1
0x73E045: pop     esi
0x73E046: retn    4
