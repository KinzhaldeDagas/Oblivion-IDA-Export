0x8E3C30: mov     eax, [esp+arg_0]
0x8E3C34: mov     ecx, [eax+4Ch]
0x8E3C37: mov     eax, [esp+arg_10]
0x8E3C3B: push    ebx
0x8E3C3C: push    ebp
0x8E3C3D: mov     ebp, [esp+8+arg_C]
0x8E3C41: push    esi
0x8E3C42: mov     esi, [esp+0Ch+arg_8]
0x8E3C46: movzx   ebx, word ptr [esi+8]
0x8E3C4A: push    edi
0x8E3C4B: lea     edi, [ecx+ebx*4]
0x8E3C4E: movzx   ecx, word ptr [edi-4]
0x8E3C52: cmp     eax, ecx
0x8E3C54: jnb     short loc_8E3CC6
0x8E3C56: jmp     short loc_8E3C60
0x8E3C58: align 10h
0x8E3C60: movzx   eax, word ptr [edi-2]
0x8E3C64: mov     edx, [esp+10h+arg_4]
0x8E3C68: shl     eax, 4
0x8E3C6B: add     eax, edx
0x8E3C6D: test    cl, 1
0x8E3C70: movzx   edx, word ptr [edi-2]
0x8E3C74: mov     [edi], cx
0x8E3C77: mov     [edi+2], dx
0x8E3C7B: jz      short loc_8E3CAE
0x8E3C7D: mov     edx, [esi]
0x8E3C7F: mov     ecx, [eax+4]
0x8E3C82: sub     ecx, edx
0x8E3C84: mov     edx, [esi+4]
0x8E3C87: sub     edx, [eax]
0x8E3C89: mov     [eax+0Ah], bx
0x8E3C8D: or      ecx, edx
0x8E3C8F: test    ecx, 80008000h
0x8E3C95: jnz     short loc_8E3CB2
0x8E3C97: mov     ecx, [esp+10h+arg_18]
0x8E3C9B: push    ecx
0x8E3C9C: push    eax
0x8E3C9D: mov     eax, [esp+18h+arg_0]
0x8E3CA1: mov     ecx, [eax+78h]
0x8E3CA4: push    ebp
0x8E3CA5: mov     edx, esi
0x8E3CA7: call    sub_8E1280
0x8E3CAC: jmp     short loc_8E3CB2
0x8E3CAE: mov     [eax+8], bx
0x8E3CB2: mov     eax, [esp+10h+arg_10]
0x8E3CB6: add     edi, 0FFFFFFFCh
0x8E3CB9: mov     [edi+2], bp
0x8E3CBD: movzx   ecx, word ptr [edi-4]
0x8E3CC1: dec     ebx
0x8E3CC2: cmp     eax, ecx
0x8E3CC4: jb      short loc_8E3C60
0x8E3CC6: mov     cx, word ptr [esp+10h+arg_10]
0x8E3CCB: mov     eax, [esp+10h+arg_0]
0x8E3CCF: mov     [esi+8], bx
0x8E3CD3: mov     [edi], cx
0x8E3CD6: movzx   edx, word ptr [esi+0Ah]
0x8E3CDA: mov     ecx, [eax+4Ch]
0x8E3CDD: lea     edi, [ecx+edx*4]
0x8E3CE0: movzx   ecx, word ptr [edi+4]
0x8E3CE4: mov     edx, [esp+10h+arg_14]
0x8E3CE8: add     edi, 4
0x8E3CEB: cmp     edx, ecx
0x8E3CED: mov     [esp+10h+arg_8], 0
0x8E3CF5: jbe     short loc_8E3D5F
0x8E3CF7: mov     eax, [esp+10h+arg_8]
0x8E3CFB: mov     ebx, [esp+10h+arg_4]
0x8E3CFF: inc     eax
0x8E3D00: mov     [esp+10h+arg_8], eax
0x8E3D04: movzx   eax, word ptr [edi+2]
0x8E3D08: shl     eax, 4
0x8E3D0B: add     eax, ebx
0x8E3D0D: test    cl, 1
0x8E3D10: mov     ebx, [edi]
0x8E3D12: mov     [edi-4], ebx
0x8E3D15: mov     [edi+2], bp
0x8E3D19: jnz     short loc_8E3D50
0x8E3D1B: mov     ebx, [esi]
0x8E3D1D: mov     ecx, [eax+4]
0x8E3D20: sub     ecx, ebx
0x8E3D22: mov     ebx, [esi+4]
0x8E3D25: sub     ebx, [eax]
0x8E3D27: or      ecx, ebx
0x8E3D29: dec     word ptr [eax+8]
0x8E3D2D: test    ecx, 80008000h
0x8E3D33: jnz     short loc_8E3D54
0x8E3D35: mov     edx, [esp+10h+arg_18]
0x8E3D39: push    edx
0x8E3D3A: push    eax
0x8E3D3B: mov     eax, [esp+18h+arg_0]
0x8E3D3F: mov     ecx, [eax+78h]
0x8E3D42: push    ebp
0x8E3D43: mov     edx, esi
0x8E3D45: call    sub_8E1280
0x8E3D4A: mov     edx, [esp+10h+arg_14]
0x8E3D4E: jmp     short loc_8E3D54
0x8E3D50: dec     word ptr [eax+0Ah]
0x8E3D54: movzx   ecx, word ptr [edi+4]
0x8E3D58: add     edi, 4
0x8E3D5B: cmp     edx, ecx
0x8E3D5D: ja      short loc_8E3CF7
0x8E3D5F: mov     cx, word ptr [esp+10h+arg_8]
0x8E3D64: add     [esi+0Ah], cx
0x8E3D68: movzx   eax, word ptr [esi+0Ah]
0x8E3D6C: mov     ecx, [esp+10h+arg_0]
0x8E3D70: mov     ecx, [ecx+4Ch]
0x8E3D73: lea     edi, [ecx+eax*4]
0x8E3D76: movzx   ecx, word ptr [edi-4]
0x8E3D7A: xor     ebx, ebx
0x8E3D7C: cmp     edx, ecx
0x8E3D7E: jnb     short loc_8E3DE2
0x8E3D80: movzx   eax, word ptr [edi-2]
0x8E3D84: mov     edx, [esp+10h+arg_4]
0x8E3D88: add     edi, 0FFFFFFFCh
0x8E3D8B: shl     eax, 4
0x8E3D8E: add     eax, edx
0x8E3D90: mov     edx, [edi]
0x8E3D92: dec     ebx
0x8E3D93: test    cl, 1
0x8E3D96: mov     [edi+4], edx
0x8E3D99: mov     [edi+2], bp
0x8E3D9D: jnz     short loc_8E3DD0
0x8E3D9F: mov     edx, [esi]
0x8E3DA1: mov     ecx, [eax+4]
0x8E3DA4: sub     ecx, edx
0x8E3DA6: mov     edx, [esi+4]
0x8E3DA9: sub     edx, [eax]
0x8E3DAB: or      ecx, edx
0x8E3DAD: inc     word ptr [eax+8]
0x8E3DB1: test    ecx, 80008000h
0x8E3DB7: jnz     short loc_8E3DD4
0x8E3DB9: mov     ecx, [esp+10h+arg_1C]
0x8E3DBD: push    ecx
0x8E3DBE: push    eax
0x8E3DBF: mov     eax, [esp+18h+arg_0]
0x8E3DC3: mov     ecx, [eax+78h]
0x8E3DC6: push    ebp
0x8E3DC7: mov     edx, esi
0x8E3DC9: call    sub_8E1310
0x8E3DCE: jmp     short loc_8E3DD4
0x8E3DD0: inc     word ptr [eax+0Ah]
0x8E3DD4: movzx   ecx, word ptr [edi-4]
0x8E3DD8: mov     eax, [esp+10h+arg_14]
0x8E3DDC: cmp     eax, ecx
0x8E3DDE: jb      short loc_8E3D80
0x8E3DE0: mov     edx, eax
0x8E3DE2: add     [esi+0Ah], bx
0x8E3DE6: mov     [edi], dx
0x8E3DE9: movzx   ecx, word ptr [esi+8]
0x8E3DED: mov     edx, [esp+10h+arg_0]
0x8E3DF1: mov     eax, [edx+4Ch]
0x8E3DF4: mov     edi, [esp+10h+arg_10]
0x8E3DF8: lea     edx, [eax+ecx*4]
0x8E3DFB: movzx   ecx, word ptr [edx+4]
0x8E3DFF: lea     eax, [edx+4]
0x8E3E02: xor     ebx, ebx
0x8E3E04: cmp     edi, ecx
0x8E3E06: jbe     short loc_8E3E7F
0x8E3E08: jmp     short loc_8E3E10
0x8E3E0A: align 10h
0x8E3E10: mov     edx, [esp+10h+arg_4]
0x8E3E14: mov     edi, eax
0x8E3E16: movzx   eax, word ptr [edi+2]
0x8E3E1A: shl     eax, 4
0x8E3E1D: add     eax, edx
0x8E3E1F: mov     edx, [edi]
0x8E3E21: inc     ebx
0x8E3E22: test    cl, 1
0x8E3E25: mov     [edi-4], edx
0x8E3E28: mov     [edi+2], bp
0x8E3E2C: jz      short loc_8E3E5D
0x8E3E2E: mov     ecx, [esi+4]
0x8E3E31: sub     ecx, [eax]
0x8E3E33: mov     edx, [eax+4]
0x8E3E36: sub     edx, [esi]
0x8E3E38: or      ecx, edx
0x8E3E3A: dec     word ptr [eax+0Ah]
0x8E3E3E: test    ecx, 80008000h
0x8E3E44: jnz     short loc_8E3E61
0x8E3E46: mov     ecx, [esp+10h+arg_1C]
0x8E3E4A: push    ecx
0x8E3E4B: push    eax
0x8E3E4C: mov     eax, [esp+18h+arg_0]
0x8E3E50: mov     ecx, [eax+78h]
0x8E3E53: push    ebp
0x8E3E54: mov     edx, esi
0x8E3E56: call    sub_8E1310
0x8E3E5B: jmp     short loc_8E3E61
0x8E3E5D: dec     word ptr [eax+8]
0x8E3E61: movzx   ecx, word ptr [edi+4]
0x8E3E65: mov     edx, [esp+10h+arg_10]
0x8E3E69: cmp     edx, ecx
0x8E3E6B: lea     eax, [edi+4]
0x8E3E6E: ja      short loc_8E3E10
0x8E3E70: add     [esi+8], bx
0x8E3E74: mov     cx, dx
0x8E3E77: mov     [edi], cx
0x8E3E7A: pop     edi
0x8E3E7B: pop     esi
0x8E3E7C: pop     ebp
0x8E3E7D: pop     ebx
0x8E3E7E: retn
0x8E3E7F: add     [esi+8], bx
0x8E3E83: mov     [edx], di
0x8E3E86: pop     edi
0x8E3E87: pop     esi
0x8E3E88: pop     ebp
0x8E3E89: pop     ebx
0x8E3E8A: retn
