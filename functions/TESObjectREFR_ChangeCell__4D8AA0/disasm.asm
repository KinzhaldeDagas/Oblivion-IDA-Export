0x4D8AA0: push    esi
0x4D8AA1: push    edi
0x4D8AA2: mov     edi, [esp+8+arg_0]
0x4D8AA6: test    edi, edi
0x4D8AA8: mov     esi, ecx
0x4D8AAA: jz      short loc_4D8ABA
0x4D8AAC: cmp     [esi+40h], edi
0x4D8AAF: jz      short loc_4D8ABA
0x4D8AB1: mov     eax, [esi]
0x4D8AB3: mov     edx, [eax+40h]
0x4D8AB6: push    4
0x4D8AB8: call    edx
0x4D8ABA: mov     eax, [esi]
0x4D8ABC: mov     edx, [eax+190h]
0x4D8AC2: mov     ecx, esi
0x4D8AC4: mov     [esi+40h], edi
0x4D8AC7: call    edx
0x4D8AC9: test    al, al
0x4D8ACB: jz      short loc_4D8ADF
0x4D8ACD: mov     ecx, [esi+58h]
0x4D8AD0: test    ecx, ecx
0x4D8AD2: jz      short loc_4D8ADF
0x4D8AD4: mov     eax, [ecx]
0x4D8AD6: mov     edx, [eax+500h]
0x4D8ADC: push    esi
0x4D8ADD: call    edx
0x4D8ADF: pop     edi
0x4D8AE0: pop     esi
0x4D8AE1: retn    4
