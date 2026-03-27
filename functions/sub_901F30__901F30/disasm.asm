0x901F30: push    ebp
0x901F31: mov     ebp, esp
0x901F33: and     esp, 0FFFFFFF0h
0x901F36: sub     esp, 24h
0x901F39: push    ebx
0x901F3A: push    esi
0x901F3B: push    edi
0x901F3C: mov     edi, ecx
0x901F3E: mov     ecx, [edi+14h]
0x901F41: xor     eax, eax
0x901F43: xor     esi, esi
0x901F45: test    ecx, ecx
0x901F47: mov     dword ptr [esp+30h+var_18], 0FF7FFFFFh
0x901F4F: mov     dword ptr [esp+30h+var_18+4], eax
0x901F53: jle     short loc_901FC2
0x901F55: mov     ebx, [ebp+arg_0]
0x901F58: mov     eax, [edi+10h]
0x901F5B: mov     ecx, [eax+esi*8]
0x901F5E: mov     edx, [ecx]
0x901F60: lea     eax, [esp+30h+var_18+8]
0x901F64: push    eax
0x901F65: push    ebx
0x901F66: call    dword ptr [edx+24h]
0x901F69: movaps  xmm2, xmmword ptr [ebx]
0x901F6C: movaps  xmm1, [esp+30h+var_18+8]
0x901F71: movaps  xmm0, xmm1
0x901F74: mulps   xmm0, xmm2
0x901F77: movaps  xmm2, xmm0
0x901F7A: shufps  xmm2, xmm0, 55h ; 'U'
0x901F7E: movaps  xmm3, xmm0
0x901F81: addss   xmm2, xmm0
0x901F85: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x901F89: lea     ecx, [esp+30h+var_1C]
0x901F8D: addss   xmm3, xmm2
0x901F91: movss   dword ptr [ecx], xmm3
0x901F95: fld     [esp+30h+var_1C]
0x901F99: fcomp   dword ptr [esp+30h+var_18]
0x901F9D: fnstsw  ax
0x901F9F: test    ah, 41h
0x901FA2: jnz     short loc_901FB6
0x901FA4: mov     edx, [esp+30h+var_1C]
0x901FA8: mov     eax, [ebp+arg_4]
0x901FAB: mov     dword ptr [esp+30h+var_18], edx
0x901FAF: movaps  xmmword ptr [eax], xmm1
0x901FB2: mov     dword ptr [esp+30h+var_18+4], esi
0x901FB6: mov     eax, [edi+14h]
0x901FB9: inc     esi
0x901FBA: cmp     esi, eax
0x901FBC: jl      short loc_901F58
0x901FBE: mov     eax, dword ptr [esp+30h+var_18+4]
0x901FC2: mov     ecx, [ebp+arg_4]
0x901FC5: mov     edx, [ecx+0Ch]
0x901FC8: and     edx, 0C0FFFFFFh
0x901FCE: shl     eax, 8
0x901FD1: pop     edi
0x901FD2: add     edx, eax
0x901FD4: or      edx, 3F000000h
0x901FDA: pop     esi
0x901FDB: mov     [ecx+0Ch], edx
0x901FDE: pop     ebx
0x901FDF: mov     esp, ebp
0x901FE1: pop     ebp
0x901FE2: retn    8
