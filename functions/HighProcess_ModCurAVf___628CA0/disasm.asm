0x628CA0: fld     [esp+arg_8]
0x628CA4: mov     eax, [esp+arg_0]
0x628CA8: push    esi
0x628CA9: push    edi
0x628CAA: mov     edi, [esp+8+arg_4]
0x628CAE: push    ecx
0x628CAF: fstp    [esp+0Ch+var_C]; float
0x628CB2: push    edi; int
0x628CB3: push    eax; int
0x628CB4: mov     esi, ecx
0x628CB6: call    MiddleProcess_ModAVfCur
0x628CBB: cmp     edi, 0Bh
0x628CBE: jz      short loc_628CD4
0x628CC0: cmp     edi, 30h ; '0'
0x628CC3: jnz     short loc_628CE0
0x628CC5: pop     edi
0x628CC6: mov     dword ptr [esi+298h], 0FFFFFFFFh
0x628CD0: pop     esi
0x628CD1: retn    0Ch
0x628CD4: fld     dword ptr ds:0A30634h
0x628CDA: fstp    dword ptr [esi+294h]
0x628CE0: pop     edi
0x628CE1: pop     esi
0x628CE2: retn    0Ch
