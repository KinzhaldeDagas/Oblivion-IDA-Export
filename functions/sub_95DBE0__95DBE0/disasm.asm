0x95DBE0: push    esi
0x95DBE1: mov     esi, [esp+4+arg_0]
0x95DBE5: mov     eax, [esi]
0x95DBE7: mov     edx, [eax+0Ch]
0x95DBEA: push    edi
0x95DBEB: mov     edi, ecx
0x95DBED: mov     ecx, esi
0x95DBEF: call    edx
0x95DBF1: cmp     eax, 5
0x95DBF4: jnz     short loc_95DC10
0x95DBF6: add     edi, 4
0x95DBF9: push    edi
0x95DBFA: lea     ecx, [esi+4]
0x95DBFD: call    sub_73B770
0x95DC02: test    al, al
0x95DC04: jz      short loc_95DC10
0x95DC06: pop     edi
0x95DC07: mov     eax, 1
0x95DC0C: pop     esi
0x95DC0D: retn    4
0x95DC10: pop     edi
0x95DC11: xor     eax, eax
0x95DC13: pop     esi
0x95DC14: retn    4
