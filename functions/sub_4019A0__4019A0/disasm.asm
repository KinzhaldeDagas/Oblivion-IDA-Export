0x4019A0: push    esi
0x4019A1: mov     esi, [ecx+24h]
0x4019A4: test    esi, esi
0x4019A6: jz      loc_401A28
0x4019AC: push    ebx
0x4019AD: lea     ecx, [ecx+0]
0x4019B0: mov     eax, [esi+4]
0x4019B3: mov     edx, eax
0x4019B5: shr     edx, 1Eh
0x4019B8: test    dl, 1
0x4019BB: jz      short loc_401A27
0x4019BD: mov     edx, [ecx+18h]
0x4019C0: add     edx, [ecx+10h]
0x4019C3: and     eax, 0FFFFFFFh
0x4019C8: lea     ebx, [eax+esi+8]
0x4019CC: cmp     ebx, edx
0x4019CE: jnz     short loc_401A27
0x4019D0: xor     edx, edx
0x4019D2: div     dword ptr [ecx+4]
0x4019D5: sub     eax, 1
0x4019D8: cmp     eax, [ecx+30h]
0x4019DB: jl      short loc_4019E2
0x4019DD: lea     eax, [ecx+3Ch]
0x4019E0: jmp     short loc_4019E8
0x4019E2: mov     edx, [ecx+34h]
0x4019E5: lea     eax, [edx+eax*8]
0x4019E8: push    esi
0x4019E9: push    eax
0x4019EA: call    sub_401690
0x4019EF: mov     eax, [esi+4]
0x4019F2: add     dword ptr [ecx+1Ch], 0FFFFFFFFh
0x4019F6: and     eax, 0FFFFFFFh
0x4019FB: mov     edx, 0FFFFFFF8h
0x401A00: sub     edx, eax
0x401A02: mov     eax, [ecx+20h]
0x401A05: add     [ecx+10h], edx
0x401A08: cmp     eax, [ecx+24h]
0x401A0B: jz      short loc_401A19
0x401A0D: mov     esi, [esi]
0x401A0F: test    esi, esi
0x401A11: mov     [ecx+24h], esi
0x401A14: jnz     short loc_4019B0
0x401A16: pop     ebx
0x401A17: pop     esi
0x401A18: retn
0x401A19: mov     dword ptr [ecx+24h], 0
0x401A20: mov     dword ptr [ecx+20h], 0
0x401A27: pop     ebx
0x401A28: pop     esi
0x401A29: retn
