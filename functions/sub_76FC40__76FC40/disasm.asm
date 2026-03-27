0x76FC40: push    esi
0x76FC41: mov     esi, ecx
0x76FC43: mov     ecx, [esp+4+arg_4]
0x76FC47: cmp     ecx, [esi+1Ch]
0x76FC4A: jb      short loc_76FC52
0x76FC4C: xor     al, al
0x76FC4E: pop     esi
0x76FC4F: retn    20h ; ' '
0x76FC52: mov     eax, [esp+4+arg_0]
0x76FC56: cmp     eax, [esi+20h]
0x76FC59: jnb     short loc_76FC4C
0x76FC5B: mov     edx, [esi+24h]
0x76FC5E: push    ebx
0x76FC5F: mov     ebx, [esp+8+arg_18]
0x76FC63: push    ebp
0x76FC64: mov     ebp, [esp+0Ch+arg_14]
0x76FC68: push    edi
0x76FC69: shl     eax, 4
0x76FC6C: mov     eax, [eax+edx+8]
0x76FC70: mov     edx, [esp+10h+arg_10]
0x76FC74: lea     edi, ds:0[ecx*8]
0x76FC7B: sub     edi, ecx
0x76FC7D: mov     ecx, [esp+10h+arg_C]
0x76FC81: cmp     [eax+edi*4+8], ecx
0x76FC85: lea     eax, [eax+edi*4]
0x76FC88: mov     edi, [esp+10h+arg_1C]
0x76FC8C: jnz     short loc_76FCA2
0x76FC8E: cmp     [eax+0Ch], edx
0x76FC91: jnz     short loc_76FCA2
0x76FC93: cmp     [eax+14h], ebp
0x76FC96: jnz     short loc_76FCA2
0x76FC98: cmp     [eax+18h], ebx
0x76FC9B: jnz     short loc_76FCA2
0x76FC9D: cmp     [eax+10h], edi
0x76FCA0: jz      short loc_76FCDC
0x76FCA2: cmp     ecx, 1
0x76FCA5: mov     [eax+8], ecx
0x76FCA8: mov     [eax+0Ch], edx
0x76FCAB: mov     [eax+14h], ebp
0x76FCAE: mov     [eax+18h], ebx
0x76FCB1: mov     [eax+10h], edi
0x76FCB4: jnz     short loc_76FCC2
0x76FCB6: cmp     edx, 10h
0x76FCB9: jz      short loc_76FCC2
0x76FCBB: mov     dword ptr [eax+0Ch], 2
0x76FCC2: mov     eax, [esi+30h]
0x76FCC5: test    eax, eax
0x76FCC7: mov     byte ptr [esi+28h], 1
0x76FCCB: jz      short loc_76FCDC
0x76FCCD: mov     ecx, [eax]
0x76FCCF: mov     edx, [ecx+8]
0x76FCD2: push    eax
0x76FCD3: call    edx
0x76FCD5: mov     dword ptr [esi+30h], 0
0x76FCDC: pop     edi
0x76FCDD: pop     ebp
0x76FCDE: pop     ebx
0x76FCDF: mov     al, 1
0x76FCE1: pop     esi
0x76FCE2: retn    20h ; ' '
