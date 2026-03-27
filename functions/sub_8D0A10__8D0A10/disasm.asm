0x8D0A10: push    ebp
0x8D0A11: mov     ebp, esp
0x8D0A13: and     esp, 0FFFFFFF0h
0x8D0A16: sub     esp, 58h
0x8D0A19: mov     eax, [ebp+arg_0]
0x8D0A1C: movaps  xmm0, xmmword ptr [eax]
0x8D0A1F: mov     ecx, [ebp+arg_8]
0x8D0A22: movaps  xmm1, xmmword ptr [eax+10h]
0x8D0A26: push    esi
0x8D0A27: push    edi
0x8D0A28: lea     edx, [esp+60h+var_30]
0x8D0A2C: push    edx
0x8D0A2D: subps   xmm1, xmm0
0x8D0A30: movaps  xmm0, xmmword ptr [ecx]
0x8D0A33: lea     edx, [esp+64h+var_40]
0x8D0A37: push    edx
0x8D0A38: movaps  [esp+68h+var_50], xmm1
0x8D0A3D: movaps  xmm1, xmmword ptr [ecx+10h]
0x8D0A41: push    ecx
0x8D0A42: lea     ecx, [esp+6Ch+var_50]
0x8D0A46: push    ecx
0x8D0A47: subps   xmm1, xmm0
0x8D0A4A: push    eax
0x8D0A4B: movaps  [esp+74h+var_40], xmm1
0x8D0A50: call    sub_8D1A30
0x8D0A55: fld     [ebp+arg_4]
0x8D0A58: fadd    [ebp+arg_C]
0x8D0A5B: mov     ecx, eax
0x8D0A5D: fld     [ebp+arg_10]
0x8D0A60: add     esp, 14h
0x8D0A63: fadd    st, st(1)
0x8D0A65: fld     st
0x8D0A67: fmul    st, st(1)
0x8D0A69: fld     [esp+60h+var_10]
0x8D0A6D: fcompp
0x8D0A6F: fnstsw  ax
0x8D0A71: fstp    st
0x8D0A73: test    ah, 41h
0x8D0A76: jnz     short loc_8D0A85
0x8D0A78: mov     eax, 1
0x8D0A7D: fstp    st
0x8D0A7F: pop     edi
0x8D0A80: pop     esi
0x8D0A81: mov     esp, ebp
0x8D0A83: pop     ebp
0x8D0A84: retn
0x8D0A85: test    ecx, ecx
0x8D0A87: fld     [esp+60h+var_10]
0x8D0A8B: fsqrt
0x8D0A8D: jz      short loc_8D0AB5
0x8D0A8F: fld     [esp+60h+var_10]
0x8D0A93: fcomp   dword ptr ds:0A2FAA8h
0x8D0A99: fnstsw  ax
0x8D0A9B: test    ah, 41h
0x8D0A9E: jnz     loc_8D0B6F
0x8D0AA4: mov     ecx, [ebp+arg_14]
0x8D0AA7: movaps  xmm0, [esp+60h+var_20]
0x8D0AAC: movaps  xmmword ptr [ecx+10h], xmm0
0x8D0AB0: jmp     loc_8D0BF3
0x8D0AB5: movaps  xmm0, [esp+60h+var_40]
0x8D0ABA: movaps  xmm1, xmm0
0x8D0ABD: shufps  xmm1, xmm0, 0C9h ; 'É'
0x8D0AC1: movaps  xmm2, xmm1
0x8D0AC4: movaps  xmm1, [esp+60h+var_50]
0x8D0AC9: movaps  xmm3, xmm1
0x8D0ACC: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x8D0AD0: mulps   xmm3, xmm2
0x8D0AD3: movaps  xmm2, xmm0
0x8D0AD6: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x8D0ADA: movaps  xmm0, xmm1
0x8D0ADD: shufps  xmm0, xmm1, 0C9h ; 'É'
0x8D0AE1: movaps  xmm1, xmm0
0x8D0AE4: mulps   xmm1, xmm2
0x8D0AE7: subps   xmm1, xmm3
0x8D0AEA: movaps  xmm0, xmm1
0x8D0AED: mulps   xmm0, xmm1
0x8D0AF0: movaps  xmm2, xmm0
0x8D0AF3: shufps  xmm2, xmm0, 55h ; 'U'
0x8D0AF7: movaps  xmm3, xmm0
0x8D0AFA: addss   xmm2, xmm0
0x8D0AFE: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8D0B02: lea     edx, [esp+60h+var_58]
0x8D0B06: addss   xmm3, xmm2
0x8D0B0A: movss   dword ptr [edx], xmm3
0x8D0B0E: fld     [esp+60h+var_58]
0x8D0B12: fcomp   dword ptr ds:0A99EF4h
0x8D0B18: fnstsw  ax
0x8D0B1A: test    ah, 41h
0x8D0B1D: jnz     short loc_8D0B6F
0x8D0B1F: movaps  xmm2, [esp+60h+var_20]
0x8D0B24: movaps  xmm0, xmm1
0x8D0B27: mulps   xmm0, xmm2
0x8D0B2A: movaps  xmm2, xmm0
0x8D0B2D: shufps  xmm2, xmm0, 55h ; 'U'
0x8D0B31: movaps  xmm3, xmm0
0x8D0B34: lea     eax, [esp+60h+var_58]
0x8D0B38: addss   xmm2, xmm0
0x8D0B3C: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8D0B40: addss   xmm3, xmm2
0x8D0B44: movss   dword ptr [eax], xmm3
0x8D0B48: fld     [esp+60h+var_58]
0x8D0B4C: fcomp   dword ptr ds:0A2FAA8h
0x8D0B52: fnstsw  ax
0x8D0B54: test    ah, 5
0x8D0B57: jp      short loc_8D0B63
0x8D0B59: movaps  xmm0, xmmword ptr ds:0A965C0h
0x8D0B60: xorps   xmm1, xmm0
0x8D0B63: mov     ecx, [ebp+arg_14]
0x8D0B66: movaps  xmmword ptr [ecx+10h], xmm1
0x8D0B6A: jmp     loc_8D0BF3
0x8D0B6F: fld     dword ptr [esp+60h+var_50]
0x8D0B73: mov     ecx, [ebp+arg_14]
0x8D0B76: fabs
0x8D0B78: xor     edx, edx
0x8D0B7A: fld     dword ptr [esp+60h+var_50+4]
0x8D0B7E: fabs
0x8D0B80: mov     esi, 1
0x8D0B85: fst     [esp+60h+var_58]
0x8D0B89: fld     dword ptr [esp+60h+var_50+8]
0x8D0B8D: mov     edi, 2
0x8D0B92: fabs
0x8D0B94: fstp    [esp+60h+var_54]
0x8D0B98: fcomp   st(1)
0x8D0B9A: fnstsw  ax
0x8D0B9C: test    ah, 5
0x8D0B9F: jp      short loc_8D0BAE
0x8D0BA1: fstp    st
0x8D0BA3: xor     esi, esi
0x8D0BA5: fld     [esp+60h+var_58]
0x8D0BA9: mov     edx, 1
0x8D0BAE: fld     [esp+60h+var_54]
0x8D0BB2: fcomp   st(1)
0x8D0BB4: fnstsw  ax
0x8D0BB6: fstp    st
0x8D0BB8: test    ah, 5
0x8D0BBB: jp      short loc_8D0BC4
0x8D0BBD: mov     edi, edx
0x8D0BBF: mov     edx, 2
0x8D0BC4: mov     dword ptr [ecx+edx*4+10h], 0
0x8D0BCC: lea     eax, ds:0[edi*4]
0x8D0BD3: lea     edx, ds:0[esi*4]
0x8D0BDA: mov     esi, dword ptr [esp+eax+60h+var_50]
0x8D0BDE: mov     dword ptr [ecx+1Ch], 0
0x8D0BE5: mov     [edx+ecx+10h], esi
0x8D0BE9: fld     dword ptr [esp+edx+60h+var_50]
0x8D0BED: fchs
0x8D0BEF: fstp    dword ptr [eax+ecx+10h]
0x8D0BF3: movaps  xmm1, xmmword ptr [ecx+10h]
0x8D0BF7: fld     [ebp+arg_C]
0x8D0BFA: movaps  xmm0, xmm1
0x8D0BFD: fsub    st, st(1)
0x8D0BFF: mulps   xmm0, xmm1
0x8D0C02: movaps  xmm2, xmm0
0x8D0C05: shufps  xmm2, xmm0, 55h ; 'U'
0x8D0C09: addss   xmm2, xmm0
0x8D0C0D: movaps  xmm3, xmm0
0x8D0C10: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8D0C14: movaps  xmm0, xmm3
0x8D0C17: addss   xmm0, xmm2
0x8D0C1B: movaps  [esp+60h+var_40], xmm0
0x8D0C20: rsqrtss xmm2, xmm0
0x8D0C24: movss   dword ptr [esp+60h+var_40], xmm2
0x8D0C2A: movaps  xmm2, [esp+60h+var_40]
0x8D0C2F: mulss   xmm0, xmm2
0x8D0C33: mulss   xmm0, xmm2
0x8D0C37: mov     [esp+60h+var_54], 40400000h
0x8D0C3F: movss   xmm3, [esp+60h+var_54]
0x8D0C45: subss   xmm3, xmm0
0x8D0C49: mov     [esp+60h+var_54], 3F000000h
0x8D0C51: movss   xmm0, [esp+60h+var_54]
0x8D0C57: fstp    [esp+60h+var_54]
0x8D0C5B: mulss   xmm0, xmm2
0x8D0C5F: mulss   xmm0, xmm3
0x8D0C63: fsub    st, st(1)
0x8D0C65: movaps  xmm2, xmm0
0x8D0C68: shufps  xmm2, xmm0, 0
0x8D0C6C: movss   xmm0, [esp+60h+var_54]
0x8D0C72: mulps   xmm2, xmm1
0x8D0C75: movaps  xmmword ptr [ecx+10h], xmm2
0x8D0C79: movaps  xmm1, xmmword ptr [ecx+10h]
0x8D0C7D: movaps  xmm2, xmm0
0x8D0C80: shufps  xmm2, xmm0, 0
0x8D0C84: movaps  xmm0, [esp+60h+var_30]
0x8D0C89: mulps   xmm2, xmm1
0x8D0C8C: addps   xmm0, xmm2
0x8D0C8F: movaps  xmmword ptr [ecx], xmm0
0x8D0C92: fstp    dword ptr [ecx+1Ch]
0x8D0C95: pop     edi
0x8D0C96: xor     eax, eax
0x8D0C98: fstp    st
0x8D0C9A: pop     esi
0x8D0C9B: mov     esp, ebp
0x8D0C9D: pop     ebp
0x8D0C9E: retn
