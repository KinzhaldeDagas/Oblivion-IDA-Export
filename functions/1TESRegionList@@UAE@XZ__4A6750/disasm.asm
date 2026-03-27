0x4A6750: push    ebx
0x4A6751: push    esi
0x4A6752: mov     esi, ecx
0x4A6754: mov     dword ptr [esi], offset ??_7TESRegionList@@6B@; const TESRegionList::`vftable'
0x4A675A: call    sub_4A6380
0x4A675F: xor     ebx, ebx
0x4A6761: cmp     [esi+0Ch], bl
0x4A6764: jz      short loc_4A67A9
0x4A6766: sub     dword ptr ds:0B35460h, 1
0x4A676D: jnz     short loc_4A67A9
0x4A676F: xor     esi, esi
0x4A6771: mov     ecx, ds:dword_B35420[esi]
0x4A6777: cmp     ecx, ebx
0x4A6779: jz      short loc_4A6789
0x4A677B: mov     ds:dword_B35420[esi], ebx
0x4A6781: mov     eax, [ecx]
0x4A6783: mov     edx, [eax]
0x4A6785: push    1
0x4A6787: call    edx
0x4A6789: mov     ecx, ds:dword_B35424[esi]
0x4A678F: cmp     ecx, ebx
0x4A6791: jz      short loc_4A67A1
0x4A6793: mov     ds:dword_B35424[esi], ebx
0x4A6799: mov     eax, [ecx]
0x4A679B: mov     edx, [eax]
0x4A679D: push    1
0x4A679F: call    edx
0x4A67A1: add     esi, 8
0x4A67A4: cmp     esi, 40h ; '@'
0x4A67A7: jb      short loc_4A6771
0x4A67A9: pop     esi
0x4A67AA: pop     ebx
0x4A67AB: retn
