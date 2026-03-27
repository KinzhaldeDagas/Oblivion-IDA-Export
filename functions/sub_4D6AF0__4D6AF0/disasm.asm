0x4D6AF0: push    esi
0x4D6AF1: mov     esi, ecx
0x4D6AF3: test    esi, esi
0x4D6AF5: jz      short loc_4D6B22
0x4D6AF7: push    edi
0x4D6AF8: mov     edi, [esi+8]
0x4D6AFB: test    edi, edi
0x4D6AFD: jz      short loc_4D6B21
0x4D6AFF: call    sub_89F570
0x4D6B04: mov     ecx, edi
0x4D6B06: call    sub_8A6410
0x4D6B0B: mov     ecx, [edi+50h]
0x4D6B0E: mov     eax, [ecx]
0x4D6B10: mov     edx, [esp+8+arg_0]
0x4D6B14: mov     eax, [eax+54h]
0x4D6B17: push    edx
0x4D6B18: call    eax
0x4D6B1A: mov     ecx, esi
0x4D6B1C: call    sub_89F570
0x4D6B21: pop     edi
0x4D6B22: pop     esi
0x4D6B23: retn    4
