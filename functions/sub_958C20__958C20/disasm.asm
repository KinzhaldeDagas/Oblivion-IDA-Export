0x958C20: push    ebp
0x958C21: mov     ebp, esp
0x958C23: and     esp, 0FFFFFFF0h
0x958C26: sub     esp, 34h
0x958C29: mov     edx, [ebp+arg_0]
0x958C2C: push    ebx
0x958C2D: push    esi
0x958C2E: mov     esi, [ebp+arg_8]
0x958C31: push    edi
0x958C32: mov     edi, [edx+4]
0x958C35: xor     eax, eax
0x958C37: test    edi, edi
0x958C39: mov     [esp+40h+var_14], ecx
0x958C3D: jle     loc_958DE0
0x958C43: test    esi, esi
0x958C45: jz      loc_958E38
0x958C4B: mov     ecx, [edx]
0x958C4D: mov     edx, [ecx+eax*4]
0x958C50: lea     ebx, [eax+1]
0x958C53: cmp     ebx, edi
0x958C55: mov     [esp+40h+var_18], ebx
0x958C59: jge     short loc_958C65
0x958C5B: mov     eax, [ecx+eax*4+4]
0x958C5F: mov     [esp+40h+var_2C], eax
0x958C63: jmp     short loc_958C6B
0x958C65: mov     ecx, [ecx]
0x958C67: mov     [esp+40h+var_2C], ecx
0x958C6B: mov     [edx+20h], edx
0x958C6E: fld     dword ptr ds:0A2FAA8h
0x958C74: mov     [edx+30h], edx
0x958C77: mov     [edx+40h], edx
0x958C7A: lea     eax, [edx+34h]
0x958C7D: mov     [edx+28h], eax
0x958C80: lea     edi, [edx+14h]
0x958C83: mov     [edx+38h], edi
0x958C86: lea     ecx, [edx+24h]
0x958C89: mov     [edx+18h], ecx
0x958C8C: mov     ebx, [esi+4]
0x958C8F: mov     ebx, [ebx]
0x958C91: mov     [edi], ebx
0x958C93: mov     ebx, [esi]
0x958C95: mov     [ecx], ebx
0x958C97: mov     ebx, [ebp+arg_C]
0x958C9A: mov     ebx, [ebx]
0x958C9C: mov     [eax], ebx
0x958C9E: mov     ebx, [esp+40h+var_2C]
0x958CA2: mov     [esi+8], edi
0x958CA5: mov     [edx+1Ch], esi
0x958CA8: mov     [ebx+2Ch], eax
0x958CAB: mov     ecx, [ecx]
0x958CAD: mov     edi, [edi]
0x958CAF: mov     eax, [eax]
0x958CB1: add     ebx, 24h ; '$'
0x958CB4: mov     [edx+3Ch], ebx
0x958CB7: movaps  xmm1, xmmword ptr [ecx]
0x958CBA: movaps  xmm2, xmmword ptr [eax]
0x958CBD: movaps  xmm0, xmmword ptr [edi]
0x958CC0: subps   xmm0, xmm1
0x958CC3: subps   xmm1, xmm2
0x958CC6: movaps  xmm2, xmm1
0x958CC9: shufps  xmm2, xmm1, 0C9h ; 'É'
0x958CCD: movaps  xmm3, xmm0
0x958CD0: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x958CD4: mulps   xmm3, xmm2
0x958CD7: movaps  xmm2, xmm1
0x958CDA: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x958CDE: movaps  xmm1, xmm0
0x958CE1: shufps  xmm1, xmm0, 0C9h ; 'É'
0x958CE5: mulps   xmm1, xmm2
0x958CE8: subps   xmm1, xmm3
0x958CEB: movaps  xmm0, xmm1
0x958CEE: mulps   xmm0, xmm1
0x958CF1: movaps  xmm2, xmm0
0x958CF4: shufps  xmm2, xmm0, 55h ; 'U'
0x958CF8: movaps  xmm3, xmm0
0x958CFB: addss   xmm2, xmm0
0x958CFF: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x958D03: lea     ecx, [esp+40h+var_28]
0x958D07: addss   xmm3, xmm2
0x958D0B: movss   dword ptr [ecx], xmm3
0x958D0F: fld     [esp+40h+var_28]
0x958D13: fucompp
0x958D15: movaps  xmmword ptr [edx], xmm1
0x958D18: fnstsw  ax
0x958D1A: test    ah, 44h
0x958D1D: jnp     loc_958E38
0x958D23: movaps  xmm2, xmm0
0x958D26: shufps  xmm2, xmm0, 55h ; 'U'
0x958D2A: addss   xmm2, xmm0
0x958D2E: movaps  xmm3, xmm0
0x958D31: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x958D35: movaps  xmm0, xmm3
0x958D38: addss   xmm0, xmm2
0x958D3C: movaps  [esp+40h+var_10], xmm0
0x958D41: rsqrtss xmm2, xmm0
0x958D45: movss   dword ptr [esp+40h+var_10], xmm2
0x958D4B: movaps  xmm2, [esp+40h+var_10]
0x958D50: mulss   xmm0, xmm2
0x958D54: mulss   xmm0, xmm2
0x958D58: mov     [esp+40h+var_24], 40400000h
0x958D60: movss   xmm3, [esp+40h+var_24]
0x958D66: subss   xmm3, xmm0
0x958D6A: mov     [esp+40h+var_20], 3F000000h
0x958D72: movss   xmm0, [esp+40h+var_20]
0x958D78: mulss   xmm0, xmm2
0x958D7C: mulss   xmm0, xmm3
0x958D80: movaps  xmm2, xmm0
0x958D83: shufps  xmm2, xmm0, 0
0x958D87: movaps  xmm0, xmm2
0x958D8A: mulps   xmm0, xmm1
0x958D8D: movaps  xmmword ptr [edx], xmm0
0x958D90: movaps  xmm1, xmmword ptr [edi]
0x958D93: mulps   xmm0, xmm1
0x958D96: movaps  xmm1, xmm0
0x958D99: shufps  xmm1, xmm0, 55h ; 'U'
0x958D9D: movaps  xmm2, xmm0
0x958DA0: lea     eax, [esp+40h+var_1C]
0x958DA4: addss   xmm1, xmm0
0x958DA8: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x958DAC: addss   xmm2, xmm1
0x958DB0: movss   dword ptr [eax], xmm2
0x958DB4: mov     ecx, [esp+40h+var_1C]
0x958DB8: mov     [edx+10h], ecx
0x958DBB: mov     edx, [esi+4]
0x958DBE: mov     eax, [edx]
0x958DC0: mov     esi, [eax+30h]
0x958DC3: mov     edx, [ebp+arg_0]
0x958DC6: mov     dword ptr [eax+30h], 0
0x958DCD: mov     eax, [esp+40h+var_18]
0x958DD1: mov     edi, [edx+4]
0x958DD4: cmp     eax, edi
0x958DD6: jl      loc_958C43
0x958DDC: mov     ecx, [esp+40h+var_14]
0x958DE0: mov     edx, [ecx+10h]
0x958DE3: xor     eax, eax
0x958DE5: test    edx, edx
0x958DE7: jle     short loc_958E01
0x958DE9: lea     edx, [ecx+0FB4h]
0x958DEF: nop
0x958DF0: mov     dword ptr [edx], 0
0x958DF6: mov     edi, [ecx+10h]
0x958DF9: inc     eax
0x958DFA: add     edx, 50h ; 'P'
0x958DFD: cmp     eax, edi
0x958DFF: jl      short loc_958DF0
0x958E01: mov     edx, [ecx+8]
0x958E04: xor     eax, eax
0x958E06: test    edx, edx
0x958E08: jle     short loc_958E21
0x958E0A: lea     edx, [ecx+50h]
0x958E0D: lea     ecx, [ecx+0]
0x958E10: mov     dword ptr [edx], 0
0x958E16: mov     edi, [ecx+8]
0x958E19: inc     eax
0x958E1A: add     edx, 40h ; '@'
0x958E1D: cmp     eax, edi
0x958E1F: jl      short loc_958E10
0x958E21: mov     edi, [ebp+arg_8]
0x958E24: xor     eax, eax
0x958E26: cmp     edi, esi
0x958E28: setz    al
0x958E2B: dec     eax
0x958E2C: and     eax, 2
0x958E2F: pop     edi
0x958E30: pop     esi
0x958E31: pop     ebx
0x958E32: mov     esp, ebp
0x958E34: pop     ebp
0x958E35: retn    10h
0x958E38: pop     edi
0x958E39: pop     esi
0x958E3A: mov     eax, 2
0x958E3F: pop     ebx
0x958E40: mov     esp, ebp
0x958E42: pop     ebp
0x958E43: retn    10h
