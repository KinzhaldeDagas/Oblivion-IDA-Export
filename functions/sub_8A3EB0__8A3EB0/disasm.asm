0x8A3EB0: push    ebp
0x8A3EB1: mov     ebp, esp
0x8A3EB3: and     esp, 0FFFFFFF0h
0x8A3EB6: sub     esp, 34h
0x8A3EB9: mov     eax, ds:0B30AACh
0x8A3EBE: xor     eax, esp
0x8A3EC0: mov     [esp+34h+var_4], eax
0x8A3EC4: mov     eax, [ebp+arg_8]
0x8A3EC7: push    ebx
0x8A3EC8: mov     ebx, [ebp+arg_4]
0x8A3ECB: push    esi
0x8A3ECC: mov     esi, [ebp+arg_0]
0x8A3ECF: test    esi, esi
0x8A3ED1: push    edi
0x8A3ED2: mov     dword ptr [esp+40h+var_24], esi
0x8A3ED6: mov     [esp+40h+var_28], eax
0x8A3EDA: jz      loc_8A3FDA
0x8A3EE0: mov     edx, [esi]
0x8A3EE2: mov     eax, [edx+8]
0x8A3EE5: mov     ecx, esi
0x8A3EE7: call    eax
0x8A3EE9: mov     edi, eax
0x8A3EEB: test    edi, edi
0x8A3EED: jz      short loc_8A3F2E
0x8A3EEF: movzx   eax, word ptr [edi+0B6h]
0x8A3EF6: xor     esi, esi
0x8A3EF8: test    eax, eax
0x8A3EFA: jbe     short loc_8A3F2A
0x8A3EFC: cmp     eax, esi
0x8A3EFE: ja      short loc_8A3F04
0x8A3F00: xor     eax, eax
0x8A3F02: jmp     short loc_8A3F0D
0x8A3F04: mov     ecx, [edi+0B0h]
0x8A3F0A: mov     eax, [ecx+esi*4]
0x8A3F0D: mov     edx, [esp+40h+var_28]
0x8A3F11: push    edx
0x8A3F12: push    ebx
0x8A3F13: push    eax
0x8A3F14: call    sub_8A3EB0
0x8A3F19: movzx   eax, word ptr [edi+0B6h]
0x8A3F20: add     esi, 1
0x8A3F23: add     esp, 0Ch
0x8A3F26: cmp     eax, esi
0x8A3F28: ja      short loc_8A3F04
0x8A3F2A: mov     esi, dword ptr [esp+40h+var_24]
0x8A3F2E: mov     esi, [esi+0A8h]
0x8A3F34: test    esi, esi
0x8A3F36: jz      loc_8A3FDA
0x8A3F3C: mov     eax, [esi]
0x8A3F3E: mov     edx, [eax+4]
0x8A3F41: mov     ecx, esi
0x8A3F43: call    edx
0x8A3F45: test    eax, eax
0x8A3F47: jz      short loc_8A3F62
0x8A3F49: lea     esp, [esp+0]
0x8A3F50: cmp     eax, offset dword_BA7D24
0x8A3F55: jz      loc_8A3FEC
0x8A3F5B: mov     eax, [eax+4]
0x8A3F5E: test    eax, eax
0x8A3F60: jnz     short loc_8A3F50
0x8A3F62: xor     al, al
0x8A3F64: neg     al
0x8A3F66: sbb     eax, eax
0x8A3F68: and     eax, esi
0x8A3F6A: jz      short loc_8A3FDA
0x8A3F6C: mov     esi, [eax+10h]
0x8A3F6F: mov     ecx, esi
0x8A3F71: call    sub_535AC0
0x8A3F76: fstp    dword ptr [esp+40h+var_24]
0x8A3F7A: mov     eax, [esi]
0x8A3F7C: mov     edx, [eax+0A8h]
0x8A3F82: lea     ecx, [esp+40h+var_24+4]
0x8A3F86: push    ecx
0x8A3F87: mov     ecx, esi
0x8A3F89: call    edx
0x8A3F8B: mov     eax, [esp+40h+var_28]
0x8A3F8F: fld     dword ptr [eax]
0x8A3F91: xorps   xmm0, xmm0
0x8A3F94: fld     dword ptr [esp+40h+var_24]
0x8A3F98: fld     st
0x8A3F9A: faddp   st(2), st
0x8A3F9C: fxch    st(1)
0x8A3F9E: fstp    [esp+40h+var_28]
0x8A3FA2: fld     [esp+40h+var_28]
0x8A3FA6: fst     dword ptr [eax]
0x8A3FA8: movaps  xmm2, xmmword ptr [ebx]
0x8A3FAB: fdivp   st(1), st
0x8A3FAD: fstp    [esp+40h+var_28]
0x8A3FB1: movss   xmm1, [esp+40h+var_28]
0x8A3FB7: movss   xmm0, xmm1
0x8A3FBB: movaps  xmm1, xmmword ptr ds:0A6DFE0h
0x8A3FC2: shufps  xmm0, xmm0, 0
0x8A3FC6: subps   xmm1, xmm0
0x8A3FC9: mulps   xmm1, xmm2
0x8A3FCC: movaps  xmm2, [esp+40h+var_24+4]
0x8A3FD1: mulps   xmm2, xmm0
0x8A3FD4: addps   xmm1, xmm2
0x8A3FD7: movaps  xmmword ptr [ebx], xmm1
0x8A3FDA: mov     ecx, [esp+40h+var_4]
0x8A3FDE: pop     edi
0x8A3FDF: pop     esi
0x8A3FE0: pop     ebx
0x8A3FE1: xor     ecx, esp
0x8A3FE3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A3FE8: mov     esp, ebp
0x8A3FEA: pop     ebp
0x8A3FEB: retn
0x8A3FEC: mov     al, 1
0x8A3FEE: jmp     loc_8A3F64
