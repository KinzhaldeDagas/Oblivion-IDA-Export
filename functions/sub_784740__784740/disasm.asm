0x784740: mov     edx, [esp+arg_0]
0x784744: mov     eax, [edx+8]
0x784747: push    esi
0x784748: mov     esi, [eax]
0x78474A: mov     [edx+8], esi
0x78474D: mov     esi, [eax]
0x78474F: cmp     byte ptr [esi+2Dh], 0
0x784753: jnz     short loc_784758
0x784755: mov     [esi+4], edx
0x784758: mov     esi, [edx+4]
0x78475B: mov     [eax+4], esi
0x78475E: mov     ecx, [ecx+4]
0x784761: cmp     edx, [ecx+4]
0x784764: pop     esi
0x784765: jnz     short loc_784772
0x784767: mov     [ecx+4], eax
0x78476A: mov     [eax], edx
0x78476C: mov     [edx+4], eax
0x78476F: retn    4
0x784772: mov     ecx, [edx+4]
0x784775: cmp     edx, [ecx]
0x784777: jnz     short loc_784783
0x784779: mov     [ecx], eax
0x78477B: mov     [eax], edx
0x78477D: mov     [edx+4], eax
0x784780: retn    4
0x784783: mov     [ecx+8], eax
0x784786: mov     [eax], edx
0x784788: mov     [edx+4], eax
0x78478B: retn    4
