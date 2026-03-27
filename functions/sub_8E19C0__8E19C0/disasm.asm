0x8E19C0: sub     esp, 2Ch
0x8E19C3: mov     eax, [esp+2Ch+arg_0]
0x8E19C7: mov     edx, large fs:2Ch
0x8E19CE: push    ebx
0x8E19CF: push    ebp
0x8E19D0: mov     ebp, ecx
0x8E19D2: mov     ecx, [ebp+40h]
0x8E19D5: mov     ebx, [ebp+44h]
0x8E19D8: push    esi
0x8E19D9: mov     esi, [eax]
0x8E19DB: lea     eax, [ebp+40h]
0x8E19DE: mov     [esp+38h+var_28], esi
0x8E19E2: shl     esi, 4
0x8E19E5: mov     [esp+38h+var_24], eax
0x8E19E9: add     esi, ecx
0x8E19EB: mov     ecx, ds:0BA9DE4h
0x8E19F1: mov     eax, [edx+ecx*4]
0x8E19F4: mov     ecx, [eax+19Ch]
0x8E19FA: mov     edx, [ecx+20h]
0x8E19FD: mov     [esp+38h+var_4], eax
0x8E1A01: mov     eax, ebx
0x8E1A03: shr     eax, 5
0x8E1A06: lea     eax, ds:30h[eax*4]
0x8E1A0D: and     eax, 0FFFFFFF0h
0x8E1A10: push    edi
0x8E1A11: lea     edi, [edx+eax]
0x8E1A14: cmp     edi, [ecx+2Ch]
0x8E1A17: mov     [esp+3Ch+var_C], ebp
0x8E1A1B: mov     [esp+3Ch+var_20], ebx
0x8E1A1F: ja      short loc_8E1A2A
0x8E1A21: mov     [ecx+20h], edi
0x8E1A24: mov     [esp+3Ch+var_18], edx
0x8E1A28: jmp     short loc_8E1A34
0x8E1A2A: mov     edx, [ecx]
0x8E1A2C: push    eax
0x8E1A2D: call    dword ptr [edx+0Ch]
0x8E1A30: mov     [esp+3Ch+var_18], eax
0x8E1A34: movzx   ecx, word ptr [esi+8]
0x8E1A38: mov     edi, [esp+3Ch+var_18]
0x8E1A3C: mov     eax, [esp+3Ch+var_28]
0x8E1A40: mov     edx, [ebp+4Ch]
0x8E1A43: push    edi
0x8E1A44: push    eax
0x8E1A45: movzx   eax, word ptr [edx+ecx*4]
0x8E1A49: push    esi
0x8E1A4A: push    eax
0x8E1A4B: push    ebx
0x8E1A4C: mov     ecx, ebp
0x8E1A4E: call    sub_8E0E90
0x8E1A53: mov     edx, [esp+3Ch+var_24]
0x8E1A57: mov     eax, [edx]
0x8E1A59: mov     edx, [ebp+44h]
0x8E1A5C: sar     edx, 5
0x8E1A5F: lea     ebx, [edi+edx*4+4]
0x8E1A63: cmp     edi, ebx
0x8E1A65: mov     ecx, edi
0x8E1A67: mov     [esp+3Ch+var_10], ecx
0x8E1A6B: mov     [esp+3Ch+var_14], eax
0x8E1A6F: mov     [esp+3Ch+var_8], ebx
0x8E1A73: jnb     loc_8E1B90
0x8E1A79: lea     esp, [esp+0]
0x8E1A80: mov     edx, [ecx]
0x8E1A82: test    edx, edx
0x8E1A84: mov     [esp+3Ch+var_1C], eax
0x8E1A88: mov     [esp+3Ch+var_2C], edx
0x8E1A8C: jz      loc_8E1B74
0x8E1A92: test    dl, dl
0x8E1A94: jnz     short loc_8E1AA3
0x8E1A96: add     eax, 80h ; '€'
0x8E1A9B: shr     edx, 8
0x8E1A9E: jmp     loc_8E1B5C
0x8E1AA3: test    dl, 1
0x8E1AA6: jz      loc_8E1B4F
0x8E1AAC: mov     edi, [eax]
0x8E1AAE: mov     ecx, [esi+4]
0x8E1AB1: mov     ebx, [esi]
0x8E1AB3: sub     ecx, edi
0x8E1AB5: mov     edi, [eax+4]
0x8E1AB8: sub     edi, ebx
0x8E1ABA: or      ecx, edi
0x8E1ABC: test    ecx, 80008000h
0x8E1AC2: jnz     loc_8E1B4F
0x8E1AC8: mov     ebx, [eax+0Ch]
0x8E1ACB: test    bl, 1
0x8E1ACE: jnz     short loc_8E1B08
0x8E1AD0: mov     edi, [esp+3Ch+arg_4]
0x8E1AD4: mov     edx, [edi+8]
0x8E1AD7: mov     eax, [edi+4]
0x8E1ADA: and     edx, 3FFFFFFFh
0x8E1AE0: cmp     eax, edx
0x8E1AE2: jnz     short loc_8E1AEF
0x8E1AE4: push    8
0x8E1AE6: push    edi
0x8E1AE7: call    sub_8A6EE0
0x8E1AEC: add     esp, 8
0x8E1AEF: mov     eax, [edi+4]
0x8E1AF2: mov     ecx, [edi]
0x8E1AF4: mov     edx, [esp+3Ch+arg_0]
0x8E1AF8: mov     [ecx+eax*8], edx
0x8E1AFB: mov     edx, [esp+3Ch+var_2C]
0x8E1AFF: mov     [ecx+eax*8+4], ebx
0x8E1B03: inc     dword ptr [edi+4]
0x8E1B06: jmp     short loc_8E1B4F
0x8E1B08: mov     eax, [ebp+78h]
0x8E1B0B: and     ebx, 0FFFFFFFEh
0x8E1B0E: mov     ecx, [ebx+eax+8]
0x8E1B12: add     ebx, eax
0x8E1B14: xor     eax, eax
0x8E1B16: test    ecx, ecx
0x8E1B18: jle     short loc_8E1B3A
0x8E1B1A: mov     edi, [ebx+4]
0x8E1B1D: lea     ecx, [ecx+0]
0x8E1B20: mov     dx, word ptr [esp+3Ch+var_28]
0x8E1B25: cmp     [edi], dx
0x8E1B28: jz      loc_8E1C8A
0x8E1B2E: inc     eax
0x8E1B2F: add     edi, 2
0x8E1B32: cmp     eax, ecx
0x8E1B34: jl      short loc_8E1B20
0x8E1B36: mov     edx, [esp+3Ch+var_2C]
0x8E1B3A: or      eax, 0FFFFFFFFh
0x8E1B3D: mov     ecx, [ebx+8]
0x8E1B40: dec     ecx
0x8E1B41: mov     [ebx+8], ecx
0x8E1B44: mov     ebx, [ebx+4]
0x8E1B47: mov     cx, [ebx+ecx*2]
0x8E1B4B: mov     [ebx+eax*2], cx
0x8E1B4F: mov     eax, [esp+3Ch+var_1C]
0x8E1B53: mov     edi, [esp+3Ch+var_18]
0x8E1B57: add     eax, 10h
0x8E1B5A: shr     edx, 1
0x8E1B5C: test    edx, edx
0x8E1B5E: mov     [esp+3Ch+var_1C], eax
0x8E1B62: mov     [esp+3Ch+var_2C], edx
0x8E1B66: jnz     loc_8E1A92
0x8E1B6C: mov     ebx, [esp+3Ch+var_8]
0x8E1B70: mov     ecx, [esp+3Ch+var_10]
0x8E1B74: mov     eax, [esp+3Ch+var_14]
0x8E1B78: add     ecx, 4
0x8E1B7B: add     eax, 200h
0x8E1B80: cmp     ecx, ebx
0x8E1B82: mov     [esp+3Ch+var_14], eax
0x8E1B86: mov     [esp+3Ch+var_10], ecx
0x8E1B8A: jb      loc_8E1A80
0x8E1B90: mov     edx, [esp+3Ch+var_4]
0x8E1B94: mov     ecx, [edx+19Ch]
0x8E1B9A: cmp     edi, [ecx+28h]
0x8E1B9D: mov     [ecx+20h], edi
0x8E1BA0: jnz     short loc_8E1BA8
0x8E1BA2: mov     eax, [ecx]
0x8E1BA4: push    edi
0x8E1BA5: call    dword ptr [eax+10h]
0x8E1BA8: mov     ecx, [esp+3Ch+var_24]
0x8E1BAC: mov     edx, [ecx]
0x8E1BAE: movzx   eax, word ptr [esi+0Ah]
0x8E1BB2: movzx   ecx, word ptr [esi+8]
0x8E1BB6: push    eax
0x8E1BB7: push    ecx
0x8E1BB8: lea     ecx, [ebp+4Ch]
0x8E1BBB: mov     [esp+44h+arg_0], edx
0x8E1BBF: call    sub_8E0E30
0x8E1BC4: movzx   edx, word ptr [esi+4]
0x8E1BC8: movzx   eax, word ptr [esi]
0x8E1BCB: push    edx
0x8E1BCC: lea     edi, [ebp+58h]
0x8E1BCF: push    eax
0x8E1BD0: mov     ecx, edi
0x8E1BD2: call    sub_8E0E30
0x8E1BD7: movzx   ecx, word ptr [esi+6]
0x8E1BDB: movzx   edx, word ptr [esi+2]
0x8E1BDF: push    ecx
0x8E1BE0: lea     ebx, [ebp+64h]
0x8E1BE3: push    edx
0x8E1BE4: mov     ecx, ebx
0x8E1BE6: call    sub_8E0E30
0x8E1BEB: mov     eax, [esp+3Ch+var_20]
0x8E1BEF: mov     ecx, [esp+3Ch+arg_0]
0x8E1BF3: push    esi
0x8E1BF4: push    eax
0x8E1BF5: push    ecx
0x8E1BF6: mov     ecx, ebp
0x8E1BF8: call    sub_8E0B30
0x8E1BFD: mov     eax, [esp+3Ch+var_20]
0x8E1C01: mov     ecx, [esp+3Ch+var_28]
0x8E1C05: lea     edx, [eax-1]
0x8E1C08: cmp     ecx, edx
0x8E1C0A: jnb     loc_8E1D54
0x8E1C10: mov     ecx, [esp+3Ch+var_24]
0x8E1C14: mov     edx, [ecx]
0x8E1C16: shl     eax, 4
0x8E1C19: lea     eax, [eax+edx-10h]
0x8E1C1D: mov     edx, [eax]
0x8E1C1F: mov     ecx, esi
0x8E1C21: mov     [ecx], edx
0x8E1C23: mov     edx, [eax+4]
0x8E1C26: mov     [ecx+4], edx
0x8E1C29: mov     edx, [eax+8]
0x8E1C2C: mov     [ecx+8], edx
0x8E1C2F: mov     eax, [eax+0Ch]
0x8E1C32: mov     [ecx+0Ch], eax
0x8E1C35: movzx   edx, word ptr [esi+8]
0x8E1C39: mov     eax, [ebp+4Ch]
0x8E1C3C: mov     ecx, [esp+3Ch+var_28]
0x8E1C40: mov     [eax+edx*4+2], cx
0x8E1C45: movzx   edx, word ptr [esi+0Ah]
0x8E1C49: mov     eax, [ebp+4Ch]
0x8E1C4C: mov     [eax+edx*4+2], cx
0x8E1C51: mov     eax, [esi+0Ch]
0x8E1C54: test    al, 1
0x8E1C56: jnz     short loc_8E1C93
0x8E1C58: movzx   edx, word ptr [esi]
0x8E1C5B: mov     eax, [edi]
0x8E1C5D: mov     [eax+edx*4+2], cx
0x8E1C62: movzx   edx, word ptr [esi+4]
0x8E1C66: mov     eax, [edi]
0x8E1C68: mov     [eax+edx*4+2], cx
0x8E1C6D: movzx   edx, word ptr [esi+2]
0x8E1C71: mov     eax, [ebx]
0x8E1C73: mov     [eax+edx*4+2], cx
0x8E1C78: movzx   edx, word ptr [esi+6]
0x8E1C7C: mov     eax, [ebx]
0x8E1C7E: mov     [eax+edx*4+2], cx
0x8E1C83: mov     edx, [esi+0Ch]
0x8E1C86: mov     [edx], ecx
0x8E1C88: jmp     short loc_8E1C9D
0x8E1C8A: mov     edx, [esp+3Ch+var_2C]
0x8E1C8E: jmp     loc_8E1B3D
0x8E1C93: mov     edx, [ebp+78h]
0x8E1C96: and     eax, 0FFFFFFFEh
0x8E1C99: mov     [eax+edx], cx
0x8E1C9D: mov     eax, [ebp+70h]
0x8E1CA0: test    eax, eax
0x8E1CA2: jz      loc_8E1D54
0x8E1CA8: test    byte ptr [esi+0Ch], 1
0x8E1CAC: jnz     loc_8E1D54
0x8E1CB2: mov     dx, [esi+8]
0x8E1CB6: mov     edi, [ebp+4Ch]
0x8E1CB9: mov     ax, 10h
0x8E1CBD: sub     ax, [ebp+74h]
0x8E1CC1: movzx   ecx, dx
0x8E1CC4: movzx   ebx, ax
0x8E1CC7: movzx   eax, word ptr [edi+ecx*4]
0x8E1CCB: mov     cl, bl
0x8E1CCD: shr     eax, cl
0x8E1CCF: test    eax, eax
0x8E1CD1: jle     short loc_8E1CF6
0x8E1CD3: mov     ebp, [ebp+78h]
0x8E1CD6: mov     ecx, eax
0x8E1CD8: shl     ecx, 4
0x8E1CDB: movzx   ecx, word ptr [ecx+ebp-10h]
0x8E1CE0: mov     ebp, [esp+3Ch+var_24]
0x8E1CE4: mov     ebp, [ebp+0]
0x8E1CE7: shl     ecx, 4
0x8E1CEA: cmp     [ecx+ebp+0Ah], dx
0x8E1CEF: mov     ebp, [esp+3Ch+var_C]
0x8E1CF3: jbe     short loc_8E1CF6
0x8E1CF5: dec     eax
0x8E1CF6: movzx   edx, word ptr [esi+0Ah]
0x8E1CFA: movzx   edx, word ptr [edi+edx*4]
0x8E1CFE: mov     cl, bl
0x8E1D00: shr     edx, cl
0x8E1D02: dec     edx
0x8E1D03: cmp     eax, edx
0x8E1D05: jg      short loc_8E1D54
0x8E1D07: mov     ebx, eax
0x8E1D09: sub     edx, eax
0x8E1D0B: shl     ebx, 4
0x8E1D0E: inc     edx
0x8E1D0F: mov     [esp+3Ch+arg_0], edx
0x8E1D13: mov     eax, [ebp+78h]
0x8E1D16: mov     esi, [eax+ebx+8]
0x8E1D1A: add     eax, ebx
0x8E1D1C: xor     ecx, ecx
0x8E1D1E: test    esi, esi
0x8E1D20: jle     short loc_8E1D37
0x8E1D22: mov     edi, [eax+4]
0x8E1D25: mov     edx, [esp+3Ch+var_20]
0x8E1D29: dec     edx
0x8E1D2A: cmp     [edi], dx
0x8E1D2D: jz      short loc_8E1D3A
0x8E1D2F: inc     ecx
0x8E1D30: add     edi, 2
0x8E1D33: cmp     ecx, esi
0x8E1D35: jl      short loc_8E1D25
0x8E1D37: or      ecx, 0FFFFFFFFh
0x8E1D3A: mov     eax, [eax+4]
0x8E1D3D: mov     dx, word ptr [esp+3Ch+var_28]
0x8E1D42: mov     [eax+ecx*2], dx
0x8E1D46: mov     eax, [esp+3Ch+arg_0]
0x8E1D4A: add     ebx, 10h
0x8E1D4D: dec     eax
0x8E1D4E: mov     [esp+3Ch+arg_0], eax
0x8E1D52: jnz     short loc_8E1D13
0x8E1D54: mov     edi, [esp+3Ch+var_24]
0x8E1D58: mov     esi, [esp+3Ch+var_20]
0x8E1D5C: mov     eax, [edi+8]
0x8E1D5F: dec     esi
0x8E1D60: and     eax, 3FFFFFFFh
0x8E1D65: cmp     eax, esi
0x8E1D67: jge     short loc_8E1D7D
0x8E1D69: add     eax, eax
0x8E1D6B: cmp     esi, eax
0x8E1D6D: jl      short loc_8E1D71
0x8E1D6F: mov     eax, esi
0x8E1D71: push    10h
0x8E1D73: push    eax
0x8E1D74: push    edi
0x8E1D75: call    sub_8A6E40
0x8E1D7A: add     esp, 0Ch
0x8E1D7D: mov     [edi+4], esi
0x8E1D80: pop     edi
0x8E1D81: pop     esi
0x8E1D82: pop     ebp
0x8E1D83: pop     ebx
0x8E1D84: add     esp, 2Ch
0x8E1D87: retn    8
