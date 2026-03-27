0x91C720: push    esi
0x91C721: mov     esi, [ecx+0Ch]
0x91C724: xor     eax, eax
0x91C726: test    esi, esi
0x91C728: jle     short loc_91C758
0x91C72A: mov     edx, [ecx+8]
0x91C72D: push    edi
0x91C72E: mov     edi, [esp+8+arg_0]
0x91C732: cmp     [edx], edi
0x91C734: jz      short loc_91C743
0x91C736: inc     eax
0x91C737: add     edx, 4
0x91C73A: cmp     eax, esi
0x91C73C: jl      short loc_91C732
0x91C73E: pop     edi
0x91C73F: pop     esi
0x91C740: retn    4
0x91C743: test    eax, eax
0x91C745: jl      short loc_91C757
0x91C747: mov     edx, [ecx+0Ch]
0x91C74A: dec     edx
0x91C74B: mov     [ecx+0Ch], edx
0x91C74E: mov     ecx, [ecx+8]
0x91C751: mov     edx, [ecx+edx*4]
0x91C754: mov     [ecx+eax*4], edx
0x91C757: pop     edi
0x91C758: pop     esi
0x91C759: retn    4
