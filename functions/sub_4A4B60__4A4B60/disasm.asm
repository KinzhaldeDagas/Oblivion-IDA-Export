0x4A4B60: push    esi
0x4A4B61: mov     esi, ecx
0x4A4B63: call    sub_4A3560
0x4A4B68: movzx   eax, word ptr [esi+0Ch]
0x4A4B6C: cmp     ax, 0FFFFh
0x4A4B70: jnz     short loc_4A4B85
0x4A4B72: mov     eax, [esi+8]
0x4A4B75: lea     edx, [eax+1]
0x4A4B78: mov     cl, [eax]
0x4A4B7A: add     eax, 1
0x4A4B7D: test    cl, cl
0x4A4B7F: jnz     short loc_4A4B78
0x4A4B81: sub     eax, edx
0x4A4B83: jmp     short loc_4A4B88
0x4A4B85: movzx   eax, ax
0x4A4B88: test    eax, eax
0x4A4B8A: jz      short loc_4A4BB1
0x4A4B8C: mov     esi, [esi+8]
0x4A4B8F: mov     eax, esi
0x4A4B91: lea     edx, [eax+1]
0x4A4B94: mov     cl, [eax]
0x4A4B96: add     eax, 1
0x4A4B99: test    cl, cl
0x4A4B9B: jnz     short loc_4A4B94
0x4A4B9D: sub     eax, edx
0x4A4B9F: add     eax, 1
0x4A4BA2: push    eax
0x4A4BA3: push    esi
0x4A4BA4: push    504D4452h
0x4A4BA9: call    j_TESForm_PutCurrentChunkData
0x4A4BAE: add     esp, 0Ch
0x4A4BB1: pop     esi
0x4A4BB2: retn
