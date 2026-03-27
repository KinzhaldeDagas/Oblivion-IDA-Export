0x4D6B30: push    esi
0x4D6B31: mov     esi, ecx
0x4D6B33: test    esi, esi
0x4D6B35: jz      short loc_4D6B62
0x4D6B37: push    edi
0x4D6B38: mov     edi, [esi+8]
0x4D6B3B: test    edi, edi
0x4D6B3D: jz      short loc_4D6B61
0x4D6B3F: call    sub_89F570
0x4D6B44: mov     ecx, edi
0x4D6B46: call    sub_8A6410
0x4D6B4B: mov     ecx, [edi+50h]
0x4D6B4E: mov     eax, [ecx]
0x4D6B50: mov     edx, [esp+8+arg_0]
0x4D6B54: mov     eax, [eax+58h]
0x4D6B57: push    edx
0x4D6B58: call    eax
0x4D6B5A: mov     ecx, esi
0x4D6B5C: call    sub_89F570
0x4D6B61: pop     edi
0x4D6B62: pop     esi
0x4D6B63: retn    4
