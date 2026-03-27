0x589770: push    edi
0x589771: movzx   edi, word ptr [ecx+18h]
0x589775: cmp     di, 0FDEh
0x58977A: jz      short loc_5897B6
0x58977C: movzx   eax, word ptr [ecx+0Ch]
0x589780: cmp     ax, 0FFFFh
0x589784: jnz     short loc_58979E
0x589786: mov     eax, [ecx+8]
0x589789: push    esi
0x58978A: lea     esi, [eax+1]
0x58978D: lea     ecx, [ecx+0]
0x589790: mov     dl, [eax]
0x589792: add     eax, 1
0x589795: test    dl, dl
0x589797: jnz     short loc_589790
0x589799: sub     eax, esi
0x58979B: pop     esi
0x58979C: jmp     short loc_5897A1
0x58979E: movzx   eax, ax
0x5897A1: test    eax, eax
0x5897A3: ja      short loc_5897B6
0x5897A5: cmp     byte ptr [ecx+1Ah], 0
0x5897A9: jz      short loc_5897B6
0x5897AB: cmp     di, 0FE6h
0x5897B0: jz      short loc_5897B6
0x5897B2: xor     eax, eax
0x5897B4: pop     edi
0x5897B5: retn
0x5897B6: mov     eax, 1
0x5897BB: pop     edi
0x5897BC: retn
