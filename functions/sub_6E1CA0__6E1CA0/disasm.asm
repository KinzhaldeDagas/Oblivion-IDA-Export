0x6E1CA0: push    esi
0x6E1CA1: push    edi
0x6E1CA2: mov     edi, [esp+8+a2]
0x6E1CA6: push    edi; a2
0x6E1CA7: mov     esi, ecx
0x6E1CA9: call    sub_700670
0x6E1CAE: test    al, al
0x6E1CB0: jnz     short loc_6E1CB9
0x6E1CB2: pop     edi
0x6E1CB3: xor     al, al
0x6E1CB5: pop     esi
0x6E1CB6: retn    4
0x6E1CB9: movzx   ecx, word ptr [esi+8]
0x6E1CBD: cmp     cx, [edi+8]
0x6E1CC1: jnz     short loc_6E1CB2
0x6E1CC3: mov     eax, [esi+10h]
0x6E1CC6: cmp     eax, [edi+10h]
0x6E1CC9: jnz     short loc_6E1CB2
0x6E1CCB: mov     dx, [esi+0Ah]
0x6E1CCF: cmp     dx, [edi+0Ah]
0x6E1CD3: jnz     short loc_6E1CB2
0x6E1CD5: mov     edx, [esi+14h]
0x6E1CD8: cmp     edx, [edi+14h]
0x6E1CDB: jnz     short loc_6E1CB2
0x6E1CDD: mov     dx, [esi+0Ch]
0x6E1CE1: cmp     dx, [edi+0Ch]
0x6E1CE5: jnz     short loc_6E1CB2
0x6E1CE7: mov     edx, [esi+18h]
0x6E1CEA: cmp     edx, [edi+18h]
0x6E1CED: jnz     short loc_6E1CB2
0x6E1CEF: mov     dl, [esi+1Ch]
0x6E1CF2: cmp     dl, [edi+1Ch]
0x6E1CF5: jnz     short loc_6E1CB2
0x6E1CF7: mov     dl, [esi+1Dh]
0x6E1CFA: cmp     dl, [edi+1Dh]
0x6E1CFD: jnz     short loc_6E1CB2
0x6E1CFF: mov     dl, [esi+1Eh]
0x6E1D02: cmp     dl, [edi+1Eh]
0x6E1D05: jnz     short loc_6E1CB2
0x6E1D07: push    ebx
0x6E1D08: xor     ebx, ebx
0x6E1D0A: test    cx, cx
0x6E1D0D: push    ebp
0x6E1D0E: mov     ebp, ds:0B3D4D0h[eax*4]
0x6E1D15: jbe     short loc_6E1D4B
0x6E1D17: jmp     short loc_6E1D20
0x6E1D19: align 10h
0x6E1D20: movzx   eax, byte ptr [esi+1Ch]
0x6E1D24: mov     ecx, [edi+20h]
0x6E1D27: imul    eax, ebx
0x6E1D2A: mov     edx, [esi+20h]
0x6E1D2D: add     ecx, eax
0x6E1D2F: add     edx, eax
0x6E1D31: push    ecx
0x6E1D32: push    edx
0x6E1D33: call    ebp ; dword_B3D4D0
0x6E1D35: add     esp, 8
0x6E1D38: test    al, al
0x6E1D3A: jz      loc_6E1DD0
0x6E1D40: movzx   eax, word ptr [esi+8]
0x6E1D44: add     ebx, 1
0x6E1D47: cmp     ebx, eax
0x6E1D49: jb      short loc_6E1D20
0x6E1D4B: mov     ecx, [esi+14h]
0x6E1D4E: mov     ebp, ds:0B3D4B8h[ecx*4]
0x6E1D55: xor     ebx, ebx
0x6E1D57: cmp     [esi+0Ah], bx
0x6E1D5B: jbe     short loc_6E1D87
0x6E1D5D: lea     ecx, [ecx+0]
0x6E1D60: movzx   eax, byte ptr [esi+1Dh]
0x6E1D64: mov     ecx, [edi+24h]
0x6E1D67: imul    eax, ebx
0x6E1D6A: mov     edx, [esi+24h]
0x6E1D6D: add     ecx, eax
0x6E1D6F: add     edx, eax
0x6E1D71: push    ecx
0x6E1D72: push    edx
0x6E1D73: call    ebp
0x6E1D75: add     esp, 8
0x6E1D78: test    al, al
0x6E1D7A: jz      short loc_6E1DD0
0x6E1D7C: movzx   edx, word ptr [esi+0Ah]
0x6E1D80: add     ebx, 1
0x6E1D83: cmp     ebx, edx
0x6E1D85: jb      short loc_6E1D60
0x6E1D87: mov     eax, [esi+18h]
0x6E1D8A: mov     ebp, ds:0B3D4A0h[eax*4]
0x6E1D91: xor     ebx, ebx
0x6E1D93: cmp     [esi+0Ch], bx
0x6E1D97: jbe     short loc_6E1DC7
0x6E1D99: lea     esp, [esp+0]
0x6E1DA0: movzx   eax, byte ptr [esi+1Eh]
0x6E1DA4: mov     ecx, [edi+28h]
0x6E1DA7: imul    eax, ebx
0x6E1DAA: mov     edx, [esi+28h]
0x6E1DAD: add     ecx, eax
0x6E1DAF: add     edx, eax
0x6E1DB1: push    ecx
0x6E1DB2: push    edx
0x6E1DB3: call    ebp ; dword_B3D4A0
0x6E1DB5: add     esp, 8
0x6E1DB8: test    al, al
0x6E1DBA: jz      short loc_6E1DD0
0x6E1DBC: movzx   ecx, word ptr [esi+0Ch]
0x6E1DC0: add     ebx, 1
0x6E1DC3: cmp     ebx, ecx
0x6E1DC5: jb      short loc_6E1DA0
0x6E1DC7: pop     ebp
0x6E1DC8: pop     ebx
0x6E1DC9: pop     edi
0x6E1DCA: mov     al, 1
0x6E1DCC: pop     esi
0x6E1DCD: retn    4
0x6E1DD0: pop     ebp
0x6E1DD1: pop     ebx
0x6E1DD2: pop     edi
0x6E1DD3: xor     al, al
0x6E1DD5: pop     esi
0x6E1DD6: retn    4
