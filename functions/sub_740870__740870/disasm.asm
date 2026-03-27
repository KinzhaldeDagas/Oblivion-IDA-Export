0x740870: push    esi
0x740871: push    edi
0x740872: mov     edi, [esp+8+arg_0]
0x740876: push    edi
0x740877: mov     esi, ecx
0x740879: call    sub_722FC0
0x74087E: mov     esi, [esi+0B4h]
0x740884: test    esi, esi
0x740886: jz      short loc_74089A
0x740888: mov     ecx, [esi+5Ch]
0x74088B: test    ecx, ecx
0x74088D: jz      short loc_74089A
0x74088F: mov     eax, [ecx]
0x740891: mov     edx, [eax+80h]
0x740897: push    edi
0x740898: call    edx
0x74089A: pop     edi
0x74089B: pop     esi
0x74089C: retn    4
