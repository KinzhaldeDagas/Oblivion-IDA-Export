0x4D6AB0: push    esi
0x4D6AB1: mov     esi, ecx
0x4D6AB3: test    esi, esi
0x4D6AB5: jz      short loc_4D6AEB
0x4D6AB7: push    edi
0x4D6AB8: mov     edi, [esi+8]
0x4D6ABB: test    edi, edi
0x4D6ABD: jz      short loc_4D6AEA
0x4D6ABF: call    sub_89F570
0x4D6AC4: cmp     [esp+8+arg_0], 0
0x4D6AC9: mov     ecx, edi
0x4D6ACB: jz      short loc_4D6ADE
0x4D6ACD: call    sub_8A6410
0x4D6AD2: mov     ecx, esi
0x4D6AD4: call    sub_89F570
0x4D6AD9: pop     edi
0x4D6ADA: pop     esi
0x4D6ADB: retn    4
0x4D6ADE: call    sub_8A6440
0x4D6AE3: mov     ecx, esi
0x4D6AE5: call    sub_89F570
0x4D6AEA: pop     edi
0x4D6AEB: pop     esi
0x4D6AEC: retn    4
