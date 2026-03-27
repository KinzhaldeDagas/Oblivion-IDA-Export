0x767B40: sub     esp, 28h
0x767B43: push    ebx
0x767B44: push    esi
0x767B45: push    edi
0x767B46: mov     edi, [esp+34h+arg_0]
0x767B4A: xor     ebx, ebx
0x767B4C: cmp     edi, ebx
0x767B4E: mov     [esp+34h+var_24], ecx
0x767B52: jz      loc_767E8B
0x767B58: mov     esi, [esp+34h+a3]
0x767B5C: cmp     esi, ebx
0x767B5E: jz      loc_767E8B
0x767B64: mov     ecx, edi
0x767B66: call    sub_777F10
0x767B6B: cmp     byte ptr [esp+34h+arg_10], bl
0x767B6F: mov     byte ptr [esp+34h+arg_0], al
0x767B73: jnz     short loc_767B92
0x767B75: test    al, al
0x767B77: jz      short loc_767B92
0x767B79: mov     ax, [esi+2Eh]
0x767B7D: and     ax, 0F000h
0x767B81: cmp     ax, 4000h
0x767B85: jnz     short loc_767B92
0x767B87: pop     edi
0x767B88: pop     esi
0x767B89: mov     al, 1
0x767B8B: pop     ebx
0x767B8C: add     esp, 28h
0x767B8F: retn    14h
0x767B92: cmp     [esi+20h], ebx
0x767B95: movzx   eax, byte ptr [esi+2Ch]
0x767B99: setnz   dl
0x767B9C: and     eax, 3Fh
0x767B9F: xor     ecx, ecx
0x767BA1: cmp     [esi+24h], ebx
0x767BA4: jz      short loc_767BAB
0x767BA6: mov     ecx, 400000h
0x767BAB: test    dl, dl
0x767BAD: jz      short loc_767BB5
0x767BAF: or      ecx, offset loc_800000
0x767BB5: shl     eax, 18h
0x767BB8: or      eax, ecx
0x767BBA: mov     [edi], eax
0x767BBC: mov     edx, [esi]
0x767BBE: mov     eax, [edx+50h]
0x767BC1: mov     ecx, esi
0x767BC3: call    eax
0x767BC5: movzx   edx, word ptr [esi+8]
0x767BC9: movzx   ecx, ax
0x767BCC: mov     eax, [esi]
0x767BCE: mov     [esp+34h+var_8], ecx
0x767BD2: mov     [esp+34h+var_4], edx
0x767BD6: mov     edx, [eax+4]
0x767BD9: mov     ecx, esi
0x767BDB: mov     [esp+34h+var_28], ebx
0x767BDF: mov     [esp+34h+var_20], ebx
0x767BE3: call    edx
0x767BE5: cmp     eax, ebx
0x767BE7: jz      short loc_767BFE
0x767BE9: lea     esp, [esp+0]
0x767BF0: cmp     eax, offset dword_B3FD2C
0x767BF5: jz      short loc_767C5C
0x767BF7: mov     eax, [eax+4]
0x767BFA: cmp     eax, ebx
0x767BFC: jnz     short loc_767BF0
0x767BFE: push    esi
0x767BFF: push    offset dword_B3FD0C
0x767C04: call    NiRTTI__IsObjectOfRTTIType
0x767C09: add     esp, 8
0x767C0C: test    al, al
0x767C0E: jz      short loc_767C4B
0x767C10: mov     eax, [esi]
0x767C12: mov     edx, [eax+5Ch]
0x767C15: mov     ecx, esi
0x767C17: call    edx
0x767C19: movzx   ecx, word ptr [esi+40h]
0x767C1D: mov     edx, [esi+4Ch]
0x767C20: movzx   eax, ax
0x767C23: mov     [esp+34h+var_18], eax
0x767C27: mov     eax, [esi+48h]
0x767C2A: mov     [esp+34h+var_20], eax
0x767C2E: movzx   eax, word ptr [esi+44h]
0x767C32: mov     [esp+34h+var_28], edx
0x767C36: movzx   edx, ax
0x767C39: mov     [esp+34h+var_10], eax
0x767C3D: movzx   eax, cx
0x767C40: mov     [esp+34h+var_14], ecx
0x767C44: lea     ecx, [eax+edx*2]
0x767C47: mov     [esp+34h+Src], ecx
0x767C4B: mov     eax, [esp+34h+arg_C]
0x767C4F: cmp     eax, ebx
0x767C51: jz      short loc_767C93
0x767C53: mov     edx, [eax+20h]
0x767C56: mov     [esp+34h+a3], edx
0x767C5A: jmp     short loc_767C9B
0x767C5C: mov     eax, [esi]
0x767C5E: mov     edx, [eax+5Ch]
0x767C61: mov     ecx, esi
0x767C63: call    edx
0x767C65: mov     ecx, [esi+48h]
0x767C68: movzx   eax, ax
0x767C6B: mov     [esp+34h+var_18], eax
0x767C6F: movzx   eax, word ptr [esi+40h]
0x767C73: mov     [esp+34h+var_14], eax
0x767C77: movzx   eax, ax
0x767C7A: lea     edx, [eax+eax*2]
0x767C7D: mov     [esp+34h+var_28], ecx
0x767C81: mov     [esp+34h+var_20], ebx
0x767C85: mov     [esp+34h+var_10], 1
0x767C8D: mov     [esp+34h+Src], edx
0x767C91: jmp     short loc_767C4B
0x767C93: mov     [esp+34h+a3], 1
0x767C9B: mov     ax, [esi+2Eh]
0x767C9F: push    ebp
0x767CA0: mov     ebp, [esp+38h+arg_8]
0x767CA4: and     ax, 0FFFh
0x767CA8: test    ebp, ebp
0x767CAA: movzx   ebx, ax
0x767CAD: jz      short loc_767CE0
0x767CAF: mov     ecx, [ebp+18h]
0x767CB2: mov     edx, [esp+38h+var_24]
0x767CB6: mov     [esp+38h+var_C], ecx
0x767CBA: mov     ecx, [edx+8B0h]; this
0x767CC0: call    TESObjectREFR_GetNiNode
0x767CC5: cmp     [esp+38h+var_C], eax
0x767CC9: jz      short loc_767CE0
0x767CCB: mov     eax, [esp+38h+var_24]
0x767CCF: mov     ecx, [eax+8B0h]; this
0x767CD5: or      ebx, 3
0x767CD8: call    TESObjectREFR_GetNiNode
0x767CDD: mov     [ebp+18h], eax
0x767CE0: mov     cx, [esi+2Eh]
0x767CE4: and     cx, 0F000h
0x767CE9: cmp     cx, 8000h
0x767CEE: jz      short loc_767CF7
0x767CF0: cmp     byte ptr [esp+38h+arg_10], 0
0x767CF5: jz      short loc_767CFC
0x767CF7: mov     ebx, 0FFFh
0x767CFC: cmp     byte ptr [esp+38h+arg_0], 0
0x767D01: jz      short loc_767D16
0x767D03: mov     eax, [esp+38h+a3]
0x767D07: cmp     eax, [edi+1Ch]
0x767D0A: jz      short loc_767D4E
0x767D0C: push    eax; streamCount
0x767D0D: mov     ecx, edi; this
0x767D0F: call    sub_777F70
0x767D14: jmp     short loc_767D49
0x767D16: mov     ebp, [edi+4]
0x767D19: xor     ebx, ebx
0x767D1B: cmp     [esp+38h+a3], ebx
0x767D1F: jbe     short loc_767D36
0x767D21: mov     edx, [ebp+0]
0x767D24: mov     eax, [edx+1Ch]
0x767D27: push    ebx
0x767D28: push    edi
0x767D29: mov     ecx, ebp
0x767D2B: call    eax
0x767D2D: add     ebx, 1
0x767D30: cmp     ebx, [esp+38h+a3]
0x767D34: jb      short loc_767D21
0x767D36: mov     ecx, [esp+38h+a3]
0x767D3A: push    ecx; streamCount
0x767D3B: mov     ecx, edi; this
0x767D3D: call    sub_777F70
0x767D42: mov     dword ptr [edi+34h], 0
0x767D49: mov     ebx, 0FFFh
0x767D4E: movzx   edx, word ptr [esp+38h+var_8]
0x767D53: movzx   eax, word ptr [esp+38h+var_4]
0x767D58: movzx   ecx, word ptr [esp+38h+var_18]
0x767D5D: mov     [edi+14h], edx
0x767D60: movzx   edx, word ptr [esp+38h+var_14]
0x767D65: mov     [edi+18h], eax
0x767D68: mov     eax, [esp+38h+var_28]
0x767D6C: mov     [edi+4Ch], eax
0x767D6F: mov     [edi+40h], edx
0x767D72: movzx   edx, word ptr [esp+38h+var_10]
0x767D77: movzx   eax, bx
0x767D7A: test    eax, 0FFFFFFEFh
0x767D7F: mov     [edi+3Ch], ecx
0x767D82: mov     ecx, [esp+38h+var_20]
0x767D86: mov     [edi+48h], ecx
0x767D89: mov     [edi+44h], edx
0x767D8C: jz      short loc_767E08
0x767D8E: xor     eax, eax
0x767D90: cmp     [esp+38h+a3], eax
0x767D94: mov     [esp+38h+arg_10], eax
0x767D98: jbe     short loc_767E08
0x767D9A: jmp     short loc_767DA4
0x767D9C: align 10h
0x767DA0: mov     eax, [esp+38h+arg_10]
0x767DA4: cmp     eax, [edi+1Ch]
0x767DA7: jnb     short loc_767DB1
0x767DA9: mov     ecx, [edi+24h]
0x767DAC: mov     ebp, [ecx+eax*4]
0x767DAF: jmp     short loc_767DB3
0x767DB1: xor     ebp, ebp
0x767DB3: mov     ecx, [esp+38h+arg_C]
0x767DB7: test    ecx, ecx
0x767DB9: jz      short loc_767DD3
0x767DBB: mov     edx, [ecx]
0x767DBD: mov     edx, [edx+6Ch]
0x767DC0: push    0
0x767DC2: push    eax
0x767DC3: mov     eax, [esp+40h+arg_8]
0x767DC7: push    ebp
0x767DC8: push    ebx
0x767DC9: push    0
0x767DCB: push    eax
0x767DCC: push    esi
0x767DCD: call    edx
0x767DCF: test    eax, eax
0x767DD1: jnz     short loc_767DF7
0x767DD3: cmp     [esp+38h+a3], 1
0x767DD8: jnz     short loc_767E51
0x767DDA: mov     eax, [esp+38h+arg_8]
0x767DDE: mov     ecx, [esp+38h+var_24]
0x767DE2: mov     ecx, [ecx+8B0h]
0x767DE8: push    0
0x767DEA: push    ebp
0x767DEB: push    ebx
0x767DEC: push    eax
0x767DED: push    esi
0x767DEE: call    sub_776E90
0x767DF3: test    eax, eax
0x767DF5: jz      short loc_767E51
0x767DF7: mov     eax, [esp+38h+arg_10]
0x767DFB: add     eax, 1
0x767DFE: cmp     eax, [esp+38h+a3]
0x767E02: mov     [esp+38h+arg_10], eax
0x767E06: jb      short loc_767DA0
0x767E08: cmp     [esp+38h+var_28], 0
0x767E0D: jz      short loc_767E79
0x767E0F: test    bl, 30h
0x767E12: jz      short loc_767E79
0x767E14: mov     al, [edi+10h]
0x767E17: mov     ebp, [edi+30h]
0x767E1A: mov     edx, [edi+2Ch]
0x767E1D: mov     ecx, [esp+38h+var_28]
0x767E21: neg     al
0x767E23: mov     [esp+38h+arg_10], edx
0x767E27: mov     edx, [esp+38h+var_24]
0x767E2B: sbb     eax, eax
0x767E2D: and     eax, 10h
0x767E30: push    eax; Dst
0x767E31: push    1; int
0x767E33: lea     eax, [esp+40h+arg_10]
0x767E37: push    eax; int
0x767E38: mov     eax, [esp+44h+Src]
0x767E3C: push    ebp; int
0x767E3D: push    eax; int
0x767E3E: push    eax; Src
0x767E3F: push    ecx; int
0x767E40: mov     ecx, [edx+8B4h]
0x767E46: call    sub_7781F0
0x767E4B: mov     ebx, eax
0x767E4D: test    ebx, ebx
0x767E4F: jnz     short loc_767E5D
0x767E51: pop     ebp
0x767E52: pop     edi
0x767E53: pop     esi
0x767E54: xor     al, al
0x767E56: pop     ebx
0x767E57: add     esp, 28h
0x767E5A: retn    14h
0x767E5D: cmp     ebp, ebx
0x767E5F: jz      short loc_767E79
0x767E61: mov     ecx, edi
0x767E63: call    sub_777F40
0x767E68: mov     eax, [esp+38h+Src]
0x767E6C: mov     ecx, [esp+38h+arg_10]
0x767E70: mov     [edi+30h], ebx
0x767E73: mov     [edi+28h], eax
0x767E76: mov     [edi+2Ch], ecx
0x767E79: and     word ptr [esi+2Eh], 0F000h
0x767E7F: pop     ebp
0x767E80: pop     edi
0x767E81: pop     esi
0x767E82: mov     al, 1
0x767E84: pop     ebx
0x767E85: add     esp, 28h
0x767E88: retn    14h
0x767E8B: pop     edi
0x767E8C: pop     esi
0x767E8D: xor     al, al
0x767E8F: pop     ebx
0x767E90: add     esp, 28h
0x767E93: retn    14h
