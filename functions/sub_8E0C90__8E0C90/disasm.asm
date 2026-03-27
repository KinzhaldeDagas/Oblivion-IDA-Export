0x8E0C90: push    ebx
0x8E0C91: push    ebp
0x8E0C92: mov     ebp, [esp+8+arg_10]
0x8E0C96: push    esi
0x8E0C97: push    edi
0x8E0C98: mov     edi, ecx
0x8E0C9A: mov     ecx, [esp+10h+arg_4]
0x8E0C9E: xor     eax, eax
0x8E0CA0: test    ecx, ecx
0x8E0CA2: jle     short loc_8E0CB2
0x8E0CA4: mov     edx, [edi]
0x8E0CA6: mov     edx, [edx+eax*4]
0x8E0CA9: mov     [ebp+eax*4+0], edx
0x8E0CAD: inc     eax
0x8E0CAE: cmp     eax, ecx
0x8E0CB0: jl      short loc_8E0CA4
0x8E0CB2: mov     ebx, [edi]
0x8E0CB4: lea     edx, [ebp+4]
0x8E0CB7: lea     ebp, [ebp+ecx*4-4]
0x8E0CBB: lea     esi, [ebx+ecx*4]
0x8E0CBE: mov     [esp+10h+arg_4], ebp
0x8E0CC2: mov     ebp, [esp+10h+arg_8]
0x8E0CC6: add     ecx, ebp
0x8E0CC8: lea     eax, [ebx+4]
0x8E0CCB: lea     ebx, [ebx+ecx*4]
0x8E0CCE: mov     cx, [esi]
0x8E0CD1: cmp     [edx], cx
0x8E0CD4: mov     [esp+10h+arg_10], ebx
0x8E0CD8: jnb     short loc_8E0CEB
0x8E0CDA: lea     ebx, [ebx+0]
0x8E0CE0: add     edx, 4
0x8E0CE3: add     eax, 4
0x8E0CE6: cmp     [edx], cx
0x8E0CE9: jb      short loc_8E0CE0
0x8E0CEB: cmp     edx, [esp+10h+arg_4]
0x8E0CEF: mov     ebp, [esp+10h+arg_0]
0x8E0CF3: jnb     short loc_8E0D4F
0x8E0CF5: cmp     esi, ebx
0x8E0CF7: jnb     loc_8E0D93
0x8E0CFD: lea     ecx, [ecx+0]
0x8E0D00: mov     cx, [edx]
0x8E0D03: xor     ebx, ebx
0x8E0D05: cmp     cx, [esi]
0x8E0D08: jnb     loc_8E0DE2
0x8E0D0E: mov     ecx, [edx]
0x8E0D10: mov     [eax], ecx
0x8E0D12: mov     bl, [eax]
0x8E0D14: mov     ebp, [edi]
0x8E0D16: mov     ecx, eax
0x8E0D18: sub     ecx, ebp
0x8E0D1A: mov     ebp, [esp+10h+arg_C]
0x8E0D1E: sar     ecx, 2
0x8E0D21: add     edx, 4
0x8E0D24: and     ebx, 1
0x8E0D27: lea     ebx, [ebx+ebp*2]
0x8E0D2A: movzx   ebp, word ptr [eax+2]
0x8E0D2E: shl     ebp, 4
0x8E0D31: add     ebp, ds:0B2FC84h[ebx*4]
0x8E0D38: add     eax, 4
0x8E0D3B: mov     ebx, ebp
0x8E0D3D: mov     ebp, [esp+10h+arg_0]
0x8E0D41: mov     [ebx+ebp], cx
0x8E0D45: cmp     edx, [esp+10h+arg_4]
0x8E0D49: jb      short loc_8E0D00
0x8E0D4B: mov     ebx, [esp+10h+arg_10]
0x8E0D4F: cmp     esi, ebx
0x8E0D51: jnb     short loc_8E0D93
0x8E0D53: mov     ecx, [esi]
0x8E0D55: mov     [eax], ecx
0x8E0D57: mov     ebp, [edi]
0x8E0D59: xor     ebx, ebx
0x8E0D5B: mov     bl, [eax]
0x8E0D5D: mov     ecx, eax
0x8E0D5F: sub     ecx, ebp
0x8E0D61: mov     ebp, [esp+10h+arg_C]
0x8E0D65: add     ebp, ebp
0x8E0D67: sar     ecx, 2
0x8E0D6A: add     esi, 4
0x8E0D6D: and     ebx, 1
0x8E0D70: add     ebx, ebp
0x8E0D72: movzx   ebp, word ptr [eax+2]
0x8E0D76: shl     ebp, 4
0x8E0D79: add     ebp, ds:0B2FC84h[ebx*4]
0x8E0D80: add     eax, 4
0x8E0D83: mov     ebx, ebp
0x8E0D85: mov     ebp, [esp+10h+arg_0]
0x8E0D89: mov     [ebx+ebp], cx
0x8E0D8D: cmp     esi, [esp+10h+arg_10]
0x8E0D91: jb      short loc_8E0D53
0x8E0D93: cmp     edx, [esp+10h+arg_4]
0x8E0D97: ja      short loc_8E0DDB
0x8E0D99: mov     ecx, [esp+10h+arg_C]
0x8E0D9D: add     ecx, ecx
0x8E0D9F: mov     [esp+10h+arg_0], ecx
0x8E0DA3: mov     ecx, [edx]
0x8E0DA5: mov     [eax], ecx
0x8E0DA7: mov     esi, [edi]
0x8E0DA9: xor     ebx, ebx
0x8E0DAB: mov     bl, [eax]
0x8E0DAD: mov     ecx, eax
0x8E0DAF: sub     ecx, esi
0x8E0DB1: mov     esi, [esp+10h+arg_0]
0x8E0DB5: sar     ecx, 2
0x8E0DB8: add     edx, 4
0x8E0DBB: add     eax, 4
0x8E0DBE: and     ebx, 1
0x8E0DC1: add     ebx, esi
0x8E0DC3: movzx   esi, word ptr [eax-2]
0x8E0DC7: shl     esi, 4
0x8E0DCA: add     esi, ds:0B2FC84h[ebx*4]
0x8E0DD1: mov     [esi+ebp], cx
0x8E0DD5: cmp     edx, [esp+10h+arg_4]
0x8E0DD9: jbe     short loc_8E0DA3
0x8E0DDB: pop     edi
0x8E0DDC: pop     esi
0x8E0DDD: pop     ebp
0x8E0DDE: pop     ebx
0x8E0DDF: retn    14h
0x8E0DE2: mov     ecx, [esi]
0x8E0DE4: mov     [eax], ecx
0x8E0DE6: mov     bl, [eax]
0x8E0DE8: mov     ebp, [edi]
0x8E0DEA: mov     ecx, eax
0x8E0DEC: sub     ecx, ebp
0x8E0DEE: mov     ebp, [esp+10h+arg_C]
0x8E0DF2: sar     ecx, 2
0x8E0DF5: and     ebx, 1
0x8E0DF8: lea     ebx, [ebx+ebp*2]
0x8E0DFB: movzx   ebp, word ptr [eax+2]
0x8E0DFF: shl     ebp, 4
0x8E0E02: add     ebp, ds:0B2FC84h[ebx*4]
0x8E0E09: mov     ebx, ebp
0x8E0E0B: mov     ebp, [esp+10h+arg_0]
0x8E0E0F: mov     [ebx+ebp], cx
0x8E0E13: add     esi, 4
0x8E0E16: add     eax, 4
0x8E0E19: cmp     esi, [esp+10h+arg_10]
0x8E0E1D: jb      loc_8E0D00
0x8E0E23: jmp     loc_8E0D93
