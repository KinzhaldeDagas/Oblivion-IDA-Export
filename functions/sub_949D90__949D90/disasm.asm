0x949D90: push    ebp
0x949D91: mov     ebp, esp
0x949D93: and     esp, 0FFFFFFF0h
0x949D96: sub     esp, 0A4h
0x949D9C: push    ebx
0x949D9D: push    esi
0x949D9E: push    edi
0x949D9F: mov     edi, [ebp+arg_0]
0x949DA2: mov     eax, [edi+8]
0x949DA5: and     eax, 3FFFFFFFh
0x949DAA: cmp     eax, 18h
0x949DAD: mov     [esp+0B0h+var_9C], ecx
0x949DB1: jge     short loc_949DCF
0x949DB3: add     eax, eax
0x949DB5: cmp     eax, 18h
0x949DB8: jg      short loc_949DBF
0x949DBA: mov     eax, 18h
0x949DBF: push    10h
0x949DC1: push    eax
0x949DC2: push    edi
0x949DC3: call    sub_8A6E40
0x949DC8: mov     ecx, [esp+0BCh+var_9C]
0x949DCC: add     esp, 0Ch
0x949DCF: mov     dword ptr [edi+4], 18h
0x949DD6: xor     ebx, ebx
0x949DD8: lea     esi, [esp+0B0h+var_80]
0x949DDC: jmp     short loc_949DE2
0x949DDE: mov     ecx, [esp+0B0h+var_9C]
0x949DE2: test    bl, 1
0x949DE5: movaps  xmm0, xmmword ptr [ecx+60h]
0x949DE9: movaps  [esp+0B0h+var_90], xmm0
0x949DEE: jz      short loc_949DFE
0x949DF0: fld     dword ptr [esp+0B0h+var_90]
0x949DF4: fmul    dword ptr ds:0A30634h
0x949DFA: fstp    dword ptr [esp+0B0h+var_90]
0x949DFE: test    bl, 2
0x949E01: jz      short loc_949E11
0x949E03: fld     dword ptr [esp+0B0h+var_90+4]
0x949E07: fmul    dword ptr ds:0A30634h
0x949E0D: fstp    dword ptr [esp+0B0h+var_90+4]
0x949E11: test    bl, 4
0x949E14: jz      short loc_949E24
0x949E16: fld     dword ptr [esp+0B0h+var_90+8]
0x949E1A: fmul    dword ptr ds:0A30634h
0x949E20: fstp    dword ptr [esp+0B0h+var_90+8]
0x949E24: lea     eax, [esp+0B0h+var_90]
0x949E28: push    eax
0x949E29: lea     eax, [ecx+10h]
0x949E2C: push    eax
0x949E2D: mov     ecx, esi
0x949E2F: call    sub_88FCC0
0x949E34: inc     ebx
0x949E35: add     esi, 10h
0x949E38: cmp     ebx, 8
0x949E3B: jl      short loc_949DDE
0x949E3D: xor     esi, esi
0x949E3F: xor     edx, edx
0x949E41: lea     ecx, [esp+0B0h+var_80]
0x949E45: mov     [esp+0B0h+var_98], edx
0x949E49: mov     [esp+0B0h+var_9C], ecx
0x949E4D: lea     ecx, [ecx+0]
0x949E50: mov     ebx, 1
0x949E55: mov     ecx, esi
0x949E57: mov     [esp+0B0h+var_94], ebx
0x949E5B: shl     ecx, 4
0x949E5E: mov     edi, edi
0x949E60: mov     eax, ebx
0x949E62: xor     eax, edx
0x949E64: cmp     edx, eax
0x949E66: jge     short loc_949E95
0x949E68: mov     edx, [edi]
0x949E6A: mov     ebx, [esp+0B0h+var_9C]
0x949E6E: movaps  xmm0, xmmword ptr [ebx]
0x949E71: mov     ebx, [esp+0B0h+var_94]
0x949E75: add     edx, ecx
0x949E77: movaps  xmmword ptr [edx], xmm0
0x949E7A: mov     edx, [edi]
0x949E7C: add     ecx, 10h
0x949E7F: add     edx, ecx
0x949E81: inc     esi
0x949E82: inc     esi
0x949E83: add     ecx, 10h
0x949E86: shl     eax, 4
0x949E89: movaps  xmm0, [esp+eax+0B0h+var_80]
0x949E8E: movaps  xmmword ptr [edx], xmm0
0x949E91: mov     edx, [esp+0B0h+var_98]
0x949E95: shl     ebx, 1
0x949E97: cmp     ebx, 8
0x949E9A: mov     [esp+0B0h+var_94], ebx
0x949E9E: jl      short loc_949E60
0x949EA0: mov     ecx, [esp+0B0h+var_9C]
0x949EA4: inc     edx
0x949EA5: add     ecx, 10h
0x949EA8: cmp     edx, 8
0x949EAB: mov     [esp+0B0h+var_98], edx
0x949EAF: mov     [esp+0B0h+var_9C], ecx
0x949EB3: jl      short loc_949E50
0x949EB5: pop     edi
0x949EB6: pop     esi
0x949EB7: pop     ebx
0x949EB8: mov     esp, ebp
0x949EBA: pop     ebp
0x949EBB: retn    4
