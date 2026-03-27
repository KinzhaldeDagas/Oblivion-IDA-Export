0x892D90: push    ebp
0x892D91: mov     ebp, esp
0x892D93: and     esp, 0FFFFFFF0h
0x892D96: sub     esp, 0E4h
0x892D9C: mov     eax, ds:0B30AACh
0x892DA1: xor     eax, esp
0x892DA3: mov     [esp+0E4h+var_4], eax
0x892DAA: push    ebx
0x892DAB: push    esi
0x892DAC: mov     esi, ecx
0x892DAE: push    edi
0x892DAF: mov     edi, [esi+364h]
0x892DB5: test    edi, edi
0x892DB7: jz      short loc_892DC2
0x892DB9: mov     eax, [edi+8]
0x892DBC: mov     [esp+0F0h+var_DC], eax
0x892DC0: jmp     short loc_892DCA
0x892DC2: mov     [esp+0F0h+var_DC], 0
0x892DCA: fld     dword ptr [esi+33Ch]
0x892DD0: fmul    qword ptr ds:0A3C770h
0x892DD6: fstp    [esp+0F0h+var_D4]
0x892DDA: call    sub_8913C0
0x892DDF: fadd    qword ptr ds:0A967E8h
0x892DE5: lea     ecx, [esp+0F0h+var_50]
0x892DEC: push    ecx
0x892DED: mov     ecx, edi
0x892DEF: fstp    [esp+0F4h+var_E0]
0x892DF3: fldz
0x892DF5: fst     dword ptr [esp+0F4h+var_D0]
0x892DF9: fld     [esp+0F4h+var_E0]
0x892DFD: fstp    dword ptr [esp+0F4h+var_D0+4]
0x892E01: fst     dword ptr [esp+0F4h+var_D0+8]
0x892E05: fstp    dword ptr [esp+0F4h+var_D0+0Ch]
0x892E09: call    sub_6848D0
0x892E0E: lea     edx, [esp+0F0h+var_D0]
0x892E12: push    edx
0x892E13: lea     eax, [esp+0F4h+var_50]
0x892E1A: push    eax
0x892E1B: mov     ecx, edx
0x892E1D: call    sub_88FE00
0x892E22: lea     ecx, [esp+0F0h+var_90]
0x892E26: push    ecx
0x892E27: mov     ecx, esi
0x892E29: call    sub_891440
0x892E2E: movaps  xmm0, [esp+0F0h+var_90]
0x892E33: movaps  xmm1, [esp+0F0h+var_D0]
0x892E38: mov     ecx, [esp+0F0h+var_DC]
0x892E3C: xor     eax, eax
0x892E3E: addps   xmm0, xmm1
0x892E41: movaps  [esp+0F0h+var_60], xmm0
0x892E49: cmp     [ecx+124h], eax
0x892E4F: mov     [esp+0F0h+var_E0], eax
0x892E53: jle     loc_892FE6
0x892E59: lea     esp, [esp+0]
0x892E60: mov     edx, [ecx+120h]
0x892E66: mov     esi, [edx+eax*4]
0x892E69: test    esi, esi
0x892E6B: jz      loc_892FCB; jumptable 00892E86 cases 4-8,10-12,16,17,20
0x892E71: mov     eax, [esi+1Ch]
0x892E74: and     eax, 3Fh
0x892E77: add     eax, 0FFFFFFFCh; switch 17 cases
0x892E7A: cmp     eax, 10h
0x892E7D: ja      short def_892E86; jumptable 00892E86 default case, cases 9,13-15,18,19
0x892E7F: movzx   eax, ds:byte_893020[eax]
0x892E86: jmp     ds:jpt_892E86[eax*4]; switch jump
0x892E8D: mov     ebx, [esi]; jumptable 00892E86 default case, cases 9,13-15,18,19
0x892E8F: mov     edx, [ebx]
0x892E91: mov     eax, [edx+8]
0x892E94: mov     ecx, ebx
0x892E96: call    eax
0x892E98: cmp     eax, 3
0x892E9B: jz      short loc_892EAB
0x892E9D: cmp     eax, 9
0x892EA0: jz      short loc_892EAB
0x892EA2: cmp     eax, 18h
0x892EA5: jnz     loc_892FCB; jumptable 00892E86 cases 4-8,10-12,16,17,20
0x892EAB: mov     edx, [esi+8]
0x892EAE: fld1
0x892EB0: lea     ecx, [esp+0F0h+var_90]
0x892EB4: fstp    [esp+0F0h+var_6C]
0x892EBB: push    ecx
0x892EBC: xor     edi, edi
0x892EBE: push    edx
0x892EBF: lea     ecx, [esp+0F8h+var_C0]
0x892EC3: mov     [esp+0F8h+var_A0], edi
0x892EC7: mov     [esp+0F8h+var_9C], edi
0x892ECB: call    sub_88FD10
0x892ED0: mov     ecx, [esi+8]
0x892ED3: lea     eax, [esp+0F0h+var_60]
0x892EDA: push    eax
0x892EDB: push    ecx
0x892EDC: lea     ecx, [esp+0F8h+var_B0]
0x892EE0: call    sub_88FD10
0x892EE5: fld1
0x892EE7: mov     [esp+0F0h+var_E1], 0
0x892EEC: mov     edx, [ebx]
0x892EEE: fstp    [esp+0F0h+var_6C]
0x892EF5: fld     [esp+0F0h+var_B8]
0x892EF9: mov     edx, [edx+14h]
0x892EFC: fld     [esp+0F0h+var_D4]
0x892F00: lea     eax, [esp+0F0h+var_80]
0x892F04: fld     st
0x892F06: push    eax
0x892F07: faddp   st(2), st
0x892F09: lea     ecx, [esp+0F4h+var_C0]
0x892F0D: fxch    st(1)
0x892F0F: push    ecx
0x892F10: lea     eax, [esp+0F8h+var_D6]
0x892F14: fstp    [esp+0F8h+var_B8]
0x892F18: push    eax
0x892F19: mov     ecx, ebx
0x892F1B: fadd    [esp+0FCh+var_A8]
0x892F1F: fstp    [esp+0FCh+var_A8]
0x892F23: call    edx
0x892F25: fld1
0x892F27: fcom    [esp+0F0h+var_6C]
0x892F2E: fnstsw  ax
0x892F30: test    ah, 41h
0x892F33: jz      short loc_892F3F
0x892F35: add     edi, 1
0x892F38: cmp     edi, 3
0x892F3B: jnb     short loc_892F44
0x892F3D: jmp     short loc_892EEC
0x892F3F: mov     [esp+0F0h+var_E1], 1
0x892F44: mov     ecx, [esi+8]
0x892F47: fstp    st
0x892F49: lea     eax, [esp+0F0h+var_60]
0x892F50: push    eax
0x892F51: push    ecx
0x892F52: lea     ecx, [esp+0F8h+var_C0]
0x892F56: call    sub_88FD10
0x892F5B: mov     eax, [esi+8]
0x892F5E: lea     edx, [esp+0F0h+var_90]
0x892F62: push    edx
0x892F63: push    eax
0x892F64: lea     ecx, [esp+0F8h+var_B0]
0x892F68: call    sub_88FD10
0x892F6D: cmp     [esp+0F0h+var_E1], 0
0x892F72: jnz     short loc_892FCB; jumptable 00892E86 cases 4-8,10-12,16,17,20
0x892F74: fld1
0x892F76: xor     esi, esi
0x892F78: mov     edx, [ebx]
0x892F7A: fstp    [esp+0F0h+var_6C]
0x892F81: fld     [esp+0F0h+var_B8]
0x892F85: mov     edx, [edx+14h]
0x892F88: fld     [esp+0F0h+var_D4]
0x892F8C: lea     eax, [esp+0F0h+var_80]
0x892F90: fld     st
0x892F92: push    eax
0x892F93: faddp   st(2), st
0x892F95: lea     ecx, [esp+0F4h+var_C0]
0x892F99: fxch    st(1)
0x892F9B: push    ecx
0x892F9C: lea     eax, [esp+0F8h+var_D5]
0x892FA0: fstp    [esp+0F8h+var_B8]
0x892FA4: push    eax
0x892FA5: mov     ecx, ebx
0x892FA7: fadd    [esp+0FCh+var_A8]
0x892FAB: fstp    [esp+0FCh+var_A8]
0x892FAF: call    edx
0x892FB1: fld1
0x892FB3: fcom    [esp+0F0h+var_6C]
0x892FBA: fnstsw  ax
0x892FBC: test    ah, 41h
0x892FBF: jz      short loc_892FFD
0x892FC1: add     esi, 1
0x892FC4: cmp     esi, 3
0x892FC7: jb      short loc_892F78
0x892FC9: fstp    st
0x892FCB: mov     eax, [esp+0F0h+var_E0]; jumptable 00892E86 cases 4-8,10-12,16,17,20
0x892FCF: mov     ecx, [esp+0F0h+var_DC]
0x892FD3: add     eax, 1
0x892FD6: cmp     eax, [ecx+124h]
0x892FDC: mov     [esp+0F0h+var_E0], eax
0x892FE0: jl      loc_892E60
0x892FE6: xor     al, al
0x892FE8: pop     edi
0x892FE9: pop     esi
0x892FEA: pop     ebx
0x892FEB: mov     ecx, [esp+0E4h+var_4]
0x892FF2: xor     ecx, esp
0x892FF4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x892FF9: mov     esp, ebp
0x892FFB: pop     ebp
0x892FFC: retn
0x892FFD: mov     ecx, [esp+0F0h+var_4]
0x893004: fstp    st
0x893006: pop     edi
0x893007: pop     esi
0x893008: pop     ebx
0x893009: xor     ecx, esp
0x89300B: mov     al, 1
0x89300D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x893012: mov     esp, ebp
0x893014: pop     ebp
0x893015: retn
