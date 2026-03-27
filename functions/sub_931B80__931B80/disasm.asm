0x931B80: sub     esp, 48h
0x931B83: mov     ecx, [esp+48h+arg_0]
0x931B87: mov     edx, ds:0BA9DE4h
0x931B8D: xor     eax, eax
0x931B8F: push    ebx
0x931B90: mov     ebx, [esp+4Ch+arg_C]
0x931B94: mov     [ebx+8], eax
0x931B97: mov     [esp+4Ch+var_10], eax
0x931B9B: mov     [esp+4Ch+var_C], eax
0x931B9F: mov     eax, large fs:2Ch
0x931BA5: push    ebp
0x931BA6: mov     ebp, [eax+edx*4]
0x931BA9: push    esi
0x931BAA: mov     esi, [ecx+8]
0x931BAD: mov     ecx, [ebp+19Ch]
0x931BB3: mov     [esp+54h+var_8], 80000000h
0x931BBB: mov     edx, [ecx+20h]
0x931BBE: lea     eax, [esi+esi+10h]
0x931BC2: and     eax, 0FFFFFFF0h
0x931BC5: push    edi
0x931BC6: lea     edi, [edx+eax]
0x931BC9: cmp     edi, [ecx+2Ch]
0x931BCC: mov     [esp+58h+var_30], ebp
0x931BD0: ja      short loc_931BD9
0x931BD2: mov     [ecx+20h], edi
0x931BD5: mov     eax, edx
0x931BD7: jmp     short loc_931BDF
0x931BD9: mov     edx, [ecx]
0x931BDB: push    eax
0x931BDC: call    dword ptr [edx+0Ch]
0x931BDF: mov     [esp+58h+var_10], eax
0x931BE3: mov     [esp+58h+var_4], eax
0x931BE7: lea     eax, [esp+58h+var_10]
0x931BEB: push    eax
0x931BEC: push    ebx
0x931BED: push    ecx
0x931BEE: mov     ecx, [esp+64h+arg_0]
0x931BF2: mov     eax, esp
0x931BF4: or      esi, 80000000h
0x931BFA: mov     [esp+64h+var_8], esi
0x931BFE: push    ecx
0x931BFF: mov     byte ptr [eax], 1
0x931C02: call    sub_931140
0x931C07: mov     edx, [esp+68h+arg_4]
0x931C0B: mov     esi, [edx+8]
0x931C0E: mov     ecx, [ebp+19Ch]
0x931C14: xor     eax, eax
0x931C16: mov     [esp+68h+var_20], eax
0x931C1A: mov     [esp+68h+var_1C], eax
0x931C1E: mov     [esp+68h+var_18], 80000000h
0x931C26: mov     edx, [ecx+20h]
0x931C29: lea     eax, [esi+esi+10h]
0x931C2D: and     eax, 0FFFFFFF0h
0x931C30: lea     edi, [edx+eax]
0x931C33: add     esp, 10h
0x931C36: cmp     edi, [ecx+2Ch]
0x931C39: ja      short loc_931C42
0x931C3B: mov     [ecx+20h], edi
0x931C3E: mov     eax, edx
0x931C40: jmp     short loc_931C48
0x931C42: mov     edx, [ecx]
0x931C44: push    eax
0x931C45: call    dword ptr [edx+0Ch]
0x931C48: mov     [esp+58h+var_20], eax
0x931C4C: mov     [esp+58h+var_14], eax
0x931C50: lea     eax, [esp+58h+var_20]
0x931C54: push    eax
0x931C55: push    ebx
0x931C56: push    ecx
0x931C57: mov     ecx, [esp+64h+arg_4]
0x931C5B: mov     eax, esp
0x931C5D: or      esi, 80000000h
0x931C63: mov     [esp+64h+var_18], esi
0x931C67: push    ecx
0x931C68: mov     byte ptr [eax], 0
0x931C6B: call    sub_931140
0x931C70: mov     edi, [esp+68h+arg_8]
0x931C74: mov     eax, [edi+4]
0x931C77: mov     edx, [ebx+8]
0x931C7A: lea     eax, [eax+eax*2]
0x931C7D: add     eax, edx
0x931C7F: mov     edx, [ebx+0Ch]
0x931C82: lea     esi, [ebx+4]
0x931C85: and     edx, 3FFFFFFFh
0x931C8B: add     esp, 10h
0x931C8E: cmp     edx, eax
0x931C90: jge     short loc_931C9E
0x931C92: push    8
0x931C94: push    eax
0x931C95: push    esi
0x931C96: call    sub_8A6E40
0x931C9B: add     esp, 0Ch
0x931C9E: mov     ecx, [edi+4]
0x931CA1: xor     eax, eax
0x931CA3: cmp     ecx, eax
0x931CA5: mov     [esp+58h+var_3C], eax
0x931CA9: jle     loc_931D54
0x931CAF: mov     [esp+58h+arg_4], eax
0x931CB3: mov     eax, [edi]
0x931CB5: mov     ecx, [esp+58h+arg_4]
0x931CB9: mov     ebp, [esp+58h+arg_0]
0x931CBD: add     eax, ecx
0x931CBF: mov     ecx, [eax]
0x931CC1: mov     dx, [ecx]
0x931CC4: mov     [eax+8], dx
0x931CC8: movzx   edx, word ptr [ecx+4]
0x931CCC: mov     ebp, [ebp+4]
0x931CCF: mov     dx, [ebp+edx*8+0]
0x931CD4: mov     [eax+0Ch], dx
0x931CD8: mov     edx, [eax+4]
0x931CDB: mov     bp, [edx]
0x931CDE: mov     [eax+0Eh], bp
0x931CE2: mov     ebp, [esp+58h+arg_0]
0x931CE6: sub     ecx, [ebp+4]
0x931CE9: movzx   edx, word ptr [edx+2]
0x931CED: mov     ebp, [esp+58h+var_10]
0x931CF1: sar     ecx, 3
0x931CF4: movzx   ecx, word ptr [ebp+ecx*2+0]
0x931CF9: shl     edx, 3
0x931CFC: sar     edx, 3
0x931CFF: cmp     ecx, 0FFFFh
0x931D05: jnz     short loc_931D0B
0x931D07: xor     ecx, ecx
0x931D09: jmp     short loc_931D11
0x931D0B: mov     ebp, [esi]
0x931D0D: lea     ecx, [ebp+ecx*8+0]
0x931D11: mov     [eax], ecx
0x931D13: mov     ecx, [esp+58h+var_20]
0x931D17: movzx   ecx, word ptr [ecx+edx*2]
0x931D1B: cmp     ecx, 0FFFFh
0x931D21: jnz     short loc_931D27
0x931D23: xor     ecx, ecx
0x931D25: jmp     short loc_931D2C
0x931D27: mov     edx, [esi]
0x931D29: lea     ecx, [edx+ecx*8]
0x931D2C: mov     edx, [esp+58h+arg_4]
0x931D30: mov     [eax+4], ecx
0x931D33: mov     eax, [esp+58h+var_3C]
0x931D37: mov     ecx, [edi+4]
0x931D3A: inc     eax
0x931D3B: add     edx, 10h
0x931D3E: cmp     eax, ecx
0x931D40: mov     [esp+58h+var_3C], eax
0x931D44: mov     [esp+58h+arg_4], edx
0x931D48: jl      loc_931CB3
0x931D4E: mov     ebp, [esp+58h+var_30]
0x931D52: xor     eax, eax
0x931D54: mov     ecx, [esi]
0x931D56: mov     edx, [edi]
0x931D58: mov     [esp+58h+var_48], eax
0x931D5C: mov     eax, [edi+4]
0x931D5F: dec     eax
0x931D60: mov     [esp+58h+arg_0], ecx
0x931D64: mov     ecx, [ebx+8]
0x931D67: mov     [esp+58h+var_44], 0FFFFh
0x931D6F: mov     [esp+58h+var_24], ecx
0x931D73: js      loc_931F3B
0x931D79: mov     ecx, eax
0x931D7B: shl     ecx, 4
0x931D7E: inc     eax
0x931D7F: mov     [esp+58h+var_3C], ecx
0x931D83: mov     dword ptr [esp+58h+var_34], eax
0x931D87: jmp     short loc_931D91
0x931D89: mov     edi, [esp+58h+arg_8]
0x931D8D: mov     ecx, [esp+58h+var_3C]
0x931D91: mov     eax, [edi]
0x931D93: add     eax, ecx
0x931D95: mov     ecx, [ebx+8]
0x931D98: mov     [esp+58h+arg_4], ecx
0x931D9C: mov     ecx, [esi+4]
0x931D9F: lea     edi, [ecx+1]
0x931DA2: mov     [esi+4], edi
0x931DA5: mov     edi, [esi]
0x931DA7: lea     edi, [edi+ecx*8]
0x931DAA: mov     ecx, [ebx+8]
0x931DAD: mov     [esp+58h+var_40], ecx
0x931DB1: mov     ecx, [esi+4]
0x931DB4: lea     ebp, [ecx+1]
0x931DB7: mov     [esi+4], ebp
0x931DBA: mov     ebp, [esi]
0x931DBC: lea     ebp, [ebp+ecx*8+0]
0x931DC0: mov     ecx, [eax]
0x931DC2: cmp     ecx, [edx]
0x931DC4: jnz     loc_931E72
0x931DCA: mov     ecx, [eax+4]
0x931DCD: cmp     word ptr [ecx+6], 2
0x931DD2: setz    dl
0x931DD5: test    dl, dl
0x931DD7: mov     byte ptr [esp+58h+var_2C], dl
0x931DDB: jz      short loc_931DE3
0x931DDD: movzx   edx, word ptr [ecx+2]
0x931DE1: jmp     short loc_931DE6
0x931DE3: mov     edx, [ebx+8]
0x931DE6: mov     [esp+58h+var_38], edx
0x931DEA: mov     dl, byte ptr [esp+58h+var_2C]
0x931DEE: test    dl, dl
0x931DF0: jz      short loc_931DFC
0x931DF2: movzx   ecx, word ptr [ecx+2]
0x931DF6: mov     edx, [esp+58h+arg_0]
0x931DFA: jmp     short loc_931E07
0x931DFC: mov     ecx, [esi+4]
0x931DFF: lea     edx, [ecx+1]
0x931E02: mov     [esi+4], edx
0x931E05: mov     edx, [esi]
0x931E07: lea     ecx, [edx+ecx*8]
0x931E0A: mov     edx, [eax+4]
0x931E0D: mov     dx, [edx]
0x931E10: mov     [edi], dx
0x931E13: mov     dx, word ptr [esp+58h+var_40]
0x931E18: mov     [edi+4], dx
0x931E1C: mov     dx, word ptr [esp+58h+var_44]
0x931E21: mov     [edi+2], dx
0x931E25: mov     edx, [esp+58h+var_48]
0x931E29: test    edx, edx
0x931E2B: jz      short loc_931E36
0x931E2D: mov     di, word ptr [esp+58h+arg_4]
0x931E32: mov     [edx+2], di
0x931E36: mov     dx, [eax+0Eh]
0x931E3A: mov     edi, [esp+58h+arg_0]
0x931E3E: mov     [ecx], dx
0x931E41: mov     dx, word ptr [esp+58h+arg_4]
0x931E46: mov     [ecx+4], dx
0x931E4A: mov     edx, [eax+4]
0x931E4D: sub     edx, edi
0x931E4F: sar     edx, 3
0x931E52: mov     [ecx+2], dx
0x931E56: mov     edx, [eax+4]
0x931E59: mov     ecx, [esp+58h+var_38]
0x931E5D: mov     [edx+2], cx
0x931E61: mov     dx, [eax+8]
0x931E65: mov     [ebp+0], dx
0x931E69: mov     [ebp+4], cx
0x931E6D: jmp     loc_931F0B
0x931E72: cmp     word ptr [ecx+6], 2
0x931E77: setz    dl
0x931E7A: test    dl, dl
0x931E7C: mov     byte ptr [esp+58h+var_28], dl
0x931E80: jz      short loc_931E88
0x931E82: movzx   edx, word ptr [ecx+2]
0x931E86: jmp     short loc_931E8B
0x931E88: mov     edx, [ebx+8]
0x931E8B: mov     bl, byte ptr [esp+58h+var_28]
0x931E8F: test    bl, bl
0x931E91: jz      short loc_931E9D
0x931E93: movzx   ecx, word ptr [ecx+2]
0x931E97: mov     ebx, [esp+58h+arg_0]
0x931E9B: jmp     short loc_931EA8
0x931E9D: mov     ecx, [esi+4]
0x931EA0: lea     ebx, [ecx+1]
0x931EA3: mov     [esi+4], ebx
0x931EA6: mov     ebx, [esi]
0x931EA8: lea     ecx, [ebx+ecx*8]
0x931EAB: mov     bx, [eax+0Eh]
0x931EAF: mov     [edi], bx
0x931EB2: mov     bx, word ptr [esp+58h+var_44]
0x931EB7: mov     [edi+4], dx
0x931EBB: mov     [edi+2], bx
0x931EBF: mov     edi, [esp+58h+var_48]
0x931EC3: test    edi, edi
0x931EC5: jz      short loc_931ED0
0x931EC7: mov     bx, word ptr [esp+58h+arg_4]
0x931ECC: mov     [edi+2], bx
0x931ED0: mov     di, [eax+0Ch]
0x931ED4: mov     ebx, [esp+58h+arg_0]
0x931ED8: mov     [ecx], di
0x931EDB: mov     di, word ptr [esp+58h+var_40]
0x931EE0: mov     [ecx+4], di
0x931EE4: mov     edi, [eax]
0x931EE6: sub     edi, ebx
0x931EE8: mov     ebx, [esp+58h+arg_C]
0x931EEC: sar     edi, 3
0x931EEF: mov     [ecx+2], di
0x931EF3: mov     ecx, [eax]
0x931EF5: mov     [ecx+2], dx
0x931EF9: mov     edx, [eax]
0x931EFB: mov     cx, [edx]
0x931EFE: mov     dx, word ptr [esp+58h+arg_4]
0x931F03: mov     [ebp+0], cx
0x931F07: mov     [ebp+4], dx
0x931F0B: mov     ecx, [esp+58h+var_40]
0x931F0F: mov     [esp+58h+var_44], ecx
0x931F13: mov     ecx, [esp+58h+var_3C]
0x931F17: mov     edx, eax
0x931F19: mov     eax, dword ptr [esp+58h+var_34]
0x931F1D: sub     ecx, 10h
0x931F20: dec     eax
0x931F21: mov     [esp+58h+var_48], ebp
0x931F25: mov     [esp+58h+var_3C], ecx
0x931F29: mov     dword ptr [esp+58h+var_34], eax
0x931F2D: jnz     loc_931D89
0x931F33: mov     ecx, [esp+58h+var_24]
0x931F37: mov     ebp, [esp+58h+var_30]
0x931F3B: mov     edx, [esp+58h+var_48]
0x931F3F: mov     ax, word ptr [esp+58h+var_44]
0x931F44: mov     [edx+2], cx
0x931F48: mov     edx, [esp+58h+arg_0]
0x931F4C: mov     [edx+ecx*8+2], ax
0x931F51: mov     ecx, [ebp+19Ch]
0x931F57: mov     eax, [esp+58h+var_14]
0x931F5B: cmp     eax, [ecx+28h]
0x931F5E: mov     [ecx+20h], eax
0x931F61: jnz     short loc_931F69
0x931F63: mov     edx, [ecx]
0x931F65: push    eax
0x931F66: call    dword ptr [edx+10h]
0x931F69: mov     eax, [esp+58h+var_18]
0x931F6D: test    eax, eax
0x931F6F: js      short loc_931F8B
0x931F71: mov     ecx, [ebp+19Ch]
0x931F77: and     eax, 3FFFFFFFh
0x931F7C: push    14h
0x931F7E: shl     eax, 1
0x931F80: push    eax
0x931F81: mov     eax, [esp+60h+var_20]
0x931F85: push    eax
0x931F86: call    sub_8A75D0
0x931F8B: mov     ecx, [ebp+19Ch]
0x931F91: mov     eax, [esp+58h+var_4]
0x931F95: cmp     eax, [ecx+28h]
0x931F98: mov     [ecx+20h], eax
0x931F9B: jnz     short loc_931FA3
0x931F9D: mov     edx, [ecx]
0x931F9F: push    eax
0x931FA0: call    dword ptr [edx+10h]
0x931FA3: mov     eax, [esp+58h+var_8]
0x931FA7: test    eax, eax
0x931FA9: js      short loc_931FC5
0x931FAB: mov     ecx, [ebp+19Ch]
0x931FB1: and     eax, 3FFFFFFFh
0x931FB6: push    14h
0x931FB8: shl     eax, 1
0x931FBA: push    eax
0x931FBB: mov     eax, [esp+60h+var_10]
0x931FBF: push    eax
0x931FC0: call    sub_8A75D0
0x931FC5: pop     edi
0x931FC6: pop     esi
0x931FC7: pop     ebp
0x931FC8: pop     ebx
0x931FC9: add     esp, 48h
0x931FCC: retn
