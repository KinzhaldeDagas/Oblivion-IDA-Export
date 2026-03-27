0x8EBCD0: push    ebp
0x8EBCD1: mov     ebp, esp
0x8EBCD3: and     esp, 0FFFFFFF0h
0x8EBCD6: sub     esp, 48h
0x8EBCD9: push    ebx
0x8EBCDA: mov     ebx, [ebp+arg_4]
0x8EBCDD: movaps  xmm6, xmmword ptr [ebx]
0x8EBCE0: push    esi
0x8EBCE1: mov     esi, [ebp+arg_0]
0x8EBCE4: movaps  xmm0, xmmword ptr [esi]
0x8EBCE7: movaps  xmm1, xmm0
0x8EBCEA: shufps  xmm1, xmm0, 0D2h ; 'Ò'
0x8EBCEE: movaps  [esp+50h+var_10], xmm0
0x8EBCF3: shufps  xmm0, xmm0, 0C9h ; 'É'
0x8EBCF7: movaps  [esp+50h+var_20], xmm1
0x8EBCFC: movaps  [esp+50h+var_30], xmm0
0x8EBD01: movaps  xmm7, xmm6
0x8EBD04: movaps  xmm3, xmm6
0x8EBD07: shufps  xmm7, xmm6, 0D2h ; 'Ò'
0x8EBD0B: mulps   xmm0, xmm7
0x8EBD0E: movaps  xmm4, xmm0
0x8EBD11: shufps  xmm3, xmm6, 0C9h ; 'É'
0x8EBD15: mulps   xmm1, xmm3
0x8EBD18: subps   xmm4, xmm1
0x8EBD1B: movaps  xmm0, xmm4
0x8EBD1E: mulps   xmm0, xmm4
0x8EBD21: movaps  xmm1, xmm0
0x8EBD24: shufps  xmm1, xmm0, 55h ; 'U'
0x8EBD28: movaps  xmm2, xmm0
0x8EBD2B: lea     eax, [esp+50h+var_38]
0x8EBD2F: addss   xmm1, xmm0
0x8EBD33: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8EBD37: addss   xmm2, xmm1
0x8EBD3B: movss   dword ptr [eax], xmm2
0x8EBD3F: fld     [esp+50h+var_38]
0x8EBD43: fcomp   dword ptr ds:0A9AFD8h
0x8EBD49: fnstsw  ax
0x8EBD4B: test    ah, 41h
0x8EBD4E: jnp     loc_8EBEA5
0x8EBD54: fld     [esp+50h+var_38]
0x8EBD58: lea     ecx, [esp+50h+var_40]
0x8EBD5C: fsqrt
0x8EBD5E: lea     edx, [esp+50h+var_3C]
0x8EBD62: lea     eax, [esp+50h+var_38]
0x8EBD66: fdivr   dword ptr ds:0A2F948h
0x8EBD6C: fstp    [esp+50h+var_38]
0x8EBD70: movss   xmm5, [esp+50h+var_38]
0x8EBD76: movaps  xmm0, xmm5
0x8EBD79: shufps  xmm0, xmm5, 0
0x8EBD7D: mulps   xmm0, xmm4
0x8EBD80: movaps  xmm1, xmm0
0x8EBD83: shufps  xmm1, xmm0, 0C9h ; 'É'
0x8EBD87: mulps   xmm7, xmm1
0x8EBD8A: mulps   xmm1, [esp+50h+var_20]
0x8EBD8F: movaps  xmm2, xmm0
0x8EBD92: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x8EBD96: mulps   xmm3, xmm2
0x8EBD99: mulps   xmm2, [esp+50h+var_30]
0x8EBD9E: subps   xmm3, xmm7
0x8EBDA1: movaps  xmm7, xmm2
0x8EBDA4: movaps  xmm2, xmm1
0x8EBDA7: movaps  xmm1, xmmword ptr [ebx+10h]
0x8EBDAB: mulps   xmm6, xmm1
0x8EBDAE: movaps  xmm1, xmm6
0x8EBDB1: shufps  xmm6, xmm1, 55h ; 'U'
0x8EBDB5: addss   xmm6, xmm1
0x8EBDB9: subps   xmm2, xmm7
0x8EBDBC: movaps  xmm7, xmm1
0x8EBDBF: shufps  xmm7, xmm1, 0AAh ; 'ª'
0x8EBDC3: movaps  xmm1, [esp+50h+var_10]
0x8EBDC8: addss   xmm7, xmm6
0x8EBDCC: movaps  xmm6, xmmword ptr [esi+10h]
0x8EBDD0: mulps   xmm1, xmm6
0x8EBDD3: movaps  [esp+50h+var_20], xmm6
0x8EBDD8: movaps  xmm6, xmm1
0x8EBDDB: shufps  xmm6, xmm1, 55h ; 'U'
0x8EBDDF: addss   xmm6, xmm1
0x8EBDE3: movss   dword ptr [ecx], xmm7
0x8EBDE7: movaps  xmm7, xmm1
0x8EBDEA: shufps  xmm7, xmm1, 0AAh ; 'ª'
0x8EBDEE: movaps  xmm1, [esp+50h+var_20]
0x8EBDF3: addss   xmm7, xmm6
0x8EBDF7: movaps  xmm6, xmmword ptr [ebx+10h]
0x8EBDFB: addps   xmm1, xmm6
0x8EBDFE: movaps  xmm6, xmm1
0x8EBE01: movss   dword ptr [edx], xmm7
0x8EBE05: mov     ecx, [esp+50h+var_3C]
0x8EBE09: mov     edx, [esp+50h+var_40]
0x8EBE0D: movaps  xmm1, xmm0
0x8EBE10: mulps   xmm1, xmm6
0x8EBE13: movaps  xmm6, xmm1
0x8EBE16: shufps  xmm6, xmm1, 55h ; 'U'
0x8EBE1A: addss   xmm6, xmm1
0x8EBE1E: movaps  xmm7, xmm1
0x8EBE21: shufps  xmm7, xmm1, 0AAh ; 'ª'
0x8EBE25: addss   xmm7, xmm6
0x8EBE29: movss   dword ptr [eax], xmm7
0x8EBE2D: fld     [esp+50h+var_38]
0x8EBE31: fmul    dword ptr ds:0A3D65Ch
0x8EBE37: mov     eax, [edi+38h]
0x8EBE3A: mov     dword ptr [esp+50h+var_30+4], ecx
0x8EBE3E: mov     dword ptr [esp+50h+var_30+8], edx
0x8EBE42: fstp    dword ptr [esp+50h+var_30]
0x8EBE46: mov     dword ptr [esp+50h+var_30+0Ch], 0
0x8EBE4E: movaps  xmm1, [esp+50h+var_30]
0x8EBE53: movaps  xmm6, xmm1
0x8EBE56: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x8EBE5A: mulps   xmm2, xmm6
0x8EBE5D: movaps  xmm6, xmm1
0x8EBE60: shufps  xmm6, xmm1, 55h ; 'U'
0x8EBE64: mulps   xmm3, xmm6
0x8EBE67: movaps  xmm6, xmm1
0x8EBE6A: shufps  xmm6, xmm1, 0
0x8EBE6E: mulps   xmm4, xmm6
0x8EBE71: addps   xmm4, xmm3
0x8EBE74: movaps  xmm1, xmm5
0x8EBE77: addps   xmm4, xmm2
0x8EBE7A: shufps  xmm1, xmm5, 0
0x8EBE7E: mulps   xmm1, xmm4
0x8EBE81: movaps  xmm3, xmmword ptr ds:0A372D0h
0x8EBE88: movaps  xmm2, xmmword ptr [eax+20h]
0x8EBE8C: movaps  xmm4, xmm1
0x8EBE8F: andps   xmm4, xmm3
0x8EBE92: cmpltps xmm4, xmm2
0x8EBE96: movmskps ecx, xmm4
0x8EBE99: and     ecx, 7
0x8EBE9C: cmp     cl, 7
0x8EBE9F: jz      loc_8EBF33
0x8EBEA5: push    edi
0x8EBEA6: call    sub_8EB7E0
0x8EBEAB: mov     edx, [edi+38h]
0x8EBEAE: mov     eax, [edx+48h]
0x8EBEB1: mov     edx, [edi+3Ch]
0x8EBEB4: mov     edx, [edx+24h]
0x8EBEB7: mov     ecx, esi
0x8EBEB9: sub     ecx, eax
0x8EBEBB: sar     ecx, 6
0x8EBEBE: shl     ecx, 4
0x8EBEC1: mov     eax, 2
0x8EBEC6: mov     [ecx+edx+0Ch], eax
0x8EBECA: mov     ecx, [edi+38h]
0x8EBECD: mov     edx, ebx
0x8EBECF: sub     edx, [ecx+48h]
0x8EBED2: mov     ecx, [edi+3Ch]
0x8EBED5: mov     ecx, [ecx+24h]
0x8EBED8: sar     edx, 6
0x8EBEDB: shl     edx, 4
0x8EBEDE: mov     [edx+ecx+0Ch], eax
0x8EBEE2: mov     edx, [esi+30h]
0x8EBEE5: mov     eax, [ebx+30h]
0x8EBEE8: mov     esi, [ebp+arg_C]
0x8EBEEB: add     esp, 4
0x8EBEEE: cmp     edx, eax
0x8EBEF0: jle     short loc_8EBF11
0x8EBEF2: push    esi
0x8EBEF3: push    edi
0x8EBEF4: mov     ecx, ebx
0x8EBEF6: call    sub_8EB970
0x8EBEFB: mov     eax, [ebp+arg_8]
0x8EBEFE: mov     ecx, [ebp+arg_0]
0x8EBF01: push    eax
0x8EBF02: push    edi
0x8EBF03: call    sub_8EB970
0x8EBF08: add     esp, 10h
0x8EBF0B: pop     esi
0x8EBF0C: pop     ebx
0x8EBF0D: mov     esp, ebp
0x8EBF0F: pop     ebp
0x8EBF10: retn
0x8EBF11: mov     ecx, [ebp+arg_8]
0x8EBF14: push    ecx
0x8EBF15: mov     ecx, [ebp+arg_0]
0x8EBF18: push    edi
0x8EBF19: call    sub_8EB970
0x8EBF1E: mov     esi, [ebp+arg_C]
0x8EBF21: push    esi
0x8EBF22: push    edi
0x8EBF23: mov     ecx, ebx
0x8EBF25: call    sub_8EB970
0x8EBF2A: add     esp, 10h
0x8EBF2D: pop     esi
0x8EBF2E: pop     ebx
0x8EBF2F: mov     esp, ebp
0x8EBF31: pop     ebp
0x8EBF32: retn
0x8EBF33: mov     edx, [ebp+arg_8]
0x8EBF36: movaps  xmm2, xmmword ptr [edx]
0x8EBF39: subps   xmm2, xmm1
0x8EBF3C: movaps  xmm3, xmm2
0x8EBF3F: mulps   xmm3, xmm2
0x8EBF42: movaps  xmm4, xmm3
0x8EBF45: shufps  xmm4, xmm3, 55h ; 'U'
0x8EBF49: addss   xmm4, xmm3
0x8EBF4D: movaps  xmm5, xmm3
0x8EBF50: shufps  xmm5, xmm3, 0AAh ; 'ª'
0x8EBF54: movaps  xmm3, xmmword ptr [eax+30h]
0x8EBF58: addss   xmm5, xmm4
0x8EBF5C: mulps   xmm3, xmm0
0x8EBF5F: movaps  xmm4, xmm3
0x8EBF62: shufps  xmm4, xmm3, 55h ; 'U'
0x8EBF66: addss   xmm4, xmm3
0x8EBF6A: lea     ecx, [esp+50h+var_38]
0x8EBF6E: movss   dword ptr [ecx], xmm5
0x8EBF72: movaps  xmm5, xmm3
0x8EBF75: mulps   xmm2, xmm0
0x8EBF78: shufps  xmm5, xmm3, 0AAh ; 'ª'
0x8EBF7C: addss   xmm5, xmm4
0x8EBF80: movaps  xmm3, xmm2
0x8EBF83: shufps  xmm3, xmm2, 55h ; 'U'
0x8EBF87: movaps  xmm4, xmm2
0x8EBF8A: lea     eax, [esp+50h+var_40]
0x8EBF8E: addss   xmm3, xmm2
0x8EBF92: shufps  xmm4, xmm2, 0AAh ; 'ª'
0x8EBF96: addss   xmm4, xmm3
0x8EBF9A: movss   dword ptr [eax], xmm4
0x8EBF9E: fld     [esp+50h+var_40]
0x8EBFA2: fld     dword ptr [esi+20h]
0x8EBFA5: lea     edx, [esp+50h+var_3C]
0x8EBFA9: fadd    dword ptr [ebx+20h]
0x8EBFAC: movss   dword ptr [edx], xmm5
0x8EBFB0: fld     [esp+50h+var_40]
0x8EBFB4: fmul    [esp+50h+var_3C]
0x8EBFB8: fcomp   dword ptr ds:0A2FAA8h
0x8EBFBE: fnstsw  ax
0x8EBFC0: test    ah, 41h
0x8EBFC3: jnz     short loc_8EBFCD
0x8EBFC5: fld     dword ptr [esi+24h]
0x8EBFC8: fadd    dword ptr [ebx+24h]
0x8EBFCB: jmp     short loc_8EBFD3
0x8EBFCD: fld     dword ptr [esi+28h]
0x8EBFD0: fadd    dword ptr [ebx+28h]
0x8EBFD3: fmul    [esp+50h+var_3C]
0x8EBFD7: faddp   st(1), st
0x8EBFD9: fmul    dword ptr ds:0A3D65Ch
0x8EBFDF: fld     dword ptr [esi+2Ch]
0x8EBFE2: fadd    dword ptr [ebx+2Ch]
0x8EBFE5: fmul    dword ptr ds:0A3D65Ch
0x8EBFEB: fstp    [esp+50h+var_3C]
0x8EBFEF: fld     [esp+50h+var_40]
0x8EBFF3: fmul    [esp+50h+var_40]
0x8EBFF7: fst     [esp+50h+var_34]
0x8EBFFB: fld     [esp+50h+var_38]
0x8EBFFF: fsub    st, st(1)
0x8EC001: fld     st(2)
0x8EC003: fmul    st, st(3)
0x8EC005: fmulp   st(1), st
0x8EC007: fcomp   st(1)
0x8EC009: fnstsw  ax
0x8EC00B: fstp    st
0x8EC00D: test    ah, 1
0x8EC010: fstp    st
0x8EC012: jnz     short loc_8EC022
0x8EC014: mov     ecx, [ebp+arg_C]
0x8EC017: fstp    st
0x8EC019: movaps  xmmword ptr [ecx], xmm1
0x8EC01C: pop     esi
0x8EC01D: pop     ebx
0x8EC01E: mov     esp, ebp
0x8EC020: pop     ebp
0x8EC021: retn
0x8EC022: fld     [esp+50h+var_3C]
0x8EC026: fcomp   dword ptr ds:0A2F948h
0x8EC02C: fnstsw  ax
0x8EC02E: test    ah, 5
0x8EC031: jp      short loc_8EC076
0x8EC033: fld     [esp+50h+var_38]
0x8EC037: fmul    dword ptr ds:0A37080h
0x8EC03D: fcomp   [esp+50h+var_34]
0x8EC041: fnstsw  ax
0x8EC043: test    ah, 5
0x8EC046: jp      short loc_8EC076
0x8EC048: fstp    st
0x8EC04A: fld     dword ptr ds:0A2F948h
0x8EC050: fdiv    [esp+50h+var_40]
0x8EC054: fabs
0x8EC056: fld     [esp+50h+var_38]
0x8EC05A: fsqrt
0x8EC05C: fxch    st(1)
0x8EC05E: fxch    st(1)
0x8EC060: fmulp   st(1), st
0x8EC062: fld     dword ptr ds:0A2F948h
0x8EC068: fsub    [esp+50h+var_3C]
0x8EC06C: fmulp   st(1), st
0x8EC06E: fadd    [esp+50h+var_3C]
0x8EC072: fmul    [esp+50h+var_40]
0x8EC076: mov     edx, [ebp+arg_C]
0x8EC079: fstp    [esp+50h+var_34]
0x8EC07D: movss   xmm2, [esp+50h+var_34]
0x8EC083: movaps  xmm3, xmm2
0x8EC086: shufps  xmm3, xmm2, 0
0x8EC08A: mulps   xmm3, xmm0
0x8EC08D: pop     esi
0x8EC08E: addps   xmm1, xmm3
0x8EC091: movaps  xmmword ptr [edx], xmm1
0x8EC094: pop     ebx
0x8EC095: mov     esp, ebp
0x8EC097: pop     ebp
0x8EC098: retn
