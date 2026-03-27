0x9939A8: add     eax, 3FEFEh
0x9939AD: cmp     eax, 3FF00h
0x9939B2: jb      start_11___RETURN_X
0x9939B8: movd    ecx, xmm0
0x9939BC: psrlq   xmm0, 20h ; ' '
0x9939C1: movd    edx, xmm0
0x9939C5: and     edx, 7FFFFFFFh
0x9939CB: mov     eax, 3FF00000h
0x9939D0: sub     eax, edx
0x9939D2: or      eax, ecx
0x9939D4: cmp     eax, 0
0x9939D7: jz      start_11___RETURN_PI_BY_2
