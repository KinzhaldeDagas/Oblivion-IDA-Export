0x483750: mov     eax, [ecx+0Ch]
0x483753: push    ebx
0x483754: mov     ebx, eax
0x483756: push    esi
0x483757: shr     ebx, 1
0x483759: xor     esi, esi
0x48375B: test    eax, eax
0x48375D: jbe     short loc_4837B2
0x48375F: push    ebp
0x483760: push    edi
0x483761: mov     edi, ebx
0x483763: neg     edi
0x483765: xor     edx, edx
0x483767: test    eax, eax
0x483769: jbe     short loc_4837A3
0x48376B: jmp     short loc_483770
0x48376D: align 10h
0x483770: imul    eax, esi
0x483773: add     eax, edx
0x483775: shl     eax, 4
0x483778: add     eax, [ecx+10h]
0x48377B: cmp     dword ptr [eax+8], 0
0x48377F: jnz     short loc_483799
0x483781: cmp     dword ptr [eax+0Ch], 0
0x483785: jnz     short loc_483799
0x483787: mov     ebp, [ecx+4]
0x48378A: add     ebp, edi
0x48378C: mov     [eax+8], ebp
0x48378F: mov     ebp, [ecx+8]
0x483792: sub     ebp, ebx
0x483794: add     ebp, edx
0x483796: mov     [eax+0Ch], ebp
0x483799: mov     eax, [ecx+0Ch]
0x48379C: add     edx, 1
0x48379F: cmp     edx, eax
0x4837A1: jb      short loc_483770
0x4837A3: mov     eax, [ecx+0Ch]
0x4837A6: add     esi, 1
0x4837A9: add     edi, 1
0x4837AC: cmp     esi, eax
0x4837AE: jb      short loc_483765
0x4837B0: pop     edi
0x4837B1: pop     ebp
0x4837B2: pop     esi
0x4837B3: pop     ebx
0x4837B4: retn
