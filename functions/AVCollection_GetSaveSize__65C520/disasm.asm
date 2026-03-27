0x65C520: mov     eax, ds:0B33B00h
0x65C525: mov     al, [eax+7Ch]
0x65C528: xor     edx, edx
0x65C52A: cmp     al, 34h ; '4'
0x65C52C: jb      short loc_65C53C
0x65C52E: mov     edx, 5
0x65C533: test    dx, dx
0x65C536: jnz     short loc_65C541
0x65C538: xor     ax, ax
0x65C53B: retn
0x65C53C: mov     edx, 8
0x65C541: xor     eax, eax
0x65C543: test    ecx, ecx
0x65C545: push    esi
0x65C546: mov     esi, ecx
0x65C548: jz      short loc_65C55F
0x65C54A: lea     ebx, [ebx+0]
0x65C550: cmp     dword ptr [esi], 0
0x65C553: jz      short loc_65C558
0x65C555: add     eax, 1
0x65C558: mov     esi, [esi+4]
0x65C55B: test    esi, esi
0x65C55D: jnz     short loc_65C550
0x65C55F: imul    eax, edx
0x65C562: add     eax, 2
0x65C565: cmp     dword ptr [ecx+0Ch], 0
0x65C569: movzx   eax, ax
0x65C56C: pop     esi
0x65C56D: jz      short loc_65C571
0x65C56F: add     eax, edx
0x65C571: cmp     dword ptr [ecx+8], 0
0x65C575: jz      short loc_65C579
0x65C577: add     eax, edx
0x65C579: mov     ecx, [ecx+10h]
0x65C57C: test    ecx, ecx
0x65C57E: jz      locret_65C613
0x65C584: cmp     dword ptr [ecx], 0
0x65C587: jz      short loc_65C58B
0x65C589: add     eax, edx
0x65C58B: cmp     dword ptr [ecx+4], 0
0x65C58F: jz      short loc_65C593
0x65C591: add     eax, edx
0x65C593: cmp     dword ptr [ecx+8], 0
0x65C597: jz      short loc_65C59B
0x65C599: add     eax, edx
0x65C59B: cmp     dword ptr [ecx+0Ch], 0
0x65C59F: jz      short loc_65C5A3
0x65C5A1: add     eax, edx
0x65C5A3: cmp     dword ptr [ecx+10h], 0
0x65C5A7: jz      short loc_65C5AB
0x65C5A9: add     eax, edx
0x65C5AB: cmp     dword ptr [ecx+14h], 0
0x65C5AF: jz      short loc_65C5B3
0x65C5B1: add     eax, edx
0x65C5B3: cmp     dword ptr [ecx+18h], 0
0x65C5B7: jz      short loc_65C5BB
0x65C5B9: add     eax, edx
0x65C5BB: cmp     dword ptr [ecx+1Ch], 0
0x65C5BF: jz      short loc_65C5C3
0x65C5C1: add     eax, edx
0x65C5C3: cmp     dword ptr [ecx+20h], 0
0x65C5C7: jz      short loc_65C5CB
0x65C5C9: add     eax, edx
0x65C5CB: cmp     dword ptr [ecx+24h], 0
0x65C5CF: jz      short loc_65C5D3
0x65C5D1: add     eax, edx
0x65C5D3: cmp     dword ptr [ecx+28h], 0
0x65C5D7: jz      short loc_65C5DB
0x65C5D9: add     eax, edx
0x65C5DB: cmp     dword ptr [ecx+2Ch], 0
0x65C5DF: jz      short loc_65C5E3
0x65C5E1: add     eax, edx
0x65C5E3: cmp     dword ptr [ecx+30h], 0
0x65C5E7: jz      short loc_65C5EB
0x65C5E9: add     eax, edx
0x65C5EB: cmp     dword ptr [ecx+34h], 0
0x65C5EF: jz      short loc_65C5F3
0x65C5F1: add     eax, edx
0x65C5F3: cmp     dword ptr [ecx+38h], 0
0x65C5F7: jz      short loc_65C5FB
0x65C5F9: add     eax, edx
0x65C5FB: cmp     dword ptr [ecx+3Ch], 0
0x65C5FF: jz      short loc_65C603
0x65C601: add     eax, edx
0x65C603: cmp     dword ptr [ecx+40h], 0
0x65C607: jz      short loc_65C60B
0x65C609: add     eax, edx
0x65C60B: cmp     dword ptr [ecx+44h], 0
0x65C60F: jz      short locret_65C613
0x65C611: add     eax, edx
0x65C613: retn
