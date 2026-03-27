0x746980: sub     esp, 0Ch
0x746983: push    ebx
0x746984: mov     ebx, [esp+10h+arg_0]
0x746988: push    ebp
0x746989: xor     ecx, ecx
0x74698B: cmp     [eax+1698h], ecx
0x746991: push    esi
0x746992: push    edi
0x746993: jz      loc_746CD2
0x746999: lea     esp, [esp+0]
0x7469A0: mov     edx, [eax+169Ch]
0x7469A6: movzx   ebp, word ptr [edx+ecx*2]
0x7469AA: mov     edx, [eax+1690h]
0x7469B0: movzx   esi, byte ptr [ecx+edx]
0x7469B4: add     ecx, 1
0x7469B7: test    ebp, ebp
0x7469B9: mov     [esp+1Ch+var_4], ecx
0x7469BD: mov     ecx, [eax+16B4h]
0x7469C3: jnz     loc_746A4A
0x7469C9: movzx   edi, word ptr [ebx+esi*4+2]
0x7469CE: mov     edx, 10h
0x7469D3: sub     edx, edi
0x7469D5: cmp     ecx, edx
0x7469D7: jle     short loc_746A35
0x7469D9: movzx   esi, word ptr [ebx+esi*4]
0x7469DD: mov     edx, esi
0x7469DF: shl     edx, cl
0x7469E1: mov     ecx, [eax+8]
0x7469E4: mov     [esp+1Ch+var_C], ebx
0x7469E8: or      [eax+16B0h], dx
0x7469EF: movzx   ebx, byte ptr [eax+16B0h]
0x7469F6: mov     edx, [eax+14h]
0x7469F9: mov     [ecx+edx], bl
0x7469FC: add     dword ptr [eax+14h], 1
0x746A00: movzx   ebx, byte ptr [eax+16B1h]
0x746A07: mov     ecx, [eax+14h]
0x746A0A: mov     edx, [eax+8]
0x746A0D: mov     [ecx+edx], bl
0x746A10: mov     edx, [eax+16B4h]
0x746A16: add     dword ptr [eax+14h], 1
0x746A1A: mov     ebx, [esp+1Ch+var_C]
0x746A1E: mov     cl, 10h
0x746A20: sub     cl, dl
0x746A22: shr     si, cl
0x746A25: lea     ecx, [edx+edi-10h]
0x746A29: mov     [eax+16B0h], si
0x746A30: jmp     loc_746CBC
0x746A35: mov     dx, [ebx+esi*4]
0x746A39: shl     dx, cl
0x746A3C: or      [eax+16B0h], dx
0x746A43: add     ecx, edi
0x746A45: jmp     loc_746CBC
0x746A4A: movzx   edx, ds:byte_A851D0[esi]
0x746A51: movzx   edi, word ptr [ebx+edx*4+406h]
0x746A59: mov     ebx, 10h
0x746A5E: sub     ebx, edi
0x746A60: cmp     ecx, ebx
0x746A62: mov     [esp+1Ch+var_C], edi
0x746A66: mov     edi, [esp+1Ch+arg_0]
0x746A6A: mov     [esp+1Ch+var_8], edx
0x746A6E: jle     short loc_746AD3
0x746A70: movzx   edi, word ptr [edi+edx*4+404h]
0x746A78: mov     edx, edi
0x746A7A: shl     edx, cl
0x746A7C: mov     ecx, [eax+8]
0x746A7F: or      [eax+16B0h], dx
0x746A86: movzx   ebx, byte ptr [eax+16B0h]
0x746A8D: mov     edx, [eax+14h]
0x746A90: mov     [ecx+edx], bl
0x746A93: add     dword ptr [eax+14h], 1
0x746A97: mov     ecx, [eax+14h]
0x746A9A: movzx   ebx, byte ptr [eax+16B1h]
0x746AA1: mov     edx, [eax+8]
0x746AA4: mov     [ecx+edx], bl
0x746AA7: mov     edx, [eax+16B4h]
0x746AAD: add     dword ptr [eax+14h], 1
0x746AB1: mov     cl, 10h
0x746AB3: sub     cl, dl
0x746AB5: shr     di, cl
0x746AB8: mov     ecx, [esp+1Ch+var_C]
0x746ABC: lea     edx, [edx+ecx-10h]
0x746AC0: mov     [eax+16B4h], edx
0x746AC6: mov     edx, [esp+1Ch+var_8]
0x746ACA: mov     [eax+16B0h], di
0x746AD1: jmp     short loc_746AF1
0x746AD3: mov     di, [edi+edx*4+404h]
0x746ADB: shl     di, cl
0x746ADE: or      [eax+16B0h], di
0x746AE5: mov     edi, [esp+1Ch+var_C]
0x746AE9: add     ecx, edi
0x746AEB: mov     [eax+16B4h], ecx
0x746AF1: mov     edi, ds:0A84988h[edx*4]
0x746AF8: test    edi, edi
0x746AFA: mov     ebx, [esp+1Ch+arg_0]
0x746AFE: jz      short loc_746B7A
0x746B00: sub     esi, ds:0A852D0h[edx*4]
0x746B07: mov     ecx, [eax+16B4h]
0x746B0D: mov     edx, 10h
0x746B12: sub     edx, edi
0x746B14: cmp     ecx, edx
0x746B16: jle     short loc_746B69
0x746B18: mov     edx, esi
0x746B1A: shl     edx, cl
0x746B1C: mov     ecx, [eax+8]
0x746B1F: or      [eax+16B0h], dx
0x746B26: movzx   ebx, byte ptr [eax+16B0h]
0x746B2D: mov     edx, [eax+14h]
0x746B30: mov     [ecx+edx], bl
0x746B33: add     dword ptr [eax+14h], 1
0x746B37: movzx   ebx, byte ptr [eax+16B1h]
0x746B3E: mov     ecx, [eax+14h]
0x746B41: mov     edx, [eax+8]
0x746B44: mov     [ecx+edx], bl
0x746B47: mov     edx, [eax+16B4h]
0x746B4D: add     dword ptr [eax+14h], 1
0x746B51: mov     ebx, [esp+1Ch+arg_0]
0x746B55: mov     cl, 10h
0x746B57: sub     cl, dl
0x746B59: shr     si, cl
0x746B5C: lea     ecx, [edx+edi-10h]
0x746B60: mov     [eax+16B0h], si
0x746B67: jmp     short loc_746B74
0x746B69: shl     esi, cl
0x746B6B: or      [eax+16B0h], si
0x746B72: add     ecx, edi
0x746B74: mov     [eax+16B4h], ecx
0x746B7A: sub     ebp, 1
0x746B7D: cmp     ebp, 100h
0x746B83: jnb     short loc_746B8E
0x746B85: movzx   edi, ss:byte_A84FD0[ebp]
0x746B8C: jmp     short loc_746B9A
0x746B8E: mov     edx, ebp
0x746B90: shr     edx, 7
0x746B93: movzx   edi, ds:byte_A850D0[edx]
0x746B9A: mov     ecx, [esp+1Ch+arg_4]
0x746B9E: movzx   edx, word ptr [ecx+edi*4+2]
0x746BA3: mov     ecx, [eax+16B4h]
0x746BA9: mov     esi, 10h
0x746BAE: sub     esi, edx
0x746BB0: cmp     ecx, esi
0x746BB2: mov     [esp+1Ch+var_8], edx
0x746BB6: jle     short loc_746C1B
0x746BB8: mov     edx, [esp+1Ch+arg_4]
0x746BBC: movzx   esi, word ptr [edx+edi*4]
0x746BC0: mov     edx, esi
0x746BC2: shl     edx, cl
0x746BC4: mov     ecx, [eax+8]
0x746BC7: or      [eax+16B0h], dx
0x746BCE: movzx   ebx, byte ptr [eax+16B0h]
0x746BD5: mov     edx, [eax+14h]
0x746BD8: mov     [ecx+edx], bl
0x746BDB: add     dword ptr [eax+14h], 1
0x746BDF: movzx   ebx, byte ptr [eax+16B1h]
0x746BE6: mov     ecx, [eax+14h]
0x746BE9: mov     edx, [eax+8]
0x746BEC: mov     [ecx+edx], bl
0x746BEF: mov     edx, [eax+16B4h]
0x746BF5: add     dword ptr [eax+14h], 1
0x746BF9: mov     ebx, [esp+1Ch+arg_0]
0x746BFD: mov     cl, 10h
0x746BFF: sub     cl, dl
0x746C01: shr     si, cl
0x746C04: mov     ecx, [esp+1Ch+var_8]
0x746C08: lea     edx, [edx+ecx-10h]
0x746C0C: mov     [eax+16B4h], edx
0x746C12: mov     [eax+16B0h], si
0x746C19: jmp     short loc_746C35
0x746C1B: mov     esi, [esp+1Ch+arg_4]
0x746C1F: mov     si, [esi+edi*4]
0x746C23: shl     si, cl
0x746C26: or      [eax+16B0h], si
0x746C2D: add     ecx, edx
0x746C2F: mov     [eax+16B4h], ecx
0x746C35: mov     esi, ds:0A84A10h[edi*4]
0x746C3C: test    esi, esi
0x746C3E: jz      loc_746CC2
0x746C44: mov     ecx, [eax+16B4h]
0x746C4A: sub     ebp, ds:0A85348h[edi*4]
0x746C51: mov     edx, 10h
0x746C56: sub     edx, esi
0x746C58: cmp     ecx, edx
0x746C5A: jle     short loc_746CB1
0x746C5C: mov     edx, ebp
0x746C5E: shl     edx, cl
0x746C60: mov     ecx, [eax+8]
0x746C63: mov     [esp+1Ch+var_8], ebx
0x746C67: or      [eax+16B0h], dx
0x746C6E: movzx   ebx, byte ptr [eax+16B0h]
0x746C75: mov     edx, [eax+14h]
0x746C78: mov     [ecx+edx], bl
0x746C7B: add     dword ptr [eax+14h], 1
0x746C7F: movzx   ebx, byte ptr [eax+16B1h]
0x746C86: mov     ecx, [eax+14h]
0x746C89: mov     edx, [eax+8]
0x746C8C: mov     [ecx+edx], bl
0x746C8F: mov     edx, [eax+16B4h]
0x746C95: add     dword ptr [eax+14h], 1
0x746C99: mov     ebx, [esp+1Ch+var_8]
0x746C9D: mov     cl, 10h
0x746C9F: sub     cl, dl
0x746CA1: shr     bp, cl
0x746CA4: lea     ecx, [edx+esi-10h]
0x746CA8: mov     [eax+16B0h], bp
0x746CAF: jmp     short loc_746CBC
0x746CB1: shl     ebp, cl
0x746CB3: or      [eax+16B0h], bp
0x746CBA: add     ecx, esi
0x746CBC: mov     [eax+16B4h], ecx
0x746CC2: mov     ecx, [esp+1Ch+var_4]
0x746CC6: cmp     ecx, [eax+1698h]
0x746CCC: jb      loc_7469A0
0x746CD2: movzx   edi, word ptr [ebx+402h]
0x746CD9: mov     ecx, [eax+16B4h]
0x746CDF: mov     edx, 10h
0x746CE4: sub     edx, edi
0x746CE6: cmp     ecx, edx
0x746CE8: jle     short loc_746D5D
0x746CEA: movzx   esi, word ptr [ebx+400h]
0x746CF1: mov     edx, esi
0x746CF3: shl     edx, cl
0x746CF5: mov     ecx, [eax+8]
0x746CF8: mov     [esp+1Ch+arg_0], ebx
0x746CFC: or      [eax+16B0h], dx
0x746D03: mov     edx, [eax+14h]
0x746D06: mov     bl, [eax+16B0h]
0x746D0C: mov     [ecx+edx], bl
0x746D0F: add     dword ptr [eax+14h], 1
0x746D13: mov     ebp, [eax+14h]
0x746D16: mov     ecx, [eax+8]
0x746D19: mov     dl, [eax+16B1h]
0x746D1F: mov     ebx, [esp+1Ch+arg_0]
0x746D23: mov     [ecx+ebp], dl
0x746D26: mov     edx, [eax+16B4h]
0x746D2C: add     dword ptr [eax+14h], 1
0x746D30: mov     cl, 10h
0x746D32: sub     cl, dl
0x746D34: shr     si, cl
0x746D37: lea     ecx, [edx+edi-10h]
0x746D3B: pop     edi
0x746D3C: mov     [eax+16B4h], ecx
0x746D42: mov     [eax+16B0h], si
0x746D49: movzx   edx, word ptr [ebx+402h]
0x746D50: pop     esi
0x746D51: pop     ebp
0x746D52: mov     [eax+16ACh], edx
0x746D58: pop     ebx
0x746D59: add     esp, 0Ch
0x746D5C: retn
0x746D5D: mov     dx, [ebx+400h]
0x746D64: shl     dx, cl
0x746D67: or      [eax+16B0h], dx
0x746D6E: add     ecx, edi
0x746D70: pop     edi
0x746D71: mov     [eax+16B4h], ecx
0x746D77: movzx   ecx, word ptr [ebx+402h]
0x746D7E: pop     esi
0x746D7F: pop     ebp
0x746D80: mov     [eax+16ACh], ecx
0x746D86: pop     ebx
0x746D87: add     esp, 0Ch
0x746D8A: retn
