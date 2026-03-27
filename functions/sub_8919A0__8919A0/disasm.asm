0x8919A0: push    ebp
0x8919A1: mov     ebp, esp
0x8919A3: and     esp, 0FFFFFFF0h
0x8919A6: sub     esp, 104h
0x8919AC: mov     eax, ds:0B30AACh
0x8919B1: xor     eax, esp
0x8919B3: mov     [esp+104h+var_4], eax
0x8919BA: push    ebx
0x8919BB: push    esi
0x8919BC: push    edi
0x8919BD: mov     edi, [ebp+arg_0]
0x8919C0: mov     eax, [edi+20h]
0x8919C3: cmp     byte ptr [eax+18h], 2
0x8919C7: mov     esi, ecx
0x8919C9: jnz     short loc_8919D2
0x8919CB: mov     edx, [eax+10h]
0x8919CE: add     edx, eax
0x8919D0: jmp     short loc_8919D4
0x8919D2: xor     edx, edx
0x8919D4: mov     ecx, [edi+28h]
0x8919D7: cmp     byte ptr [ecx+18h], 1
0x8919DB: jnz     short loc_8919E4
0x8919DD: mov     eax, [ecx+10h]
0x8919E0: add     eax, ecx
0x8919E2: jmp     short loc_8919E6
0x8919E4: xor     eax, eax
0x8919E6: test    edx, edx
0x8919E8: mov     bl, 1
0x8919EA: jz      loc_891C99
0x8919F0: test    eax, eax
0x8919F2: jz      loc_891C99
0x8919F8: mov     ebx, [ecx]
0x8919FA: fld1
0x8919FC: mov     eax, [eax+50h]
0x8919FF: movaps  xmm0, xmmword ptr [eax+10h]
0x891A03: add     eax, 10h
0x891A06: movaps  [esp+110h+var_50], xmm0
0x891A0E: movaps  xmm0, xmmword ptr [eax+10h]
0x891A12: movaps  [esp+110h+var_40], xmm0
0x891A1A: movaps  xmm0, xmmword ptr [eax+20h]
0x891A1E: movaps  [esp+110h+var_30], xmm0
0x891A26: movaps  xmm0, xmmword ptr [eax+30h]
0x891A2A: fstp    [esp+110h+var_8C]
0x891A31: xor     eax, eax
0x891A33: movaps  [esp+110h+var_20], xmm0
0x891A3B: movaps  xmm0, xmmword ptr [edi]
0x891A3E: mov     [esp+110h+var_60], eax
0x891A45: mov     [esp+110h+var_5C], eax
0x891A4C: lea     eax, [esp+110h+var_C0]
0x891A50: movaps  [esp+110h+var_D0], xmm0
0x891A55: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x891A59: push    eax
0x891A5A: mov     ecx, esi
0x891A5C: movss   dword ptr [esp+114h+var_B0], xmm0
0x891A62: call    sub_8914C0
0x891A67: fld     dword ptr [esp+110h+var_C0+8]
0x891A6B: fadd    dword ptr [esi+248h]
0x891A71: mov     [esp+110h+var_F5], 0
0x891A76: fstp    dword ptr [esp+110h+var_C0+8]
0x891A7A: movaps  xmm3, [esp+110h+var_C0]
0x891A7F: fld     dword ptr [esp+110h+var_B0]
0x891A83: movaps  xmm0, xmm3
0x891A86: shufps  xmm0, xmm3, 0AAh ; 'ª'
0x891A8A: movss   [esp+110h+var_F0], xmm0
0x891A90: fsub    [esp+110h+var_F0]
0x891A94: fstp    [esp+110h+var_F4]
0x891A98: fldz
0x891A9A: fld     [esp+110h+var_F4]
0x891A9E: fcom    st(1)
0x891AA0: fnstsw  ax
0x891AA2: test    ah, 41h
0x891AA5: jnz     short loc_891ADE
0x891AA7: fld     dword ptr [esi+248h]
0x891AAD: fdiv    qword ptr ds:0A30E48h
0x891AB3: fcompp
0x891AB5: fnstsw  ax
0x891AB7: test    ah, 5
0x891ABA: jp      short loc_891AD7
0x891ABC: fstp    st
0x891ABE: mov     al, 1
0x891AC0: pop     edi
0x891AC1: pop     esi
0x891AC2: pop     ebx
0x891AC3: mov     ecx, [esp+104h+var_4]
0x891ACA: xor     ecx, esp
0x891ACC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x891AD1: mov     esp, ebp
0x891AD3: pop     ebp
0x891AD4: retn    4
0x891AD7: mov     [esp+110h+var_F5], 1
0x891ADC: jmp     short loc_891AE0
0x891ADE: fstp    st
0x891AE0: movss   xmm5, dword ptr ds:0A46C30h
0x891AE8: movaps  xmm0, xmm3
0x891AEB: subps   xmm0, [esp+110h+var_D0]
0x891AF0: movaps  [esp+110h+var_B0], xmm0
0x891AF5: fstp    dword ptr [esp+110h+var_B0+8]
0x891AF9: movaps  xmm2, [esp+110h+var_B0]
0x891AFE: fld     dword ptr [esi+24Ch]
0x891B04: movaps  xmm0, xmm2
0x891B07: fstp    [esp+110h+var_F4]
0x891B0B: mulps   xmm0, xmm2
0x891B0E: movaps  xmm1, xmm0
0x891B11: shufps  xmm1, xmm0, 55h ; 'U'
0x891B15: addss   xmm1, xmm0
0x891B19: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x891B1D: addss   xmm0, xmm1
0x891B21: movaps  xmm1, xmm0
0x891B24: rsqrtss xmm1, xmm1
0x891B28: mulss   xmm0, xmm1
0x891B2C: mulss   xmm0, xmm1
0x891B30: xorps   xmm4, xmm4
0x891B33: movss   xmm4, xmm5
0x891B37: movss   xmm5, dword ptr ds:0A3D65Ch
0x891B3F: subss   xmm4, xmm0
0x891B43: xorps   xmm0, xmm0
0x891B46: movss   xmm0, xmm5
0x891B4A: mulss   xmm0, xmm1
0x891B4E: mulss   xmm0, xmm4
0x891B52: shufps  xmm0, xmm0, 0
0x891B56: mulps   xmm0, xmm2
0x891B59: movss   dword ptr [esp+110h+var_D0], xmm0
0x891B5F: fld     dword ptr [esp+110h+var_D0]
0x891B63: fld     [esp+110h+var_F4]
0x891B67: movaps  [esp+110h+var_E0], xmm3
0x891B6C: fld     st
0x891B6E: shufps  xmm0, xmm0, 55h ; 'U'
0x891B72: fmulp   st(2), st
0x891B74: movss   dword ptr [esp+110h+var_D0], xmm0
0x891B7A: fxch    st(1)
0x891B7C: lea     ecx, [esp+110h+var_C0]
0x891B80: push    ecx
0x891B81: fsubr   dword ptr [esp+114h+var_E0]
0x891B85: lea     edx, [esp+114h+var_50]
0x891B8C: push    edx
0x891B8D: lea     ecx, [esp+118h+var_80]
0x891B94: fstp    dword ptr [esp+118h+var_E0]
0x891B98: fld     dword ptr [esp+118h+var_D0]
0x891B9C: fmulp   st(1), st
0x891B9E: fsubr   dword ptr [esp+118h+var_E0+4]
0x891BA2: fstp    dword ptr [esp+118h+var_E0+4]
0x891BA6: call    sub_88FD10
0x891BAB: lea     eax, [esp+110h+var_E0]
0x891BAF: push    eax
0x891BB0: lea     ecx, [esp+114h+var_50]
0x891BB7: push    ecx
0x891BB8: lea     ecx, [esp+118h+var_70]
0x891BBF: call    sub_88FD10
0x891BC4: mov     edx, [ebx]
0x891BC6: mov     edx, [edx+14h]
0x891BC9: lea     eax, [esp+110h+var_A0]
0x891BCD: push    eax
0x891BCE: lea     ecx, [esp+114h+var_80]
0x891BD5: push    ecx
0x891BD6: lea     eax, [esp+118h+var_F6]
0x891BDA: push    eax
0x891BDB: mov     ecx, ebx
0x891BDD: call    edx
0x891BDF: fld1
0x891BE1: fcomp   [esp+110h+var_8C]
0x891BE8: fnstsw  ax
0x891BEA: test    ah, 41h
0x891BED: jnz     short loc_891BF3
0x891BEF: mov     al, 1
0x891BF1: jmp     short loc_891BF5
0x891BF3: xor     al, al
0x891BF5: test    al, al
0x891BF7: setnz   al
0x891BFA: test    al, al
0x891BFC: mov     [esp+110h+var_F6], al
0x891C00: jz      short loc_891C4D
0x891C02: mov     esi, [ebx+8]
0x891C05: test    esi, esi
0x891C07: jz      short loc_891C59
0x891C09: cmp     [esp+110h+var_90], 0FFFFFFFFh
0x891C11: jz      short loc_891C3B
0x891C13: mov     eax, [esi]
0x891C15: mov     edx, [eax+88h]
0x891C1B: mov     ecx, esi
0x891C1D: call    edx
0x891C1F: test    eax, eax
0x891C21: jz      short loc_891C3B
0x891C23: mov     ecx, [esp+110h+var_90]
0x891C2A: mov     edx, [eax]
0x891C2C: mov     edx, [edx+9Ch]
0x891C32: push    ecx
0x891C33: mov     ecx, eax
0x891C35: call    edx
0x891C37: mov     esi, eax
0x891C39: jmp     short loc_891C3E
0x891C3B: mov     esi, [esi+10h]
0x891C3E: add     esi, 0FFFFFFF1h
0x891C41: cmp     esi, 0Eh
0x891C44: ja      short loc_891C59
0x891C46: mov     [esp+110h+var_F6], 0
0x891C4B: jmp     short loc_891C59
0x891C4D: cmp     [esp+110h+var_F5], 0
0x891C52: jz      short loc_891C59
0x891C54: mov     [esp+110h+var_F6], 1
0x891C59: fld1
0x891C5B: fcomp   [esp+110h+var_8C]
0x891C62: fnstsw  ax
0x891C64: test    ah, 41h
0x891C67: jnz     short loc_891C6D
0x891C69: mov     al, 1
0x891C6B: jmp     short loc_891C6F
0x891C6D: xor     al, al
0x891C6F: neg     al
0x891C71: push    0
0x891C73: lea     ecx, [esp+114h+var_C0]
0x891C77: sbb     eax, eax
0x891C79: and     eax, 0FF898888h
0x891C7E: add     eax, 0FFFF0000h
0x891C83: push    eax
0x891C84: lea     eax, [esp+118h+var_E0]
0x891C88: push    eax
0x891C89: push    ecx
0x891C8A: mov     ecx, ds:0BA7DA0h
0x891C90: call    sub_8A78E0
0x891C95: mov     bl, [esp+110h+var_F6]
0x891C99: mov     ecx, [esp+110h+var_4]
0x891CA0: pop     edi
0x891CA1: pop     esi
0x891CA2: mov     al, bl
0x891CA4: pop     ebx
0x891CA5: xor     ecx, esp
0x891CA7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x891CAC: mov     esp, ebp
0x891CAE: pop     ebp
0x891CAF: retn    4
