0x8C9880: push    esi
0x8C9881: push    edi
0x8C9882: mov     edi, [esp+8+arg_0]
0x8C9886: push    edi
0x8C9887: mov     esi, ecx
0x8C9889: call    sub_8A2760
0x8C988E: test    al, al
0x8C9890: jz      short loc_8C98BA
0x8C9892: test    esi, esi
0x8C9894: jz      short loc_8C98A9
0x8C9896: mov     esi, [esi+8]
0x8C9899: test    esi, esi
0x8C989B: jz      short loc_8C98A9
0x8C989D: mov     esi, [esi+10h]
0x8C98A0: test    esi, esi
0x8C98A2: jz      short loc_8C98A9
0x8C98A4: mov     ecx, [esi+8]
0x8C98A7: jmp     short loc_8C98AB
0x8C98A9: xor     ecx, ecx
0x8C98AB: test    ecx, ecx
0x8C98AD: jz      short loc_8C98BA
0x8C98AF: mov     eax, [ecx]
0x8C98B1: mov     edx, [eax+8Ch]
0x8C98B7: push    edi
0x8C98B8: call    edx
0x8C98BA: pop     edi
0x8C98BB: pop     esi
0x8C98BC: retn    4
