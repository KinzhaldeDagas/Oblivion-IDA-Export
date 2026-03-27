0x9558D0: push    ebp
0x9558D1: mov     ebp, esp
0x9558D3: and     esp, 0FFFFFFF0h
0x9558D6: sub     esp, 34h
0x9558D9: push    ebx
0x9558DA: push    esi
0x9558DB: push    edi
0x9558DC: mov     edi, [ebp+arg_0]
0x9558DF: mov     esi, ecx
0x9558E1: mov     ecx, [edi+0B8h]
0x9558E7: fld     dword ptr [ecx]
0x9558E9: xor     ebx, ebx
0x9558EB: fld     dword ptr ds:0A2FAA8h
0x9558F1: xor     edx, edx
0x9558F3: fld     st(1)
0x9558F5: mov     [esp+40h+var_30], ebx
0x9558F9: fucompp
0x9558FB: fnstsw  ax
0x9558FD: test    ah, 44h
0x955900: jnp     short loc_95591A
0x955902: fcomp   dword ptr ds:0A2FAA8h
0x955908: mov     edx, 1
0x95590D: fnstsw  ax
0x95590F: test    ah, 5
0x955912: jp      short loc_95591C
0x955914: mov     [esp+40h+var_30], edx
0x955918: jmp     short loc_95591C
0x95591A: fstp    st
0x95591C: fld     dword ptr [ecx+4]
0x95591F: fld     dword ptr ds:0A2FAA8h
0x955925: fld     st(1)
0x955927: fucompp
0x955929: fnstsw  ax
0x95592B: test    ah, 44h
0x95592E: jnp     short loc_955949
0x955930: fcomp   dword ptr ds:0A2FAA8h
0x955936: inc     edx
0x955937: mov     ebx, 1
0x95593C: fnstsw  ax
0x95593E: test    ah, 5
0x955941: jp      short loc_95594B
0x955943: inc     [esp+40h+var_30]
0x955947: jmp     short loc_95594B
0x955949: fstp    st
0x95594B: fld     dword ptr [ecx+8]
0x95594E: fld     dword ptr ds:0A2FAA8h
0x955954: fld     st(1)
0x955956: fucompp
0x955958: fnstsw  ax
0x95595A: test    ah, 44h
0x95595D: jnp     short loc_955978
0x95595F: fcomp   dword ptr ds:0A2FAA8h
0x955965: inc     edx
0x955966: mov     ebx, 2
0x95596B: fnstsw  ax
0x95596D: test    ah, 5
0x955970: jp      short loc_95597A
0x955972: inc     [esp+40h+var_30]
0x955976: jmp     short loc_95597A
0x955978: fstp    st
0x95597A: cmp     edx, 1
0x95597D: fld     dword ptr [edi+0BCh]
0x955983: fld     dword ptr [edi+0C0h]
0x955989: fstp    [esp+40h+var_28]
0x95598D: jnz     loc_955A2D
0x955993: fld     dword ptr [esi+ebx*4+30h]
0x955997: push    ecx
0x955998: fsubp   st(1), st
0x95599A: fmul    dword ptr [esi+3Ch]
0x95599D: fstp    [esp+44h+var_44]
0x9559A0: call    sub_8ECA90
0x9559A5: fstp    [esp+44h+var_44]
0x9559A8: call    sub_8ECB30
0x9559AD: fld     dword ptr [esi+3Ch]
0x9559B0: mov     edi, eax
0x9559B2: fld     dword ptr [esi+ebx*4+30h]
0x9559B6: fsubr   [esp+44h+var_28]
0x9559BA: fmulp   st(1), st
0x9559BC: fstp    [esp+44h+var_44]
0x9559BF: call    sub_8ECA90
0x9559C4: fstp    [esp+44h+var_44]
0x9559C7: call    sub_8ECB30
0x9559CC: mov     ecx, [ebp+arg_4]
0x9559CF: mov     ebx, [ecx+ebx*4+28h]
0x9559D3: mov     ecx, [ecx+24h]
0x9559D6: sub     eax, ebx
0x9559D8: sub     edi, ebx
0x9559DA: sar     eax, cl
0x9559DC: sar     edi, cl
0x9559DE: add     esp, 4
0x9559E1: inc     eax
0x9559E2: test    edi, edi
0x9559E4: jg      short loc_9559EA
0x9559E6: xor     edi, edi
0x9559E8: jmp     short loc_9559F7
0x9559EA: cmp     edi, 0FFh
0x9559F0: jl      short loc_9559F7
0x9559F2: mov     edi, 0FFh
0x9559F7: test    eax, eax
0x9559F9: jg      short loc_9559FF
0x9559FB: xor     eax, eax
0x9559FD: jmp     short loc_955A0B
0x9559FF: cmp     eax, 0FFh
0x955A04: jl      short loc_955A0B
0x955A06: mov     eax, 0FFh
0x955A0B: mov     ecx, [ebp+arg_C]
0x955A0E: mov     edx, [ebp+arg_8]
0x955A11: mov     [ecx], edi
0x955A13: mov     [edx], eax
0x955A15: cmp     dword ptr [ecx], 0
0x955A18: jge     loc_955BE8
0x955A1E: mov     dword ptr [ecx], 0
0x955A24: pop     edi
0x955A25: pop     esi
0x955A26: pop     ebx
0x955A27: mov     esp, ebp
0x955A29: pop     ebp
0x955A2A: retn    10h
0x955A2D: mov     eax, [ebp+arg_4]
0x955A30: fild    dword ptr [eax+28h]
0x955A33: lea     edi, [esi+30h]
0x955A36: mov     ebx, [edi]
0x955A38: mov     dword ptr [esp+40h+var_20], ebx
0x955A3C: fstp    dword ptr [esp+40h+var_10]
0x955A40: mov     ebx, [edi+4]
0x955A43: fild    dword ptr [eax+2Ch]
0x955A46: mov     dword ptr [esp+40h+var_20+4], ebx
0x955A4A: mov     ebx, [edi+8]
0x955A4D: mov     edi, [edi+0Ch]
0x955A50: fstp    dword ptr [esp+40h+var_10+4]
0x955A54: mov     dword ptr [esp+40h+var_20+0Ch], edi
0x955A58: fild    dword ptr [eax+30h]
0x955A5B: mov     dword ptr [esp+40h+var_10+0Ch], 0
0x955A63: mov     dword ptr [esp+40h+var_20+8], ebx
0x955A67: mov     edi, 1
0x955A6C: fstp    dword ptr [esp+40h+var_10+8]
0x955A70: movaps  xmm1, [esp+40h+var_10]
0x955A75: fld     dword ptr ds:0A2F948h
0x955A7B: fdiv    dword ptr [esi+3Ch]
0x955A7E: fstp    [esp+40h+var_2C]
0x955A82: movss   xmm0, [esp+40h+var_2C]
0x955A88: movaps  xmm2, xmm0
0x955A8B: shufps  xmm2, xmm0, 0
0x955A8F: movaps  xmm0, [esp+40h+var_20]
0x955A94: mulps   xmm2, xmm1
0x955A97: addps   xmm0, xmm2
0x955A9A: movaps  xmm1, xmm0
0x955A9D: movaps  xmm0, xmmword ptr [ecx]
0x955AA0: mulps   xmm0, xmm1
0x955AA3: movaps  xmm1, xmm0
0x955AA6: shufps  xmm1, xmm0, 55h ; 'U'
0x955AAA: movaps  xmm2, xmm0
0x955AAD: lea     ecx, [esp+40h+var_2C]
0x955AB1: addss   xmm1, xmm0
0x955AB5: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x955AB9: addss   xmm2, xmm1
0x955ABD: movss   dword ptr [ecx], xmm2
0x955AC1: fld     [esp+40h+var_2C]
0x955AC5: mov     ecx, [eax+24h]
0x955AC8: shl     edi, cl
0x955ACA: cmp     edx, 2
0x955ACD: mov     [esp+40h+var_2C], edi
0x955AD1: fild    [esp+40h+var_2C]
0x955AD5: fdivr   qword ptr ds:0A2F928h
0x955ADB: fld     dword ptr [esi+3Ch]
0x955ADE: fxch    st(3)
0x955AE0: fsub    st, st(2)
0x955AE2: fmul    st, st(3)
0x955AE4: fmul    st, st(1)
0x955AE6: fstp    qword ptr [esp+40h+var_20]
0x955AEA: fld     [esp+40h+var_28]
0x955AEE: fsub    st, st(2)
0x955AF0: fmul    st, st(3)
0x955AF2: fmul    st, st(1)
0x955AF4: fstp    st(3)
0x955AF6: fstp    st
0x955AF8: fstp    st
0x955AFA: fld     qword ptr ds:0A2F928h
0x955B00: fld     qword ptr ds:0A2F928h
0x955B06: fstp    qword ptr [esp+40h+var_10]
0x955B0A: jnz     short loc_955B1C
0x955B0C: fstp    st
0x955B0E: fld     qword ptr ds:0A3D660h
0x955B14: fld     qword ptr ds:0A2FAA0h
0x955B1A: jmp     short loc_955B2F
0x955B1C: cmp     edx, 3
0x955B1F: jnz     short loc_955B33
0x955B21: fstp    st
0x955B23: fld     qword ptr ds:0A77B58h
0x955B29: fld     qword ptr ds:0AA3548h
0x955B2F: fstp    qword ptr [esp+40h+var_10]
0x955B33: fld     qword ptr [esp+40h+var_20]
0x955B37: mov     eax, [esp+40h+var_30]
0x955B3B: test    eax, eax
0x955B3D: fmul    st, st(1)
0x955B3F: fstp    qword ptr [esp+40h+var_20]
0x955B43: fmul    st, st(1)
0x955B45: fstp    [esp+40h+var_28]
0x955B49: fstp    st
0x955B4B: jz      short loc_955B6D
0x955B4D: imul    eax, 0FFh
0x955B53: mov     [esp+40h+var_2C], eax
0x955B57: fild    [esp+40h+var_2C]
0x955B5B: fld     qword ptr [esp+40h+var_20]
0x955B5F: fadd    st, st(1)
0x955B61: fstp    qword ptr [esp+40h+var_20]
0x955B65: fadd    [esp+40h+var_28]
0x955B69: fstp    [esp+40h+var_28]
0x955B6D: fld     qword ptr [esp+40h+var_10]
0x955B71: push    ecx
0x955B72: fmul    qword ptr [esp+44h+var_20]
0x955B76: fstp    [esp+44h+var_44]
0x955B79: call    sub_8ECA90
0x955B7E: fstp    [esp+44h+var_44]
0x955B81: call    sub_8ECB30
0x955B86: fld     qword ptr [esp+44h+var_10]
0x955B8A: fmul    [esp+44h+var_28]
0x955B8E: mov     esi, eax
0x955B90: fstp    [esp+44h+var_44]
0x955B93: call    sub_8ECA90
0x955B98: fstp    [esp+44h+var_44]
0x955B9B: call    sub_8ECB30
0x955BA0: add     esp, 4
0x955BA3: inc     eax
0x955BA4: test    esi, esi
0x955BA6: jg      short loc_955BAC
0x955BA8: xor     esi, esi
0x955BAA: jmp     short loc_955BB9
0x955BAC: cmp     esi, 0FFh
0x955BB2: jl      short loc_955BB9
0x955BB4: mov     esi, 0FFh
0x955BB9: test    eax, eax
0x955BBB: jg      short loc_955BD2
0x955BBD: mov     edx, [ebp+arg_C]
0x955BC0: mov     ecx, [ebp+arg_8]
0x955BC3: xor     eax, eax
0x955BC5: mov     [edx], esi
0x955BC7: mov     [ecx], eax
0x955BC9: pop     edi
0x955BCA: pop     esi
0x955BCB: pop     ebx
0x955BCC: mov     esp, ebp
0x955BCE: pop     ebp
0x955BCF: retn    10h
0x955BD2: cmp     eax, 0FFh
0x955BD7: jl      short loc_955BDE
0x955BD9: mov     eax, 0FFh
0x955BDE: mov     edx, [ebp+arg_C]
0x955BE1: mov     ecx, [ebp+arg_8]
0x955BE4: mov     [edx], esi
0x955BE6: mov     [ecx], eax
0x955BE8: pop     edi
0x955BE9: pop     esi
0x955BEA: pop     ebx
0x955BEB: mov     esp, ebp
0x955BED: pop     ebp
0x955BEE: retn    10h
