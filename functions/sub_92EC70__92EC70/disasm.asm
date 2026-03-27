0x92EC70: push    ebp
0x92EC71: mov     ebp, esp
0x92EC73: and     esp, 0FFFFFFF0h
0x92EC76: sub     esp, 34h
0x92EC79: mov     eax, [ebp+arg_4]
0x92EC7C: mov     ecx, [eax+0Ch]
0x92EC7F: mov     edx, [ebp+arg_10]
0x92EC82: mov     eax, [ebp+arg_0]
0x92EC85: mov     [esp+34h+var_34], ecx
0x92EC88: movzx   ecx, word ptr [edx]
0x92EC8B: shl     ecx, 4
0x92EC8E: add     ecx, eax
0x92EC90: mov     eax, [ebp+arg_C]
0x92EC93: mov     edx, [eax]
0x92EC95: mov     dword ptr [esp+34h+var_30], edx
0x92EC99: mov     edx, [eax+4]
0x92EC9C: mov     dword ptr [esp+34h+var_30+4], edx
0x92ECA0: mov     edx, [eax+8]
0x92ECA3: mov     eax, [eax+0Ch]
0x92ECA6: mov     dword ptr [esp+34h+var_30+8], edx
0x92ECAA: mov     edx, [ebp+arg_14]
0x92ECAD: mov     dword ptr [esp+34h+var_30+0Ch], eax
0x92ECB1: mov     eax, [ebp+arg_18]
0x92ECB4: fld     dword ptr [edx]
0x92ECB6: push    ebx
0x92ECB7: push    esi
0x92ECB8: fsub    dword ptr [eax]
0x92ECBA: push    edi
0x92ECBB: fstp    dword ptr [esp+40h+var_20]
0x92ECBF: fld     dword ptr [edx+4]
0x92ECC2: fsub    dword ptr [eax+4]
0x92ECC5: fstp    dword ptr [esp+40h+var_20+4]
0x92ECC9: fld     dword ptr [edx+8]
0x92ECCC: fsub    dword ptr [eax+8]
0x92ECCF: fstp    dword ptr [esp+40h+var_20+8]
0x92ECD3: fld     dword ptr [edx+0Ch]
0x92ECD6: fsub    dword ptr [eax+0Ch]
0x92ECD9: fstp    dword ptr [esp+40h+var_20+0Ch]
0x92ECDD: movaps  xmm0, [esp+40h+var_20]
0x92ECE2: fld     [ebp+arg_8]
0x92ECE5: fcomp   [esp+40h+var_34]
0x92ECE9: fnstsw  ax
0x92ECEB: test    ah, 5
0x92ECEE: jnp     loc_92EDB3
0x92ECF4: fld     dword ptr ds:0A58E1Ch
0x92ECFA: fsub    [esp+40h+var_34]
0x92ECFE: fcomp   [ebp+arg_8]
0x92ED01: fnstsw  ax
0x92ED03: test    ah, 5
0x92ED06: jnp     loc_92EDB3
0x92ED0C: fld     [ebp+arg_8]
0x92ED0F: movaps  xmm1, [esp+40h+var_30]
0x92ED14: fsub    dword ptr ds:0A46B10h
0x92ED1A: fabs
0x92ED1C: fcomp   [esp+40h+var_34]
0x92ED20: fnstsw  ax
0x92ED22: test    ah, 5
0x92ED25: jp      loc_92EE5B
0x92ED2B: movaps  xmm2, xmm1
0x92ED2E: shufps  xmm2, xmm1, 0C9h ; 'É'
0x92ED32: movaps  xmm3, xmm0
0x92ED35: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x92ED39: mulps   xmm3, xmm2
0x92ED3C: movaps  xmm2, xmm1
0x92ED3F: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x92ED43: movaps  xmm1, xmm0
0x92ED46: shufps  xmm1, xmm0, 0C9h ; 'É'
0x92ED4A: mulps   xmm1, xmm2
0x92ED4D: movaps  xmm2, xmm1
0x92ED50: subps   xmm2, xmm3
0x92ED53: movaps  xmm1, xmm2
0x92ED56: mulps   xmm1, xmm2
0x92ED59: movaps  xmm3, xmm1
0x92ED5C: shufps  xmm3, xmm1, 55h ; 'U'
0x92ED60: addss   xmm3, xmm1
0x92ED64: movaps  xmm4, xmm1
0x92ED67: shufps  xmm4, xmm1, 0AAh ; 'ª'
0x92ED6B: movaps  xmm1, xmm4
0x92ED6E: addss   xmm1, xmm3
0x92ED72: movaps  [esp+40h+var_20], xmm1
0x92ED77: rsqrtss xmm3, xmm1
0x92ED7B: mov     [esp+40h+var_34], 40400000h
0x92ED83: movss   xmm4, [esp+40h+var_34]
0x92ED89: movss   dword ptr [esp+40h+var_20], xmm3
0x92ED8F: movaps  xmm3, [esp+40h+var_20]
0x92ED94: mulss   xmm1, xmm3
0x92ED98: mulss   xmm1, xmm3
0x92ED9C: mov     [esp+40h+var_34], 3F000000h
0x92EDA4: subss   xmm4, xmm1
0x92EDA8: movss   xmm1, [esp+40h+var_34]
0x92EDAE: jmp     loc_92EE41
0x92EDB3: movaps  xmm1, xmm0
0x92EDB6: shufps  xmm1, xmm0, 0C9h ; 'É'
0x92EDBA: movaps  xmm2, xmm1
0x92EDBD: movaps  xmm1, [esp+40h+var_30]
0x92EDC2: movaps  xmm3, xmm1
0x92EDC5: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x92EDC9: movaps  xmm4, xmm1
0x92EDCC: shufps  xmm4, xmm1, 0C9h ; 'É'
0x92EDD0: mulps   xmm3, xmm2
0x92EDD3: movaps  xmm1, xmm4
0x92EDD6: movaps  xmm2, xmm0
0x92EDD9: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x92EDDD: mulps   xmm1, xmm2
0x92EDE0: movaps  xmm2, xmm1
0x92EDE3: subps   xmm2, xmm3
0x92EDE6: movaps  xmm1, xmm2
0x92EDE9: mulps   xmm1, xmm2
0x92EDEC: movaps  xmm3, xmm1
0x92EDEF: shufps  xmm3, xmm1, 55h ; 'U'
0x92EDF3: addss   xmm3, xmm1
0x92EDF7: movaps  xmm4, xmm1
0x92EDFA: shufps  xmm4, xmm1, 0AAh ; 'ª'
0x92EDFE: movaps  xmm1, xmm4
0x92EE01: addss   xmm1, xmm3
0x92EE05: movaps  [esp+40h+var_20], xmm1
0x92EE0A: rsqrtss xmm3, xmm1
0x92EE0E: mov     [esp+40h+var_34], 40400000h
0x92EE16: movss   xmm4, [esp+40h+var_34]
0x92EE1C: movss   dword ptr [esp+40h+var_20], xmm3
0x92EE22: movaps  xmm3, [esp+40h+var_20]
0x92EE27: mulss   xmm1, xmm3
0x92EE2B: mulss   xmm1, xmm3
0x92EE2F: mov     [esp+40h+var_34], 3F000000h
0x92EE37: subss   xmm4, xmm1
0x92EE3B: movss   xmm1, [esp+40h+var_34]
0x92EE41: mulss   xmm1, xmm3
0x92EE45: mulss   xmm1, xmm4
0x92EE49: movaps  xmm3, xmm1
0x92EE4C: shufps  xmm3, xmm1, 0
0x92EE50: movaps  xmm1, xmm3
0x92EE53: mulps   xmm1, xmm2
0x92EE56: movaps  [esp+40h+var_30], xmm1
0x92EE5B: cmp     ecx, edx
0x92EE5D: movaps  xmm2, xmmword ptr [ecx]
0x92EE60: movaps  xmm3, xmm0
0x92EE63: shufps  xmm3, xmm0, 0C9h ; 'É'
0x92EE67: movaps  xmm4, xmm1
0x92EE6A: shufps  xmm4, xmm1, 0D2h ; 'Ò'
0x92EE6E: mulps   xmm4, xmm3
0x92EE71: movaps  xmm3, xmm0
0x92EE74: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x92EE78: movaps  xmm0, xmm1
0x92EE7B: shufps  xmm0, xmm1, 0C9h ; 'É'
0x92EE7F: mulps   xmm0, xmm3
0x92EE82: subps   xmm0, xmm4
0x92EE85: addps   xmm0, xmm2
0x92EE88: movaps  [esp+40h+var_10], xmm0
0x92EE8D: jz      short loc_92EF01
0x92EE8F: movaps  [esp+40h+var_10], xmm2
0x92EE94: movaps  [esp+40h+var_20], xmm0
0x92EE99: mov     ebx, [ebp+arg_1C]
0x92EE9C: mov     eax, [ebx+4]
0x92EE9F: xor     esi, esi
0x92EEA1: test    eax, eax
0x92EEA3: jle     short loc_92EEDE
0x92EEA5: mov     ecx, [ebx]
0x92EEA7: lea     edi, [ecx+esi*8]
0x92EEAA: lea     edx, [esp+40h+var_20]
0x92EEAE: push    edx
0x92EEAF: mov     edx, [edi]
0x92EEB1: lea     eax, [esp+44h+var_10]
0x92EEB5: push    eax
0x92EEB6: movzx   eax, word ptr [edx]
0x92EEB9: mov     edx, [ebp+arg_0]
0x92EEBC: lea     ecx, [esp+48h+var_30]
0x92EEC0: push    ecx
0x92EEC1: mov     ecx, [ebp+arg_4]
0x92EEC4: shl     eax, 4
0x92EEC7: add     eax, edx
0x92EEC9: push    eax
0x92EECA: push    ecx
0x92EECB: call    sub_92D8F0
0x92EED0: add     esp, 14h
0x92EED3: fstp    dword ptr [edi+4]
0x92EED6: mov     eax, [ebx+4]
0x92EED9: inc     esi
0x92EEDA: cmp     esi, eax
0x92EEDC: jl      short loc_92EEA5
0x92EEDE: mov     eax, [ebx+4]
0x92EEE1: cmp     eax, 1
0x92EEE4: jle     short loc_92EEFA
0x92EEE6: mov     edx, [ebx]
0x92EEE8: push    offset sub_92CA50
0x92EEED: dec     eax
0x92EEEE: push    eax
0x92EEEF: push    0
0x92EEF1: push    edx
0x92EEF2: call    sub_92CC50
0x92EEF7: add     esp, 10h
0x92EEFA: pop     edi
0x92EEFB: pop     esi
0x92EEFC: pop     ebx
0x92EEFD: mov     esp, ebp
0x92EEFF: pop     ebp
0x92EF00: retn
0x92EF01: movaps  [esp+40h+var_20], xmm2
0x92EF06: jmp     short loc_92EE99
