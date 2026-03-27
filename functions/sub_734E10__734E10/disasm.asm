0x734E10: push    ebp
0x734E11: push    esi
0x734E12: push    edi
0x734E13: mov     edi, ecx
0x734E15: movzx   eax, word ptr [edi+106h]
0x734E1C: cmp     [edi+168h], eax
0x734E22: jnb     short loc_734E5B
0x734E24: mov     [edi+168h], eax
0x734E2A: mov     eax, [edi+16Ch]
0x734E30: push    eax
0x734E31: call    FormHeapFree
0x734E36: mov     eax, [edi+168h]
0x734E3C: xor     ecx, ecx
0x734E3E: mov     edx, 4
0x734E43: mul     edx
0x734E45: seto    cl
0x734E48: neg     ecx
0x734E4A: or      ecx, eax
0x734E4C: push    ecx; Size
0x734E4D: call    FormHeapAlloc
0x734E52: add     esp, 8
0x734E55: mov     [edi+16Ch], eax
0x734E5B: movzx   eax, word ptr [edi+106h]
0x734E62: add     eax, eax
0x734E64: add     eax, eax
0x734E66: cmp     [edi+160h], eax
0x734E6C: jnb     short loc_734E95
0x734E6E: mov     [edi+160h], eax
0x734E74: mov     eax, [edi+164h]
0x734E7A: push    eax
0x734E7B: call    FormHeapFree
0x734E80: mov     ecx, [edi+160h]
0x734E86: push    ecx; Size
0x734E87: call    FormHeapAlloc
0x734E8C: add     esp, 8
0x734E8F: mov     [edi+164h], eax
0x734E95: movzx   eax, byte ptr [edi+108h]
0x734E9C: mov     esi, [edi+16Ch]
0x734EA2: add     eax, 0FFFFFFF8h; switch 25 cases
0x734EA5: cmp     eax, 18h
0x734EA8: ja      def_734EB6
0x734EAE: movzx   edx, ds:byte_735070[eax]
0x734EB5: push    ebx
0x734EB6: jmp     ds:jpt_734EB6[edx*4]; switch jump
0x734EBD: movzx   eax, word ptr [edi+106h]; jumptable 00734EB6 case 8
0x734EC4: mov     ebx, [edi+164h]
0x734ECA: mov     ecx, [esp+10h+arg_0]
0x734ECE: push    eax
0x734ECF: push    ebx
0x734ED0: push    ecx
0x734ED1: call    sub_734C80
0x734ED6: xor     ecx, ecx
0x734ED8: add     esp, 0Ch
0x734EDB: cmp     [edi+106h], cx
0x734EE2: jbe     loc_735054; jumptable 00734EB6 cases 9-14,17-23,25-31
0x734EE8: mov     dl, 0FFh
0x734EEA: lea     ebx, [ebx+0]
0x734EF0: mov     al, [ebx]
0x734EF2: mov     [esi+2], al
0x734EF5: mov     [esi+1], al
0x734EF8: mov     [esi], al
0x734EFA: mov     [esi+3], dl
0x734EFD: movzx   eax, word ptr [edi+106h]
0x734F04: add     ecx, 1
0x734F07: add     esi, 4
0x734F0A: add     ebx, 1
0x734F0D: cmp     ecx, eax
0x734F0F: jb      short loc_734EF0
0x734F11: pop     ebx
0x734F12: pop     edi
0x734F13: pop     esi
0x734F14: pop     ebp
0x734F15: retn    4
0x734F18: movzx   ecx, word ptr [edi+106h]; jumptable 00734EB6 cases 15,16
0x734F1F: mov     ebx, [edi+164h]
0x734F25: mov     edx, [esp+10h+arg_0]
0x734F29: add     ecx, ecx
0x734F2B: push    ecx
0x734F2C: push    ebx
0x734F2D: push    edx
0x734F2E: call    sub_734C80
0x734F33: xor     ebp, ebp
0x734F35: add     esp, 0Ch
0x734F38: cmp     [edi+106h], bp
0x734F3F: jbe     loc_735054; jumptable 00734EB6 cases 9-14,17-23,25-31
0x734F45: mov     dl, 0FFh
0x734F47: movzx   eax, byte ptr [ebx+1]
0x734F4B: and     al, 0FCh
0x734F4D: add     al, al
0x734F4F: mov     [esi], al
0x734F51: movzx   ecx, byte ptr [ebx]
0x734F54: movzx   eax, byte ptr [ebx+1]
0x734F58: shr     cl, 2
0x734F5B: and     cl, 38h
0x734F5E: shl     al, 6
0x734F61: add     cl, al
0x734F63: mov     [esi+1], cl
0x734F66: movzx   ecx, byte ptr [ebx]
0x734F69: add     cl, cl
0x734F6B: add     cl, cl
0x734F6D: add     cl, cl
0x734F6F: mov     [esi+2], cl
0x734F72: mov     [esi+3], dl
0x734F75: movzx   eax, word ptr [edi+106h]
0x734F7C: add     ebp, 1
0x734F7F: add     esi, 4
0x734F82: add     ebx, 2
0x734F85: cmp     ebp, eax
0x734F87: jb      short loc_734F47
0x734F89: pop     ebx
0x734F8A: pop     edi
0x734F8B: pop     esi
0x734F8C: pop     ebp
0x734F8D: retn    4
0x734F90: movzx   eax, word ptr [edi+106h]; jumptable 00734EB6 case 24
0x734F97: mov     ebx, [edi+164h]
0x734F9D: mov     edx, [esp+10h+arg_0]
0x734FA1: lea     ecx, [eax+eax*2]
0x734FA4: push    ecx
0x734FA5: push    ebx
0x734FA6: push    edx
0x734FA7: call    sub_734C80
0x734FAC: xor     eax, eax
0x734FAE: add     esp, 0Ch
0x734FB1: cmp     [edi+106h], ax
0x734FB8: jbe     loc_735054; jumptable 00734EB6 cases 9-14,17-23,25-31
0x734FBE: mov     dl, 0FFh
0x734FC0: movzx   ecx, byte ptr [ebx]
0x734FC3: add     ebx, 1
0x734FC6: mov     [esi+2], cl
0x734FC9: movzx   ecx, byte ptr [ebx]
0x734FCC: add     ebx, 1
0x734FCF: mov     [esi+1], cl
0x734FD2: movzx   ecx, byte ptr [ebx]
0x734FD5: mov     [esi], cl
0x734FD7: mov     [esi+3], dl
0x734FDA: movzx   ecx, word ptr [edi+106h]
0x734FE1: add     eax, 1
0x734FE4: add     ebx, 1
0x734FE7: add     esi, 4
0x734FEA: cmp     eax, ecx
0x734FEC: jb      short loc_734FC0
0x734FEE: pop     ebx
0x734FEF: pop     edi
0x734FF0: pop     esi
0x734FF1: pop     ebp
0x734FF2: retn    4
0x734FF5: movzx   edx, word ptr [edi+106h]; jumptable 00734EB6 case 32
0x734FFC: mov     ebx, [edi+164h]
0x735002: mov     eax, [esp+10h+arg_0]
0x735006: add     edx, edx
0x735008: add     edx, edx
0x73500A: push    edx
0x73500B: push    ebx
0x73500C: push    eax
0x73500D: call    sub_734C80
0x735012: xor     eax, eax
0x735014: add     esp, 0Ch
0x735017: cmp     [edi+106h], ax
0x73501E: jbe     short loc_735054; jumptable 00734EB6 cases 9-14,17-23,25-31
0x735020: movzx   ecx, byte ptr [ebx]
0x735023: add     ebx, 1
0x735026: mov     [esi+2], cl
0x735029: movzx   edx, byte ptr [ebx]
0x73502C: add     ebx, 1
0x73502F: mov     [esi+1], dl
0x735032: movzx   ecx, byte ptr [ebx]
0x735035: add     ebx, 1
0x735038: mov     [esi], cl
0x73503A: movzx   edx, byte ptr [ebx]
0x73503D: mov     [esi+3], dl
0x735040: movzx   ecx, word ptr [edi+106h]
0x735047: add     eax, 1
0x73504A: add     ebx, 1
0x73504D: add     esi, 4
0x735050: cmp     eax, ecx
0x735052: jb      short loc_735020
0x735054: pop     ebx; jumptable 00734EB6 cases 9-14,17-23,25-31
