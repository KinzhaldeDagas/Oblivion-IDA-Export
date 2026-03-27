0x51C360: push    ecx
0x51C361: mov     eax, [ecx+1Ch]
0x51C364: test    eax, eax
0x51C366: jnz     short loc_51C36D
0x51C368: mov     eax, offset EmptyString
0x51C36D: push    esi
0x51C36E: lea     esi, [eax+1]
0x51C371: mov     dl, [eax]
0x51C373: add     eax, 1
0x51C376: test    dl, dl
0x51C378: jnz     short loc_51C371
0x51C37A: mov     ecx, [ecx+30h]
0x51C37D: sub     eax, esi
0x51C37F: add     eax, 35h ; '5'
0x51C382: movzx   eax, ax
0x51C385: add     eax, 1
0x51C388: test    ecx, ecx
0x51C38A: jnz     short loc_51C391
0x51C38C: mov     ecx, offset EmptyString
0x51C391: lea     esi, [ecx+1]
0x51C394: mov     dl, [ecx]
0x51C396: add     ecx, 1
0x51C399: test    dl, dl
0x51C39B: jnz     short loc_51C394
0x51C39D: sub     ecx, esi
0x51C39F: add     eax, ecx
0x51C3A1: pop     esi
0x51C3A2: pop     ecx
0x51C3A3: retn
