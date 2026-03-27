0x985730: mov     al, [esi+3]
0x985733: and     edx, ecx
0x985735: mov     [edi+3], al
0x985738: mov     al, [esi+2]
0x98573B: mov     [edi+2], al
0x98573E: mov     al, [esi+1]
0x985741: shr     ecx, 2
0x985744: mov     [edi+1], al
0x985747: sub     esi, 3
0x98574A: sub     edi, 3
0x98574D: cmp     ecx, 8
0x985750: jb      unknown_libname_38
0x985756: std
0x985757: rep movsd
0x985759: cld
0x98575A: jmp     ds:jpt_9856D0[edx*4]; switch 4 cases
