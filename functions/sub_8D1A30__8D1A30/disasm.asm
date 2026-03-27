0x8D1A30: push    ebp
0x8D1A31: mov     ebp, esp
0x8D1A33: and     esp, 0FFFFFFF0h
0x8D1A36: sub     esp, 28h
0x8D1A39: push    esi
0x8D1A3A: push    edi
0x8D1A3B: mov     ecx, [ebp+arg_4]
0x8D1A3E: movaps  xmm1, xmmword ptr [ecx]
0x8D1A41: mov     eax, [ebp+arg_0]
0x8D1A44: movaps  xmm4, xmmword ptr [eax]
0x8D1A47: mov     edx, [ebp+arg_8]
0x8D1A4A: movaps  xmm2, xmmword ptr [edx]
0x8D1A4D: subps   xmm2, xmm4
0x8D1A50: mov     esi, [ebp+arg_C]
0x8D1A53: movaps  xmm3, xmmword ptr [esi]
0x8D1A56: movaps  xmm0, xmm1
0x8D1A59: mulps   xmm0, xmm3
0x8D1A5C: movaps  xmm5, xmm0
0x8D1A5F: shufps  xmm5, xmm0, 55h ; 'U'
0x8D1A63: addss   xmm5, xmm0
0x8D1A67: movaps  xmm6, xmm0
0x8D1A6A: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8D1A6E: addss   xmm6, xmm5
0x8D1A72: lea     eax, [esp+30h+var_1C]
0x8D1A76: movss   dword ptr [eax], xmm6
0x8D1A7A: movaps  xmm0, xmm1
0x8D1A7D: mulps   xmm0, xmm2
0x8D1A80: movaps  xmm5, xmm0
0x8D1A83: shufps  xmm5, xmm0, 55h ; 'U'
0x8D1A87: addss   xmm5, xmm0
0x8D1A8B: movaps  xmm6, xmm0
0x8D1A8E: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8D1A92: addss   xmm6, xmm5
0x8D1A96: movaps  xmm0, xmm3
0x8D1A99: mulps   xmm0, xmm2
0x8D1A9C: movaps  xmm2, xmm0
0x8D1A9F: shufps  xmm2, xmm0, 55h ; 'U'
0x8D1AA3: addss   xmm2, xmm0
0x8D1AA7: movaps  xmm5, xmm0
0x8D1AAA: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8D1AAE: addss   xmm5, xmm2
0x8D1AB2: lea     eax, [esp+30h+var_8]
0x8D1AB6: movss   dword ptr [eax], xmm5
0x8D1ABA: movaps  xmm0, xmm1
0x8D1ABD: mulps   xmm0, xmm1
0x8D1AC0: movaps  xmm2, xmm0
0x8D1AC3: shufps  xmm2, xmm0, 55h ; 'U'
0x8D1AC7: addss   xmm2, xmm0
0x8D1ACB: movaps  xmm5, xmm0
0x8D1ACE: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8D1AD2: movaps  xmm0, xmm3
0x8D1AD5: mulps   xmm0, xmm3
0x8D1AD8: addss   xmm5, xmm2
0x8D1ADC: lea     ecx, [esp+30h+var_4]
0x8D1AE0: movaps  xmm2, xmm0
0x8D1AE3: shufps  xmm2, xmm0, 55h ; 'U'
0x8D1AE7: movaps  xmm3, xmm0
0x8D1AEA: movss   dword ptr [ecx], xmm6
0x8D1AEE: addss   xmm2, xmm0
0x8D1AF2: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8D1AF6: lea     eax, [esp+30h+var_18]
0x8D1AFA: addss   xmm3, xmm2
0x8D1AFE: movss   dword ptr [eax], xmm3
0x8D1B02: fld     [esp+30h+var_18]
0x8D1B06: lea     ecx, [esp+30h+var_14]
0x8D1B0A: movss   dword ptr [ecx], xmm5
0x8D1B0E: fmul    [esp+30h+var_14]
0x8D1B12: fstp    [esp+30h+var_C]
0x8D1B16: fld     [esp+30h+var_1C]
0x8D1B1A: fmul    [esp+30h+var_1C]
0x8D1B1E: fstp    [esp+30h+var_10]
0x8D1B22: fld     [esp+30h+var_C]
0x8D1B26: fsub    [esp+30h+var_10]
0x8D1B2A: fabs
0x8D1B2C: fstp    [esp+30h+var_24]
0x8D1B30: fld     [esp+30h+var_18]
0x8D1B34: fmul    [esp+30h+var_4]
0x8D1B38: fld     [esp+30h+var_8]
0x8D1B3C: fmul    [esp+30h+var_1C]
0x8D1B40: fsubp   st(1), st
0x8D1B42: fst     [esp+30h+var_20]
0x8D1B46: fmul    [esp+30h+var_24]
0x8D1B4A: fld     [esp+30h+var_24]
0x8D1B4E: fmul    [esp+30h+var_24]
0x8D1B52: fcompp
0x8D1B54: fnstsw  ax
0x8D1B56: test    ah, 41h
0x8D1B59: jnp     short loc_8D1B9E
0x8D1B5B: fld     [esp+30h+var_20]
0x8D1B5F: fcomp   dword ptr ds:0A2FAA8h
0x8D1B65: fnstsw  ax
0x8D1B67: test    ah, 41h
0x8D1B6A: jp      short loc_8D1B79
0x8D1B6C: fld     dword ptr ds:0A2FAA8h
0x8D1B72: mov     ecx, 2
0x8D1B77: jmp     short loc_8D1BA9
0x8D1B79: fld     [esp+30h+var_10]
0x8D1B7D: fadd    [esp+30h+var_C]
0x8D1B81: fmul    dword ptr ds:0A99EFCh
0x8D1B87: fcomp   [esp+30h+var_24]
0x8D1B8B: fnstsw  ax
0x8D1B8D: test    ah, 5
0x8D1B90: jp      short loc_8D1B9E
0x8D1B92: fld     [esp+30h+var_20]
0x8D1B96: xor     ecx, ecx
0x8D1B98: fdiv    [esp+30h+var_24]
0x8D1B9C: jmp     short loc_8D1BA9
0x8D1B9E: fld     dword ptr ds:0A2F948h
0x8D1BA4: mov     ecx, 1
0x8D1BA9: fld     [esp+30h+var_1C]
0x8D1BAD: fmul    st, st(1)
0x8D1BAF: fsub    [esp+30h+var_8]
0x8D1BB3: fst     [esp+30h+var_24]
0x8D1BB7: fcomp   [esp+30h+var_18]
0x8D1BBB: fnstsw  ax
0x8D1BBD: test    ah, 1
0x8D1BC0: jnz     short loc_8D1BD1
0x8D1BC2: mov     [esp+30h+var_24], 3F800000h
0x8D1BCA: mov     ecx, 4
0x8D1BCF: jmp     short loc_8D1BEF
0x8D1BD1: fld     [esp+30h+var_24]
0x8D1BD5: fcomp   dword ptr ds:0A2FAA8h
0x8D1BDB: fnstsw  ax
0x8D1BDD: test    ah, 41h
0x8D1BE0: jp      short loc_8D1C3D
0x8D1BE2: mov     [esp+30h+var_24], 0
0x8D1BEA: mov     ecx, 8
0x8D1BEF: fstp    st
0x8D1BF1: fld     [esp+30h+var_1C]
0x8D1BF5: fmul    [esp+30h+var_24]
0x8D1BF9: fadd    [esp+30h+var_4]
0x8D1BFD: fst     [esp+30h+var_20]
0x8D1C01: fcomp   dword ptr ds:0A2FAA8h
0x8D1C07: fnstsw  ax
0x8D1C09: test    ah, 41h
0x8D1C0C: jp      short loc_8D1C19
0x8D1C0E: fld     dword ptr ds:0A2FAA8h
0x8D1C14: or      ecx, 2
0x8D1C17: jmp     short loc_8D1C49
0x8D1C19: fld     [esp+30h+var_20]
0x8D1C1D: fcomp   [esp+30h+var_14]
0x8D1C21: fnstsw  ax
0x8D1C23: test    ah, 1
0x8D1C26: jnz     short loc_8D1C33
0x8D1C28: fld     dword ptr ds:0A2F948h
0x8D1C2E: or      ecx, 1
0x8D1C31: jmp     short loc_8D1C49
0x8D1C33: fld     [esp+30h+var_20]
0x8D1C37: fdiv    [esp+30h+var_14]
0x8D1C3B: jmp     short loc_8D1C49
0x8D1C3D: fld     [esp+30h+var_24]
0x8D1C41: fdiv    [esp+30h+var_18]
0x8D1C45: fstp    [esp+30h+var_24]
0x8D1C49: mov     eax, [ebp+arg_10]
0x8D1C4C: fstp    [esp+30h+var_4]
0x8D1C50: movss   xmm0, [esp+30h+var_4]
0x8D1C56: mov     edi, [esp+30h+var_24]
0x8D1C5A: movaps  xmm2, xmm0
0x8D1C5D: shufps  xmm2, xmm0, 0
0x8D1C61: mulps   xmm2, xmm1
0x8D1C64: addps   xmm4, xmm2
0x8D1C67: mov     [esp+30h+var_4], edi
0x8D1C6B: movss   xmm0, [esp+30h+var_4]
0x8D1C71: movaps  xmmword ptr [eax], xmm4
0x8D1C74: movaps  xmm1, xmmword ptr [esi]
0x8D1C77: movaps  xmm2, xmm0
0x8D1C7A: shufps  xmm2, xmm0, 0
0x8D1C7E: movaps  xmm0, xmmword ptr [edx]
0x8D1C81: mulps   xmm2, xmm1
0x8D1C84: addps   xmm0, xmm2
0x8D1C87: subps   xmm4, xmm0
0x8D1C8A: movaps  xmmword ptr [eax+10h], xmm4
0x8D1C8E: movaps  xmm0, xmmword ptr [eax+10h]
0x8D1C92: mulps   xmm0, xmm0
0x8D1C95: movaps  xmm1, xmm0
0x8D1C98: shufps  xmm1, xmm0, 55h ; 'U'
0x8D1C9C: movaps  xmm2, xmm0
0x8D1C9F: lea     edx, [esp+30h+var_4]
0x8D1CA3: addss   xmm1, xmm0
0x8D1CA7: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8D1CAB: addss   xmm2, xmm1
0x8D1CAF: movss   dword ptr [edx], xmm2
0x8D1CB3: mov     edx, [esp+30h+var_4]
0x8D1CB7: pop     edi
0x8D1CB8: mov     [eax+20h], edx
0x8D1CBB: mov     eax, ecx
0x8D1CBD: pop     esi
0x8D1CBE: mov     esp, ebp
0x8D1CC0: pop     ebp
0x8D1CC1: retn
