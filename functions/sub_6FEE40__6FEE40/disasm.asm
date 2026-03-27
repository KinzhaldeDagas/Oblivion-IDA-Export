0x6FEE40: push    ebx
0x6FEE41: mov     ebx, ecx
0x6FEE43: lea     ecx, [ebx+58h]
0x6FEE46: call    sub_477EF0
0x6FEE4B: mov     ecx, [ebx+50h]
0x6FEE4E: test    ecx, ecx
0x6FEE50: jz      short loc_6FEEA9
0x6FEE52: mov     eax, [ecx]
0x6FEE54: mov     edx, [eax+8]
0x6FEE57: push    edi
0x6FEE58: call    edx
0x6FEE5A: mov     edi, eax
0x6FEE5C: test    edi, edi
0x6FEE5E: jz      short loc_6FEEA8
0x6FEE60: fldz
0x6FEE62: push    esi
0x6FEE63: push    1; a3
0x6FEE65: push    ecx
0x6FEE66: mov     ecx, edi; this
0x6FEE68: fstp    [esp+14h+a2]; a2
0x6FEE6B: call    NiAVObject_UpdateNiAVObject
0x6FEE70: movzx   esi, word ptr [edi+0B6h]
0x6FEE77: test    esi, esi
0x6FEE79: jz      short loc_6FEEA7
0x6FEE7B: jmp     short loc_6FEE80
0x6FEE7D: align 10h
0x6FEE80: movzx   eax, word ptr [edi+0B6h]
0x6FEE87: sub     esi, 1
0x6FEE8A: cmp     eax, esi
0x6FEE8C: ja      short loc_6FEE92
0x6FEE8E: xor     eax, eax
0x6FEE90: jmp     short loc_6FEE9B
0x6FEE92: mov     ecx, [edi+0B0h]
0x6FEE98: mov     eax, [ecx+esi*4]
0x6FEE9B: push    eax
0x6FEE9C: mov     ecx, ebx
0x6FEE9E: call    sub_6FED30
0x6FEEA3: test    esi, esi
0x6FEEA5: jnz     short loc_6FEE80
0x6FEEA7: pop     esi
0x6FEEA8: pop     edi
0x6FEEA9: pop     ebx
0x6FEEAA: retn
