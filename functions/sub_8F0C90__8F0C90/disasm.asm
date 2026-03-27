0x8F0C90: push    ebp
0x8F0C91: mov     ebp, esp
0x8F0C93: and     esp, 0FFFFFFF0h
0x8F0C96: sub     esp, 64h
0x8F0C99: mov     eax, [ebp+arg_4]
0x8F0C9C: push    ebx
0x8F0C9D: push    esi
0x8F0C9E: push    edi
0x8F0C9F: mov     edi, ecx
0x8F0CA1: mov     ecx, [ebp+arg_0]
0x8F0CA4: mov     ebx, ecx
0x8F0CA6: shr     ebx, 1
0x8F0CA8: and     ebx, 7FFFh
0x8F0CAE: shr     ecx, 10h
0x8F0CB1: xor     edx, edx
0x8F0CB3: cmp     eax, edx
0x8F0CB5: mov     dword ptr [esp+70h+var_54+8], ebx
0x8F0CB9: mov     dword ptr [esp+70h+var_54], ecx
0x8F0CBD: jz      short loc_8F0CDA
0x8F0CBF: fld     dword ptr [edi+14h]
0x8F0CC2: mov     word ptr [eax+6], 1
0x8F0CC8: fstp    dword ptr [eax+0Ch]
0x8F0CCB: mov     [eax+8], edx
0x8F0CCE: mov     dword ptr [eax], offset ??_7hkTriangleShape@@6B@; const hkTriangleShape::`vftable'
0x8F0CD4: mov     dword ptr [esp+70h+var_64+0Ch], eax
0x8F0CD8: jmp     short loc_8F0CDE
0x8F0CDA: mov     dword ptr [esp+70h+var_64+0Ch], edx
0x8F0CDE: fild    dword ptr [esp+70h+var_54+8]
0x8F0CE2: mov     esi, [edi+10h]
0x8F0CE5: mov     eax, [esi]
0x8F0CE7: push    ecx
0x8F0CE8: fst     dword ptr [esp+74h+var_54+4]
0x8F0CEC: push    ebx
0x8F0CED: mov     ecx, esi
0x8F0CEF: fstp    [esp+78h+var_40]
0x8F0CF3: call    dword ptr [eax+24h]
0x8F0CF6: fstp    [esp+70h+var_3C]
0x8F0CFA: fild    dword ptr [esp+70h+var_54]
0x8F0CFE: mov     ecx, dword ptr [esp+70h+var_54+4]
0x8F0D02: mov     eax, dword ptr [esp+70h+var_54]
0x8F0D06: movaps  xmm1, xmmword ptr [esi+20h]
0x8F0D0A: inc     eax
0x8F0D0B: fst     dword ptr [esp+70h+var_54+8]
0x8F0D0F: fstp    [esp+70h+var_38]
0x8F0D13: mov     dword ptr [esp+70h+var_10], ecx
0x8F0D17: mov     ecx, [edi+10h]
0x8F0D1A: mov     edx, [ecx]
0x8F0D1C: mov     dword ptr [esp+70h+var_34], 0
0x8F0D24: movaps  xmm0, xmmword ptr [esp+70h+var_40]
0x8F0D29: push    eax
0x8F0D2A: mulps   xmm0, xmm1
0x8F0D2D: push    ebx
0x8F0D2E: movaps  xmmword ptr [esp+78h+var_40], xmm0
0x8F0D33: mov     dword ptr [esp+78h+var_54+0Ch], eax
0x8F0D37: call    dword ptr [edx+24h]
0x8F0D3A: fstp    dword ptr [esp+70h+var_10+4]
0x8F0D3E: fld     dword ptr [esp+70h+var_54+8]
0x8F0D42: mov     edx, dword ptr [esp+70h+var_54]
0x8F0D46: fadd    dword ptr ds:0A2F948h
0x8F0D4C: mov     ecx, [edi+10h]
0x8F0D4F: movaps  xmm1, xmmword ptr [esi+20h]
0x8F0D53: mov     eax, [ecx]
0x8F0D55: fst     [esp+70h+var_44]
0x8F0D59: mov     dword ptr [esp+70h+var_10+0Ch], 0
0x8F0D61: fstp    dword ptr [esp+70h+var_10+8]
0x8F0D65: movaps  xmm0, [esp+70h+var_10]
0x8F0D6A: fld     dword ptr [esp+70h+var_54+4]
0x8F0D6E: push    edx
0x8F0D6F: fadd    dword ptr ds:0A2F948h
0x8F0D75: inc     ebx
0x8F0D76: mulps   xmm0, xmm1
0x8F0D79: push    ebx
0x8F0D7A: fst     dword ptr [esp+78h+var_54+4]
0x8F0D7E: movaps  [esp+78h+var_10], xmm0
0x8F0D83: fstp    dword ptr [esp+78h+var_20]
0x8F0D87: call    dword ptr [eax+24h]
0x8F0D8A: mov     eax, dword ptr [esp+70h+var_54+8]
0x8F0D8E: fstp    dword ptr [esp+70h+var_20+4]
0x8F0D92: mov     ecx, dword ptr [esp+70h+var_54+4]
0x8F0D96: movaps  xmm1, xmmword ptr [esi+20h]
0x8F0D9A: mov     dword ptr [esp+70h+var_20+8], eax
0x8F0D9E: mov     eax, dword ptr [esp+70h+var_54+0Ch]
0x8F0DA2: mov     dword ptr [esp+70h+var_34+4], ecx
0x8F0DA6: mov     ecx, [edi+10h]
0x8F0DA9: mov     edx, [ecx]
0x8F0DAB: mov     dword ptr [esp+70h+var_20+0Ch], 0
0x8F0DB3: movaps  xmm0, [esp+70h+var_20]
0x8F0DB8: push    eax
0x8F0DB9: mulps   xmm0, xmm1
0x8F0DBC: push    ebx
0x8F0DBD: movaps  [esp+78h+var_20], xmm0
0x8F0DC2: call    dword ptr [edx+24h]
0x8F0DC5: fstp    dword ptr [esp+70h+var_34+8]
0x8F0DC9: mov     ecx, [esp+70h+var_44]
0x8F0DCD: mov     edi, [edi+10h]
0x8F0DD0: movaps  xmm1, xmmword ptr [esi+20h]
0x8F0DD4: mov     edx, [edi]
0x8F0DD6: mov     dword ptr [esp+70h+var_34+0Ch], ecx
0x8F0DDA: mov     [esp+70h+var_24], 0
0x8F0DE2: movaps  xmm0, [esp+70h+var_34+4]
0x8F0DE7: lea     eax, [esp+70h+var_64+0Bh]
0x8F0DEB: mulps   xmm0, xmm1
0x8F0DEE: push    eax
0x8F0DEF: mov     ecx, edi
0x8F0DF1: movaps  [esp+74h+var_34+4], xmm0
0x8F0DF6: call    dword ptr [edx+28h]
0x8F0DF9: mov     cl, [eax]
0x8F0DFB: mov     al, byte ptr [ebp+arg_0]
0x8F0DFE: test    cl, cl
0x8F0E00: jz      short loc_8F0E49
0x8F0E02: movaps  xmm0, xmmword ptr [esp+70h+var_40]
0x8F0E07: test    al, 1
0x8F0E09: mov     eax, dword ptr [esp+70h+var_64+0Ch]
0x8F0E0D: movaps  xmmword ptr [eax+10h], xmm0
0x8F0E11: jnz     short loc_8F0E2E
0x8F0E13: movaps  xmm0, [esp+70h+var_10]
0x8F0E18: movaps  xmmword ptr [eax+20h], xmm0
0x8F0E1C: movaps  xmm0, [esp+70h+var_34+4]
0x8F0E21: movaps  xmmword ptr [eax+30h], xmm0
0x8F0E25: pop     edi
0x8F0E26: pop     esi
0x8F0E27: pop     ebx
0x8F0E28: mov     esp, ebp
0x8F0E2A: pop     ebp
0x8F0E2B: retn    8
0x8F0E2E: movaps  xmm0, [esp+70h+var_34+4]
0x8F0E33: movaps  xmmword ptr [eax+20h], xmm0
0x8F0E37: movaps  xmm0, [esp+70h+var_20]
0x8F0E3C: movaps  xmmword ptr [eax+30h], xmm0
0x8F0E40: pop     edi
0x8F0E41: pop     esi
0x8F0E42: pop     ebx
0x8F0E43: mov     esp, ebp
0x8F0E45: pop     ebp
0x8F0E46: retn    8
0x8F0E49: test    al, 1
0x8F0E4B: mov     eax, dword ptr [esp+70h+var_64+0Ch]
0x8F0E4F: jnz     short loc_8F0E75
0x8F0E51: movaps  xmm0, xmmword ptr [esp+70h+var_40]
0x8F0E56: movaps  xmmword ptr [eax+10h], xmm0
0x8F0E5A: movaps  xmm0, [esp+70h+var_10]
0x8F0E5F: movaps  xmmword ptr [eax+20h], xmm0
0x8F0E63: movaps  xmm0, [esp+70h+var_20]
0x8F0E68: movaps  xmmword ptr [eax+30h], xmm0
0x8F0E6C: pop     edi
0x8F0E6D: pop     esi
0x8F0E6E: pop     ebx
0x8F0E6F: mov     esp, ebp
0x8F0E71: pop     ebp
0x8F0E72: retn    8
0x8F0E75: movaps  xmm0, [esp+70h+var_34+4]
0x8F0E7A: movaps  xmmword ptr [eax+10h], xmm0
0x8F0E7E: movaps  xmm0, [esp+70h+var_20]
0x8F0E83: pop     edi
0x8F0E84: movaps  xmmword ptr [eax+20h], xmm0
0x8F0E88: movaps  xmm0, [esp+6Ch+var_10]
0x8F0E8D: pop     esi
0x8F0E8E: movaps  xmmword ptr [eax+30h], xmm0
0x8F0E92: pop     ebx
0x8F0E93: mov     esp, ebp
0x8F0E95: pop     ebp
0x8F0E96: retn    8
