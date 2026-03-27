0x995B73: add     eax, 3FEFCh
0x995B78: cmp     eax, 3FF00h
0x995B7D: jb      start_13___RETURN_PI_BY_2_0
0x995B83: movd    ecx, xmm7
0x995B87: psrlq   xmm7, 20h ; ' '
0x995B8C: movd    edx, xmm7
0x995B90: and     edx, 7FFFFFFFh
0x995B96: mov     eax, 3FF00000h
0x995B9B: sub     eax, edx
0x995B9D: or      eax, ecx
0x995B9F: cmp     eax, 0
0x995BA2: jz      start_13___RETURN_ZERO_PI
