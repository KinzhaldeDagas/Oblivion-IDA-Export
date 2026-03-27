0x5A6AB0: push    esi
0x5A6AB1: mov     esi, ecx
0x5A6AB3: push    edi
0x5A6AB4: mov     edi, [esi+0Ch]
0x5A6AB7: cmp     edi, [esi+8]
0x5A6ABA: jb      short loc_5A6AC7
0x5A6ABC: mov     eax, [esi+14h]
0x5A6ABF: add     eax, edi
0x5A6AC1: push    eax
0x5A6AC2: call    sub_452910
0x5A6AC7: mov     ecx, [esp+8+arg_0]
0x5A6ACB: push    ecx
0x5A6ACC: push    edi
0x5A6ACD: mov     ecx, esi
0x5A6ACF: call    sub_446C50
0x5A6AD4: mov     eax, edi
0x5A6AD6: pop     edi
0x5A6AD7: pop     esi
0x5A6AD8: retn    4
