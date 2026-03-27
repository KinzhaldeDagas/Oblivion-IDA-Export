0x6D5790: push    esi
0x6D5791: push    edi
0x6D5792: mov     edi, [esp+8+arg_0]
0x6D5796: push    edi
0x6D5797: mov     esi, ecx
0x6D5799: call    sub_715F10
0x6D579E: test    al, al
0x6D57A0: jnz     short loc_6D57A7
0x6D57A2: pop     edi
0x6D57A3: pop     esi
0x6D57A4: retn    4
0x6D57A7: mov     ecx, [esi+50h]
0x6D57AA: test    ecx, ecx
0x6D57AC: jz      short loc_6D57B6
0x6D57AE: mov     eax, [ecx]
0x6D57B0: mov     edx, [eax+24h]
0x6D57B3: push    edi
0x6D57B4: call    edx
0x6D57B6: pop     edi
0x6D57B7: mov     al, 1
0x6D57B9: pop     esi
0x6D57BA: retn    4
