0x6FEB00: push    esi
0x6FEB01: mov     esi, ecx
0x6FEB03: movzx   eax, word ptr [esi+8]
0x6FEB07: push    edi
0x6FEB08: movzx   edi, word ptr [esi+0Ah]
0x6FEB0C: cmp     edi, eax
0x6FEB0E: jb      short loc_6FEB1E
0x6FEB10: movzx   ecx, word ptr [esi+0Eh]
0x6FEB14: add     ecx, edi
0x6FEB16: push    ecx; capacity
0x6FEB17: mov     ecx, esi; self
0x6FEB19: call    NiTObjectArray_Resize16
0x6FEB1E: mov     edx, [esp+8+element]
0x6FEB22: push    edx; element
0x6FEB23: push    edi; index
0x6FEB24: mov     ecx, esi; self
0x6FEB26: call    NiTObjectArray_SetAt
0x6FEB2B: mov     eax, edi
0x6FEB2D: pop     edi
0x6FEB2E: pop     esi
0x6FEB2F: retn    4
