0x535DD0: push    ebp
0x535DD1: mov     ebp, esp
0x535DD3: and     esp, 0FFFFFFF0h
0x535DD6: sub     esp, 164h
0x535DDC: mov     eax, ds:0B30AACh
0x535DE1: xor     eax, esp
0x535DE3: mov     [esp+164h+var_4], eax
0x535DEA: mov     edx, [ebp+arg_4]
0x535DED: push    ebx
0x535DEE: xor     ebx, ebx
0x535DF0: cmp     ds:0B36598h, ebx
0x535DF6: push    esi
0x535DF7: push    edi
0x535DF8: jnz     short loc_535E06
0x535DFA: cmp     ds:0B36594h, ebx
0x535E00: jz      loc_53604B
0x535E06: mov     eax, offset dword_B36594
0x535E0B: jmp     short loc_535E10
0x535E0D: align 10h
0x535E10: mov     ecx, [eax+4]
0x535E13: test    ecx, ecx
0x535E15: jnz     short loc_535E1B
0x535E17: cmp     [eax], ecx
0x535E19: jz      short loc_535E32
0x535E1B: test    ebx, ebx
0x535E1D: jnz     short loc_535E3A
0x535E1F: mov     eax, [eax]
0x535E21: test    eax, eax
0x535E23: jz      short loc_535E2C
0x535E25: cmp     [eax+4], edx
0x535E28: jnz     short loc_535E2C
0x535E2A: mov     ebx, eax
0x535E2C: mov     eax, ecx
0x535E2E: test    eax, eax
0x535E30: jnz     short loc_535E10
0x535E32: test    ebx, ebx
0x535E34: jz      loc_53604B
0x535E3A: test    edx, edx
0x535E3C: jz      loc_53604B
0x535E42: push    edx
0x535E43: call    sub_47FAC0
0x535E48: add     esp, 4
0x535E4B: test    eax, eax
0x535E4D: jz      loc_53604B
0x535E53: mov     esi, [eax+10h]
0x535E56: test    esi, esi
0x535E58: jz      loc_53604B
0x535E5E: fld     dword ptr [ebx+8]
0x535E61: mov     eax, [ebp+arg_0]
0x535E64: movaps  xmm0, xmmword ptr [eax]
0x535E67: fstp    dword ptr [esp+170h+var_158]
0x535E6B: push    offset flt_B2F080
0x535E70: lea     ecx, [esp+174h+var_110]
0x535E74: movaps  [esp+174h+var_E0], xmm0
0x535E7C: call    sub_8B1DD0
0x535E81: mov     edx, [esi]
0x535E83: mov     edx, [edx+0ACh]
0x535E89: lea     eax, [esp+170h+var_90]
0x535E90: push    eax
0x535E91: mov     ecx, esi
0x535E93: call    edx
0x535E95: lea     eax, [esp+170h+var_90]
0x535E9C: push    eax
0x535E9D: lea     ecx, [esp+174h+var_D0]
0x535EA4: call    sub_8B1F10
0x535EA9: lea     ecx, [esp+170h+var_110]
0x535EAD: push    ecx
0x535EAE: lea     edx, [esp+174h+var_D0]
0x535EB5: push    edx
0x535EB6: lea     ecx, [esp+178h+var_50]
0x535EBD: call    sub_8B1F70
0x535EC2: movss   xmm1, dword ptr ds:0B370D8h
0x535ECA: mov     eax, [esi]
0x535ECC: mov     edx, [eax+0A4h]
0x535ED2: xorps   xmm0, xmm0
0x535ED5: movss   xmm0, xmm1
0x535ED9: movaps  xmm1, xmmword ptr [esp+170h+var_24+4]
0x535EE1: lea     ecx, [esp+170h+var_158+8]
0x535EE5: shufps  xmm0, xmm0, 0
0x535EE9: push    ecx
0x535EEA: mulps   xmm0, xmm1
0x535EED: mov     ecx, esi
0x535EEF: movaps  [esp+174h+anonymous_0], xmm0
0x535EF4: call    edx
0x535EF6: fld     dword ptr [esp+170h+var_158]
0x535EFA: fsub    dword ptr ds:0B370D8h
0x535F00: movss   xmm1, dword ptr [esp+170h+var_158]
0x535F06: fld1
0x535F08: xorps   xmm0, xmm0
0x535F0B: fdivrp  st(1), st
0x535F0D: movss   xmm0, xmm1
0x535F11: movaps  xmm1, [esp+170h+var_158+8]
0x535F16: shufps  xmm0, xmm0, 0
0x535F1A: mulps   xmm0, xmm1
0x535F1D: xorps   xmm1, xmm1
0x535F20: movaps  [esp+170h+var_158+8], xmm0
0x535F25: subps   xmm0, [esp+170h+anonymous_0]
0x535F2A: lea     eax, [esp+170h+var_120]
0x535F2E: push    eax
0x535F2F: fstp    dword ptr [esp+174h+var_158+4]
0x535F33: movss   xmm2, dword ptr [esp+174h+var_158+4]
0x535F39: movss   xmm1, xmm2
0x535F3D: movaps  xmm2, xmm1
0x535F40: shufps  xmm2, xmm1, 0
0x535F44: mulps   xmm2, xmm0
0x535F47: movaps  [esp+174h+var_120], xmm2
0x535F4C: mov     ecx, [esi+8]
0x535F4F: call    sub_8A9C60
0x535F54: movaps  xmm1, [esp+170h+var_158+8]
0x535F59: subps   xmm1, [esp+170h+anonymous_0]
0x535F5E: movss   xmm4, dword ptr ds:0A46C30h
0x535F66: movaps  xmm0, xmm1
0x535F69: mulps   xmm0, xmm1
0x535F6C: movaps  xmm2, xmm0
0x535F6F: shufps  xmm2, xmm0, 55h ; 'U'
0x535F73: addss   xmm2, xmm0
0x535F77: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x535F7B: addss   xmm0, xmm2
0x535F7F: movaps  xmm2, xmm0
0x535F82: rsqrtss xmm2, xmm2
0x535F86: mulss   xmm0, xmm2
0x535F8A: mulss   xmm0, xmm2
0x535F8E: xorps   xmm3, xmm3
0x535F91: movss   xmm3, xmm4
0x535F95: movss   xmm4, dword ptr ds:0A3D65Ch
0x535F9D: subss   xmm3, xmm0
0x535FA1: xorps   xmm0, xmm0
0x535FA4: movss   xmm0, xmm4
0x535FA8: mulss   xmm0, xmm2
0x535FAC: mulss   xmm0, xmm3
0x535FB0: movss   xmm3, dword ptr ds:0A35AA4h
0x535FB8: xorps   xmm2, xmm2
0x535FBB: shufps  xmm0, xmm0, 0
0x535FBF: movss   xmm2, xmm3
0x535FC3: mulps   xmm0, xmm1
0x535FC6: shufps  xmm2, xmm2, 0
0x535FCA: mulps   xmm0, xmm2
0x535FCD: movaps  xmmword ptr [esp+170h+var_148+8], xmm0
0x535FD2: mov     eax, [esi+8]
0x535FD5: test    eax, eax
0x535FD7: jz      short loc_535FE3
0x535FD9: mov     eax, [eax+50h]
0x535FDC: add     eax, 0D0h ; 'Ð'
0x535FE1: jmp     short loc_535FE8
0x535FE3: mov     eax, offset stru_BA7A40
0x535FE8: movaps  xmm1, xmmword ptr [eax]
0x535FEB: addps   xmm1, xmm0
0x535FEE: movaps  xmmword ptr [esp+170h+var_148+8], xmm1
0x535FF3: mov     edi, [esi+8]
0x535FF6: test    edi, edi
0x535FF8: jz      short loc_536020
0x535FFA: mov     ecx, esi
0x535FFC: call    sub_89F570
0x536001: mov     ecx, edi
0x536003: call    sub_8A6410
0x536008: mov     edi, [edi+50h]
0x53600B: mov     edx, [edi]
0x53600D: mov     edx, [edx+54h]
0x536010: lea     eax, [esp+170h+var_148+8]
0x536014: push    eax
0x536015: mov     ecx, edi
0x536017: call    edx
0x536019: mov     ecx, esi
0x53601B: call    sub_89F570
0x536020: fld     dword ptr [esp+170h+var_158]
0x536024: fsub    dword ptr ds:0B370D8h
0x53602A: add     dword ptr [ebx+0Ch], 0FFFFFFFFh
0x53602E: cmp     dword ptr [ebx+0Ch], 0
0x536032: fstp    dword ptr [ebx+8]
0x536035: jg      short loc_53604B
0x536037: push    ebx
0x536038: call    FormHeapFree
0x53603D: add     esp, 4
0x536040: push    ebx
0x536041: mov     ecx, offset dword_B36594
0x536046: call    BSSimpleList_Remove
0x53604B: mov     ecx, [esp+170h+var_4]
0x536052: pop     edi
0x536053: pop     esi
0x536054: pop     ebx
0x536055: xor     ecx, esp
0x536057: call    @__security_check_cookie@4; __security_check_cookie(x)
0x53605C: mov     esp, ebp
0x53605E: pop     ebp
0x53605F: retn
