0x77A550: movzx   edx, word ptr [ecx+4Ah]
0x77A554: xor     eax, eax
0x77A556: test    edx, edx
0x77A558: push    esi
0x77A559: jbe     short loc_77A572
0x77A55B: mov     ecx, [ecx+44h]
0x77A55E: mov     edi, edi
0x77A560: mov     esi, [ecx]
0x77A562: cmp     dword ptr [esi+44h], 0
0x77A566: jz      short loc_77A576
0x77A568: add     eax, 1
0x77A56B: add     ecx, 4
0x77A56E: cmp     eax, edx
0x77A570: jb      short loc_77A560
0x77A572: mov     al, 1
0x77A574: pop     esi
0x77A575: retn
0x77A576: xor     al, al
0x77A578: pop     esi
0x77A579: retn
