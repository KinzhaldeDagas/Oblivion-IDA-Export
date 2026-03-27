0x92BAE0: push    ebp
0x92BAE1: mov     ebp, esp
0x92BAE3: and     esp, 0FFFFFFF0h
0x92BAE6: sub     esp, 44h
0x92BAE9: push    ebx
0x92BAEA: push    esi
0x92BAEB: push    edi
0x92BAEC: mov     edi, [ebp+arg_8]
0x92BAEF: mov     eax, [edi+4]
0x92BAF2: xor     cl, cl
0x92BAF4: xor     ebx, ebx
0x92BAF6: cmp     eax, ebx
0x92BAF8: mov     [esp+50h+var_35], cl
0x92BAFC: mov     [esp+50h+var_30], 7F7FFFFFh
0x92BB04: jle     loc_92BD0B
0x92BB0A: mov     esi, [ebp+arg_18]
0x92BB0D: mov     [esp+50h+var_34], ebx
0x92BB11: cmp     ebx, [ebp+arg_C]
0x92BB14: jz      loc_92BCF0
0x92BB1A: mov     ecx, [ebp+arg_10]
0x92BB1D: cmp     ebx, ecx
0x92BB1F: jz      loc_92BCF0
0x92BB25: mov     eax, [ebp+arg_4]
0x92BB28: movaps  xmm1, xmmword ptr [eax]
0x92BB2B: mov     edx, [edi]
0x92BB2D: mov     eax, [esp+50h+var_34]
0x92BB31: movaps  xmm0, xmmword ptr [eax+edx]
0x92BB35: mulps   xmm0, xmm1
0x92BB38: add     eax, edx
0x92BB3A: movaps  xmm2, xmm0
0x92BB3D: shufps  xmm2, xmm0, 55h ; 'U'
0x92BB41: addss   xmm2, xmm0
0x92BB45: movaps  xmm3, xmm0
0x92BB48: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92BB4C: movaps  xmm0, xmmword ptr [eax]
0x92BB4F: addss   xmm3, xmm2
0x92BB53: movaps  xmm2, xmm1
0x92BB56: shufps  xmm2, xmm1, 0C9h ; 'É'
0x92BB5A: lea     edx, [esp+50h+var_2C]
0x92BB5E: movss   dword ptr [edx], xmm3
0x92BB62: fld     [esp+50h+var_2C]
0x92BB66: fcomp   dword ptr ds:0A7E738h
0x92BB6C: movaps  xmm3, xmm0
0x92BB6F: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x92BB73: mulps   xmm3, xmm2
0x92BB76: movaps  xmm2, xmm1
0x92BB79: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x92BB7D: movaps  xmm1, xmm0
0x92BB80: shufps  xmm1, xmm0, 0C9h ; 'É'
0x92BB84: movaps  xmm0, xmm1
0x92BB87: mulps   xmm0, xmm2
0x92BB8A: subps   xmm0, xmm3
0x92BB8D: mulps   xmm0, xmm0
0x92BB90: movaps  xmm1, xmm0
0x92BB93: shufps  xmm1, xmm0, 55h ; 'U'
0x92BB97: movaps  xmm2, xmm0
0x92BB9A: lea     eax, [esp+50h+var_28]
0x92BB9E: addss   xmm1, xmm0
0x92BBA2: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92BBA6: addss   xmm2, xmm1
0x92BBAA: movss   dword ptr [eax], xmm2
0x92BBAE: fnstsw  ax
0x92BBB0: test    ah, 41h
0x92BBB3: jnz     loc_92BCF0
0x92BBB9: mov     eax, [ebp+arg_14]
0x92BBBC: mov     dword ptr [eax+0Ch], 3F800000h
0x92BBC3: movaps  xmm0, xmmword ptr [eax]
0x92BBC6: mov     edx, [edi]
0x92BBC8: mov     eax, [esp+50h+var_34]
0x92BBCC: movaps  xmm1, xmmword ptr [edx+eax]
0x92BBD0: mulps   xmm1, xmm0
0x92BBD3: movaps  xmm0, xmm1
0x92BBD6: shufps  xmm0, xmm1, 4Eh ; 'N'
0x92BBDA: addps   xmm0, xmm1
0x92BBDD: movaps  xmm1, xmm0
0x92BBE0: shufps  xmm1, xmm0, 0B1h ; '±'
0x92BBE4: lea     edx, [esp+50h+var_24]
0x92BBE8: addps   xmm0, xmm1
0x92BBEB: movss   dword ptr [edx], xmm0
0x92BBEF: fld     [esp+50h+var_24]
0x92BBF3: fchs
0x92BBF5: fld     [esp+50h+var_2C]
0x92BBF9: fabs
0x92BBFB: fxch    st(1)
0x92BBFD: fxch    st(1)
0x92BBFF: fdivp   st(1), st
0x92BC01: fst     [esp+50h+var_28]
0x92BC05: fld     [esp+50h+var_30]
0x92BC09: fadd    dword ptr ds:0A79DB4h
0x92BC0F: fxch    st(1)
0x92BC11: fcompp
0x92BC13: fnstsw  ax
0x92BC15: test    ah, 5
0x92BC18: jp      loc_92BCF0
0x92BC1E: lea     eax, [esp+50h+var_20]
0x92BC22: push    eax
0x92BC23: push    ebx
0x92BC24: push    ecx
0x92BC25: mov     ecx, [ebp+arg_C]
0x92BC28: push    ecx
0x92BC29: push    edi
0x92BC2A: call    sub_92B760
0x92BC2F: add     esp, 14h
0x92BC32: test    eax, eax
0x92BC34: jnz     loc_92BCF0
0x92BC3A: fld     [esp+50h+var_28]
0x92BC3E: mov     [esp+50h+var_35], 1
0x92BC43: fsub    [esp+50h+var_30]
0x92BC47: fabs
0x92BC49: fcomp   dword ptr ds:0A79DB4h
0x92BC4F: fnstsw  ax
0x92BC51: test    ah, 5
0x92BC54: jp      short loc_92BCA0
0x92BC56: mov     edx, [esi+8]
0x92BC59: mov     eax, [esi+4]
0x92BC5C: and     edx, 3FFFFFFFh
0x92BC62: cmp     eax, edx
0x92BC64: jnz     short loc_92BC71
0x92BC66: push    20h ; ' '
0x92BC68: push    esi
0x92BC69: call    sub_8A6EE0
0x92BC6E: add     esp, 8
0x92BC71: mov     ecx, [esi+4]
0x92BC74: mov     edx, [esi]
0x92BC76: movaps  xmm0, [esp+50h+var_20]
0x92BC7B: mov     eax, ecx
0x92BC7D: shl     eax, 5
0x92BC80: add     eax, edx
0x92BC82: mov     edx, [esp+50h+var_C]
0x92BC86: inc     ecx
0x92BC87: mov     [esi+4], ecx
0x92BC8A: mov     ecx, [esp+50h+var_10]
0x92BC8E: mov     [eax+10h], ecx
0x92BC91: mov     ecx, [esp+50h+var_8]
0x92BC95: movaps  xmmword ptr [eax], xmm0
0x92BC98: mov     [eax+14h], edx
0x92BC9B: mov     [eax+18h], ecx
0x92BC9E: jmp     short loc_92BCF0
0x92BCA0: test    dword ptr [esi+8], 3FFFFFFFh
0x92BCA7: mov     dword ptr [esi+4], 0
0x92BCAE: jnz     short loc_92BCBB
0x92BCB0: push    20h ; ' '
0x92BCB2: push    esi
0x92BCB3: call    sub_8A6EE0
0x92BCB8: add     esp, 8
0x92BCBB: mov     ecx, [esi+4]
0x92BCBE: mov     edx, [esi]
0x92BCC0: movaps  xmm0, [esp+50h+var_20]
0x92BCC5: mov     eax, ecx
0x92BCC7: shl     eax, 5
0x92BCCA: add     eax, edx
0x92BCCC: mov     edx, [esp+50h+var_10]
0x92BCD0: inc     ecx
0x92BCD1: mov     [esi+4], ecx
0x92BCD4: mov     ecx, [esp+50h+var_C]
0x92BCD8: mov     [eax+10h], edx
0x92BCDB: mov     edx, [esp+50h+var_8]
0x92BCDF: movaps  xmmword ptr [eax], xmm0
0x92BCE2: mov     [eax+14h], ecx
0x92BCE5: mov     [eax+18h], edx
0x92BCE8: mov     eax, [esp+50h+var_28]
0x92BCEC: mov     [esp+50h+var_30], eax
0x92BCF0: mov     ecx, [esp+50h+var_34]
0x92BCF4: mov     eax, [edi+4]
0x92BCF7: inc     ebx
0x92BCF8: add     ecx, 10h
0x92BCFB: cmp     ebx, eax
0x92BCFD: mov     [esp+50h+var_34], ecx
0x92BD01: jl      loc_92BB11
0x92BD07: mov     cl, [esp+50h+var_35]
0x92BD0B: mov     eax, [ebp+arg_0]
0x92BD0E: pop     edi
0x92BD0F: pop     esi
0x92BD10: mov     [eax], cl
0x92BD12: pop     ebx
0x92BD13: mov     esp, ebp
0x92BD15: pop     ebp
0x92BD16: retn
