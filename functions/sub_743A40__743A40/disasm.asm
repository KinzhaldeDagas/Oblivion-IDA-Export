0x743A40: push    ebp
0x743A41: push    esi
0x743A42: push    edi
0x743A43: mov     edi, [esp+0Ch+arg_0]
0x743A47: test    edi, edi
0x743A49: jz      loc_743E39
0x743A4F: mov     esi, [edi+1Ch]
0x743A52: test    esi, esi
0x743A54: jz      loc_743E39
0x743A5A: mov     ebp, [esp+0Ch+arg_4]
0x743A5E: cmp     ebp, 4
0x743A61: ja      loc_743E39
0x743A67: cmp     dword ptr [edi+0Ch], 0
0x743A6B: jz      loc_743E30
0x743A71: cmp     dword ptr [edi], 0
0x743A74: jnz     short loc_743A80
0x743A76: cmp     dword ptr [edi+4], 0
0x743A7A: jnz     loc_743E30
0x743A80: mov     eax, [esi+4]
0x743A83: cmp     eax, 29Ah
0x743A88: jnz     short loc_743A93
0x743A8A: cmp     ebp, 4
0x743A8D: jnz     loc_743E30
0x743A93: cmp     dword ptr [edi+10h], 0
0x743A97: jnz     short loc_743AAA
0x743A99: mov     eax, ds:0A8284Ch
0x743A9E: mov     [edi+18h], eax
0x743AA1: pop     edi
0x743AA2: pop     esi
0x743AA3: mov     eax, 0FFFFFFFBh
0x743AA8: pop     ebp
0x743AA9: retn
0x743AAA: cmp     eax, 2Ah ; '*'
0x743AAD: mov     ecx, [esi+20h]
0x743AB0: push    ebx
0x743AB1: mov     [esi], edi
0x743AB3: mov     [esp+10h+arg_0], ecx
0x743AB7: mov     [esi+20h], ebp
0x743ABA: mov     ebx, 1
0x743ABF: jnz     loc_743C2B
0x743AC5: mov     edx, 2
0x743ACA: cmp     [esi+18h], edx
0x743ACD: jnz     loc_743B8C
0x743AD3: mov     ecx, [esi+14h]
0x743AD6: mov     eax, [esi+8]
0x743AD9: mov     byte ptr [eax+ecx], 1Fh
0x743ADD: add     [esi+14h], ebx
0x743AE0: mov     eax, [esi+14h]
0x743AE3: mov     ecx, [esi+8]
0x743AE6: mov     byte ptr [eax+ecx], 8Bh ; '‹'
0x743AEA: add     [esi+14h], ebx
0x743AED: mov     eax, [esi+14h]
0x743AF0: mov     ecx, [esi+8]
0x743AF3: mov     byte ptr [eax+ecx], 8
0x743AF7: add     [esi+14h], ebx
0x743AFA: mov     eax, [esi+14h]
0x743AFD: mov     ecx, [esi+8]
0x743B00: mov     byte ptr [eax+ecx], 0
0x743B04: add     [esi+14h], ebx
0x743B07: mov     eax, [esi+14h]
0x743B0A: mov     ecx, [esi+8]
0x743B0D: mov     byte ptr [eax+ecx], 0
0x743B11: add     [esi+14h], ebx
0x743B14: mov     eax, [esi+14h]
0x743B17: mov     ecx, [esi+8]
0x743B1A: mov     byte ptr [eax+ecx], 0
0x743B1E: add     [esi+14h], ebx
0x743B21: mov     eax, [esi+14h]
0x743B24: mov     ecx, [esi+8]
0x743B27: mov     byte ptr [eax+ecx], 0
0x743B2B: add     [esi+14h], ebx
0x743B2E: mov     eax, [esi+14h]
0x743B31: mov     ecx, [esi+8]
0x743B34: mov     byte ptr [eax+ecx], 0
0x743B38: add     [esi+14h], ebx
0x743B3B: mov     eax, [esi+7Ch]
0x743B3E: cmp     eax, 9
0x743B41: mov     ecx, [esi+14h]
0x743B44: jnz     short loc_743B4A
0x743B46: mov     eax, edx
0x743B48: jmp     short loc_743B5F
0x743B4A: cmp     [esi+80h], edx
0x743B50: jge     short loc_743B5A
0x743B52: cmp     eax, edx
0x743B54: jl      short loc_743B5A
0x743B56: xor     eax, eax
0x743B58: jmp     short loc_743B5F
0x743B5A: mov     eax, 4
0x743B5F: mov     edx, [esi+8]
0x743B62: mov     [ecx+edx], al
0x743B65: add     [esi+14h], ebx
0x743B68: mov     eax, [esi+14h]
0x743B6B: mov     ecx, [esi+8]
0x743B6E: push    0
0x743B70: mov     byte ptr [eax+ecx], 0FFh
0x743B74: add     [esi+14h], ebx
0x743B77: push    0
0x743B79: push    0
0x743B7B: mov     dword ptr [esi+4], 71h ; 'q'
0x743B82: call    sub_745D90
0x743B87: jmp     loc_743C25
0x743B8C: mov     ecx, [esi+28h]
0x743B8F: sub     ecx, 8
0x743B92: shl     ecx, 0Ch
0x743B95: add     ecx, 800h
0x743B9B: cmp     [esi+80h], edx
0x743BA1: jge     short loc_743BCB
0x743BA3: mov     ebp, [esi+7Ch]
0x743BA6: cmp     ebp, edx
0x743BA8: jl      short loc_743BC7
0x743BAA: cmp     ebp, 6
0x743BAD: jge     short loc_743BB7
0x743BAF: mov     ebp, [esp+10h+arg_4]
0x743BB3: mov     eax, ebx
0x743BB5: jmp     short loc_743BCD
0x743BB7: xor     eax, eax
0x743BB9: cmp     ebp, 6
0x743BBC: mov     ebp, [esp+10h+arg_4]
0x743BC0: setnz   al
0x743BC3: add     eax, edx
0x743BC5: jmp     short loc_743BCD
0x743BC7: mov     ebp, [esp+10h+arg_4]
0x743BCB: xor     eax, eax
0x743BCD: shl     eax, 6
0x743BD0: or      ecx, eax
0x743BD2: cmp     dword ptr [esi+64h], 0
0x743BD6: jz      short loc_743BDB
0x743BD8: or      ecx, 20h
0x743BDB: mov     eax, 8421085h
0x743BE0: mul     ecx
0x743BE2: sub     ecx, edx
0x743BE4: shr     ecx, 1
0x743BE6: add     ecx, edx
0x743BE8: shr     ecx, 4
0x743BEB: add     ecx, ebx
0x743BED: mov     eax, ecx
0x743BEF: shl     ecx, 5
0x743BF2: sub     ecx, eax
0x743BF4: mov     eax, esi
0x743BF6: mov     dword ptr [esi+4], 71h ; 'q'
0x743BFD: call    sub_7439C0
0x743C02: cmp     dword ptr [esi+64h], 0
0x743C06: jz      short loc_743C1A
0x743C08: movzx   ecx, word ptr [edi+32h]
0x743C0C: call    sub_7439C0
0x743C11: movzx   ecx, word ptr [edi+30h]
0x743C15: call    sub_7439C0
0x743C1A: push    0
0x743C1C: push    0
0x743C1E: push    0
0x743C20: call    sub_7459B0
0x743C25: mov     [edi+30h], eax
0x743C28: add     esp, 0Ch
0x743C2B: cmp     dword ptr [esi+14h], 0
0x743C2F: jz      short loc_743C4C
0x743C31: mov     eax, edi
0x743C33: call    sub_7439F0
0x743C38: cmp     dword ptr [edi+10h], 0
0x743C3C: jnz     short loc_743C70
0x743C3E: mov     dword ptr [esi+20h], 0FFFFFFFFh
0x743C45: pop     ebx
0x743C46: pop     edi
0x743C47: pop     esi
0x743C48: xor     eax, eax
0x743C4A: pop     ebp
0x743C4B: retn
0x743C4C: cmp     dword ptr [edi+4], 0
0x743C50: jnz     short loc_743C70
0x743C52: cmp     ebp, [esp+10h+arg_0]
0x743C56: jg      short loc_743C70
0x743C58: cmp     ebp, 4
0x743C5B: jz      short loc_743C70
0x743C5D: mov     edx, ds:0A8284Ch
0x743C63: pop     ebx
0x743C64: mov     [edi+18h], edx
0x743C67: pop     edi
0x743C68: pop     esi
0x743C69: mov     eax, 0FFFFFFFBh
0x743C6E: pop     ebp
0x743C6F: retn
0x743C70: mov     eax, [esi+4]
0x743C73: cmp     eax, 29Ah
0x743C78: jnz     short loc_743C92
0x743C7A: cmp     dword ptr [edi+4], 0
0x743C7E: jz      short loc_743C98
0x743C80: mov     eax, ds:0A8284Ch
0x743C85: pop     ebx
0x743C86: mov     [edi+18h], eax
0x743C89: pop     edi
0x743C8A: pop     esi
0x743C8B: mov     eax, 0FFFFFFFBh
0x743C90: pop     ebp
0x743C91: retn
0x743C92: cmp     dword ptr [edi+4], 0
0x743C96: jnz     short loc_743CB1
0x743C98: cmp     dword ptr [esi+6Ch], 0
0x743C9C: jnz     short loc_743CB1
0x743C9E: test    ebp, ebp
0x743CA0: jz      loc_743D42
0x743CA6: cmp     eax, 29Ah
0x743CAB: jz      loc_743D42
0x743CB1: mov     eax, [esi+7Ch]
0x743CB4: lea     ecx, [eax+eax*2]
0x743CB7: mov     edx, ds:funcs_743CC0[ecx*4]
0x743CBE: push    ebp
0x743CBF: push    esi
0x743CC0: call    edx ; sub_744330
0x743CC2: add     esp, 8
0x743CC5: cmp     eax, 2
0x743CC8: jz      short loc_743CCF
0x743CCA: cmp     eax, 3
0x743CCD: jnz     short loc_743CD6
0x743CCF: mov     dword ptr [esi+4], 29Ah
0x743CD6: test    eax, eax
0x743CD8: jz      loc_743E18
0x743CDE: cmp     eax, 2
0x743CE1: jz      loc_743E18
0x743CE7: cmp     eax, ebx
0x743CE9: jnz     short loc_743D42
0x743CEB: cmp     ebp, ebx
0x743CED: jnz     short loc_743CFA
0x743CEF: push    esi
0x743CF0: call    sub_747420
0x743CF5: add     esp, 4
0x743CF8: jmp     short loc_743D31
0x743CFA: push    0
0x743CFC: push    0
0x743CFE: push    0
0x743D00: push    esi
0x743D01: call    sub_747380
0x743D06: add     esp, 10h
0x743D09: cmp     ebp, 3
0x743D0C: jnz     short loc_743D31
0x743D0E: mov     eax, [esi+44h]
0x743D11: mov     ecx, [esi+3Ch]
0x743D14: mov     word ptr [ecx+eax*2-2], 0
0x743D1B: mov     edx, [esi+44h]
0x743D1E: mov     ecx, [esi+3Ch]
0x743D21: lea     eax, [edx+edx-2]
0x743D25: push    eax
0x743D26: push    0
0x743D28: push    ecx
0x743D29: call    __memset
0x743D2E: add     esp, 0Ch
0x743D31: mov     eax, edi
0x743D33: call    sub_7439F0
0x743D38: cmp     dword ptr [edi+10h], 0
0x743D3C: jz      loc_743C3E
0x743D42: cmp     ebp, 4
0x743D45: jnz     loc_743C45
0x743D4B: mov     eax, [esi+18h]
0x743D4E: test    eax, eax
0x743D50: jg      short loc_743D59
0x743D52: mov     eax, ebx
0x743D54: pop     ebx
0x743D55: pop     edi
0x743D56: pop     esi
0x743D57: pop     ebp
0x743D58: retn
0x743D59: cmp     eax, 2
0x743D5C: jnz     loc_743DE4
0x743D62: movzx   ecx, byte ptr [edi+30h]
0x743D66: mov     eax, [esi+14h]
0x743D69: mov     edx, [esi+8]
0x743D6C: mov     [edx+eax], cl
0x743D6F: add     [esi+14h], ebx
0x743D72: movzx   ecx, byte ptr [edi+31h]
0x743D76: mov     eax, [esi+14h]
0x743D79: mov     edx, [esi+8]
0x743D7C: mov     [eax+edx], cl
0x743D7F: add     [esi+14h], ebx
0x743D82: movzx   ecx, byte ptr [edi+32h]
0x743D86: mov     eax, [esi+14h]
0x743D89: mov     edx, [esi+8]
0x743D8C: mov     [eax+edx], cl
0x743D8F: add     [esi+14h], ebx
0x743D92: movzx   ecx, byte ptr [edi+33h]
0x743D96: mov     eax, [esi+14h]
0x743D99: mov     edx, [esi+8]
0x743D9C: mov     [eax+edx], cl
0x743D9F: add     [esi+14h], ebx
0x743DA2: movzx   ecx, byte ptr [edi+8]
0x743DA6: mov     eax, [esi+14h]
0x743DA9: mov     edx, [esi+8]
0x743DAC: mov     [eax+edx], cl
0x743DAF: add     [esi+14h], ebx
0x743DB2: movzx   ecx, byte ptr [edi+9]
0x743DB6: mov     eax, [esi+14h]
0x743DB9: mov     edx, [esi+8]
0x743DBC: mov     [eax+edx], cl
0x743DBF: add     [esi+14h], ebx
0x743DC2: movzx   ecx, byte ptr [edi+0Ah]
0x743DC6: mov     eax, [esi+14h]
0x743DC9: mov     edx, [esi+8]
0x743DCC: mov     [eax+edx], cl
0x743DCF: add     [esi+14h], ebx
0x743DD2: movzx   ecx, byte ptr [edi+0Bh]
0x743DD6: mov     eax, [esi+14h]
0x743DD9: mov     edx, [esi+8]
0x743DDC: mov     [eax+edx], cl
0x743DDF: add     [esi+14h], ebx
0x743DE2: jmp     short loc_743DF8
0x743DE4: movzx   ecx, word ptr [edi+32h]
0x743DE8: mov     eax, esi
0x743DEA: call    sub_7439C0
0x743DEF: movzx   ecx, word ptr [edi+30h]
0x743DF3: call    sub_7439C0
0x743DF8: mov     eax, edi
0x743DFA: call    sub_7439F0
0x743DFF: mov     eax, [esi+18h]
0x743E02: test    eax, eax
0x743E04: jle     short loc_743E0B
0x743E06: neg     eax
0x743E08: mov     [esi+18h], eax
0x743E0B: pop     ebx
0x743E0C: xor     eax, eax
0x743E0E: cmp     [esi+14h], eax
0x743E11: pop     edi
0x743E12: pop     esi
0x743E13: setz    al
0x743E16: pop     ebp
0x743E17: retn
0x743E18: cmp     dword ptr [edi+10h], 0
0x743E1C: jnz     loc_743C45
0x743E22: pop     ebx
0x743E23: pop     edi
0x743E24: mov     dword ptr [esi+20h], 0FFFFFFFFh
0x743E2B: pop     esi
0x743E2C: xor     eax, eax
0x743E2E: pop     ebp
0x743E2F: retn
0x743E30: mov     edx, ds:0A82840h
0x743E36: mov     [edi+18h], edx
0x743E39: pop     edi
0x743E3A: pop     esi
0x743E3B: mov     eax, 0FFFFFFFEh
0x743E40: pop     ebp
0x743E41: retn
