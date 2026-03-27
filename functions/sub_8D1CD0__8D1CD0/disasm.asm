0x8D1CD0: push    ebp
0x8D1CD1: mov     ebp, esp
0x8D1CD3: and     esp, 0FFFFFFF0h
0x8D1CD6: sub     esp, 10h
0x8D1CD9: mov     eax, [ebp+arg_4]
0x8D1CDC: movaps  xmm2, xmmword ptr [eax]
0x8D1CDF: mov     ecx, [ebp+arg_8]
0x8D1CE2: mov     edx, [ebp+arg_0]
0x8D1CE5: movaps  xmm1, xmmword ptr [ecx]
0x8D1CE8: movaps  xmm0, xmmword ptr [edx]
0x8D1CEB: subps   xmm0, xmm2
0x8D1CEE: movaps  xmm3, xmm0
0x8D1CF1: subps   xmm1, xmm2
0x8D1CF4: movaps  xmm0, xmm1
0x8D1CF7: mulps   xmm0, xmm3
0x8D1CFA: movaps  xmm3, xmm0
0x8D1CFD: shufps  xmm3, xmm0, 55h ; 'U'
0x8D1D01: addss   xmm3, xmm0
0x8D1D05: movaps  xmm4, xmm0
0x8D1D08: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8D1D0C: addss   xmm4, xmm3
0x8D1D10: lea     eax, [esp+10h+var_8]
0x8D1D14: movss   dword ptr [eax], xmm4
0x8D1D18: fld     [esp+10h+var_8]
0x8D1D1C: fcomp   dword ptr ds:0A2FAA8h
0x8D1D22: movaps  xmm0, xmm1
0x8D1D25: mulps   xmm0, xmm1
0x8D1D28: movaps  xmm3, xmm0
0x8D1D2B: shufps  xmm3, xmm0, 55h ; 'U'
0x8D1D2F: fnstsw  ax
0x8D1D31: movaps  xmm4, xmm0
0x8D1D34: addss   xmm3, xmm0
0x8D1D38: test    ah, 41h
0x8D1D3B: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8D1D3F: lea     ecx, [esp+10h+var_4]
0x8D1D43: addss   xmm4, xmm3
0x8D1D47: movss   dword ptr [ecx], xmm4
0x8D1D4B: jp      short loc_8D1D5C
0x8D1D4D: mov     edx, [ebp+arg_C]
0x8D1D50: movaps  xmmword ptr [edx], xmm2
0x8D1D53: mov     eax, 8
0x8D1D58: mov     esp, ebp
0x8D1D5A: pop     ebp
0x8D1D5B: retn
0x8D1D5C: fld     [esp+10h+var_8]
0x8D1D60: fcomp   [esp+10h+var_4]
0x8D1D64: fnstsw  ax
0x8D1D66: test    ah, 1
0x8D1D69: jnz     short loc_8D1D7D
0x8D1D6B: mov     eax, [ebp+arg_C]
0x8D1D6E: addps   xmm2, xmm1
0x8D1D71: movaps  xmmword ptr [eax], xmm2
0x8D1D74: mov     eax, 4
0x8D1D79: mov     esp, ebp
0x8D1D7B: pop     ebp
0x8D1D7C: retn
0x8D1D7D: fld     [esp+10h+var_8]
0x8D1D81: mov     ecx, [ebp+arg_C]
0x8D1D84: fdiv    [esp+10h+var_4]
0x8D1D88: xor     eax, eax
0x8D1D8A: fstp    [esp+10h+var_4]
0x8D1D8E: movss   xmm0, [esp+10h+var_4]
0x8D1D94: movaps  xmm3, xmm0
0x8D1D97: shufps  xmm3, xmm0, 0
0x8D1D9B: mulps   xmm3, xmm1
0x8D1D9E: addps   xmm2, xmm3
0x8D1DA1: movaps  xmmword ptr [ecx], xmm2
0x8D1DA4: mov     esp, ebp
0x8D1DA6: pop     ebp
0x8D1DA7: retn
