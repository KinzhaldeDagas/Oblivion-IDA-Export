0x916C00: push    ebp
0x916C01: mov     ebp, esp
0x916C03: and     esp, 0FFFFFFF0h
0x916C06: sub     esp, 14h
0x916C09: push    ebx
0x916C0A: mov     ebx, [ecx+30h]
0x916C0D: push    esi
0x916C0E: push    edi
0x916C0F: mov     edi, [ecx+34h]
0x916C12: mov     [esp+20h+var_14], 0FF7FFFFFh
0x916C1A: movss   xmm4, [esp+20h+var_14]
0x916C20: shl     edi, 2
0x916C23: xor     eax, eax
0x916C25: test    edi, edi
0x916C27: shufps  xmm4, xmm4, 0
0x916C2B: mov     esi, ebx
0x916C2D: jle     loc_916D5D
0x916C33: mov     ecx, [ebp+arg_0]
0x916C36: mov     edx, [ecx]
0x916C38: mov     [esp+20h+var_14], edx
0x916C3C: mov     edx, [ecx+4]
0x916C3F: movss   xmm3, [esp+20h+var_14]
0x916C45: mov     ecx, [ecx+8]
0x916C48: mov     [esp+20h+var_14], edx
0x916C4C: movss   xmm2, [esp+20h+var_14]
0x916C52: mov     [esp+20h+var_14], ecx
0x916C56: movss   xmm1, [esp+20h+var_14]
0x916C5C: shufps  xmm1, xmm1, 0
0x916C60: shufps  xmm2, xmm2, 0
0x916C64: shufps  xmm3, xmm3, 0
0x916C68: mov     ecx, 3
0x916C6D: lea     ecx, [ecx+0]
0x916C70: movaps  xmm0, xmmword ptr [esi+20h]
0x916C74: movaps  xmm5, xmm1
0x916C77: mulps   xmm5, xmm0
0x916C7A: movaps  xmm0, xmmword ptr [esi+10h]
0x916C7E: movaps  xmm6, xmm2
0x916C81: mulps   xmm6, xmm0
0x916C84: movaps  xmm0, xmmword ptr [esi]
0x916C87: movaps  xmm7, xmm3
0x916C8A: mulps   xmm7, xmm0
0x916C8D: movaps  xmm0, xmm7
0x916C90: addps   xmm0, xmm6
0x916C93: addps   xmm0, xmm5
0x916C96: movaps  xmm5, xmm4
0x916C99: cmpltps xmm5, xmm0
0x916C9D: movmskps edx, xmm5
0x916CA0: test    edx, edx
0x916CA2: movaps  [esp+20h+var_10], xmm0
0x916CA7: jz      loc_916D4C
0x916CAD: cmp     edx, 0Eh; switch 15 cases
0x916CB0: ja      short def_916CB9; jumptable 00916CB9 default case, cases 3,5-7,9-12
0x916CB2: movzx   edx, ds:byte_916DB4[edx]
0x916CB9: jmp     ds:jpt_916CB9[edx*4]; switch jump
0x916CC0: fld     dword ptr [esp+20h+var_10]; jumptable 00916CB9 default case, cases 3,5-7,9-12
0x916CC4: fcomp   dword ptr [esp+20h+var_10+4]
0x916CC8: fnstsw  ax
0x916CCA: test    ah, 41h
0x916CCD: jnz     short loc_916CF6; jumptable 00916CB9 case 14
0x916CCF: fld     dword ptr [esp+20h+var_10]; jumptable 00916CB9 case 13
0x916CD3: fcomp   dword ptr [esp+20h+var_10+8]
0x916CD7: fnstsw  ax
0x916CD9: test    ah, 41h
0x916CDC: jnz     short loc_916D1D
0x916CDE: fld     dword ptr [esp+20h+var_10]
0x916CE2: fcomp   dword ptr [esp+20h+var_10+0Ch]
0x916CE6: fnstsw  ax
0x916CE8: test    ah, 41h
0x916CEB: jnz     short loc_916D35; jumptable 00916CB9 case 8
0x916CED: fld     dword ptr [esp+20h+var_10]; jumptable 00916CB9 cases 0,1
0x916CF1: lea     eax, [ecx-3]
0x916CF4: jmp     short loc_916D3B
0x916CF6: fld     dword ptr [esp+20h+var_10+4]; jumptable 00916CB9 case 14
0x916CFA: fcomp   dword ptr [esp+20h+var_10+8]
0x916CFE: fnstsw  ax
0x916D00: test    ah, 41h
0x916D03: jnz     short loc_916D1D
0x916D05: fld     dword ptr [esp+20h+var_10+4]
0x916D09: fcomp   dword ptr [esp+20h+var_10+0Ch]
0x916D0D: fnstsw  ax
0x916D0F: test    ah, 41h
0x916D12: jnz     short loc_916D35; jumptable 00916CB9 case 8
0x916D14: fld     dword ptr [esp+20h+var_10+4]; jumptable 00916CB9 case 2
0x916D18: lea     eax, [ecx-2]
0x916D1B: jmp     short loc_916D3B
0x916D1D: fld     dword ptr [esp+20h+var_10+8]
0x916D21: fcomp   dword ptr [esp+20h+var_10+0Ch]
0x916D25: fnstsw  ax
0x916D27: test    ah, 41h
0x916D2A: jnz     short loc_916D35; jumptable 00916CB9 case 8
0x916D2C: fld     dword ptr [esp+20h+var_10+8]; jumptable 00916CB9 case 4
0x916D30: lea     eax, [ecx-1]
0x916D33: jmp     short loc_916D3B
0x916D35: fld     dword ptr [esp+20h+var_10+0Ch]; jumptable 00916CB9 case 8
0x916D39: mov     eax, ecx
0x916D3B: fstp    [esp+20h+var_14]
0x916D3F: movss   xmm0, [esp+20h+var_14]
0x916D45: shufps  xmm0, xmm0, 0
0x916D49: movaps  xmm4, xmm0
0x916D4C: add     ecx, 4
0x916D4F: lea     edx, [ecx-3]
0x916D52: add     esi, 30h ; '0'
0x916D55: cmp     edx, edi
0x916D57: jl      loc_916C70
0x916D5D: mov     esi, [ebp+arg_4]
0x916D60: mov     ecx, eax
0x916D62: sar     ecx, 2
0x916D65: lea     ecx, [ecx+ecx*2]
0x916D68: shl     ecx, 4
0x916D6B: add     ecx, ebx
0x916D6D: mov     edx, eax
0x916D6F: and     edx, 3
0x916D72: mov     edi, [ecx+edx*4]
0x916D75: mov     [esi], edi
0x916D77: mov     edi, [ecx+edx*4+10h]
0x916D7B: mov     [esi+4], edi
0x916D7E: mov     ecx, [ecx+edx*4+20h]
0x916D82: mov     [esi+8], ecx
0x916D85: or      eax, 3F000000h
0x916D8A: pop     edi
0x916D8B: mov     [esi+0Ch], eax
0x916D8E: pop     esi
0x916D8F: pop     ebx
0x916D90: mov     esp, ebp
0x916D92: pop     ebp
0x916D93: retn    8
