0x926EC0: push    ebp
0x926EC1: mov     ebp, esp
0x926EC3: and     esp, 0FFFFFFF0h
0x926EC6: sub     esp, 34h
0x926EC9: push    ebx
0x926ECA: push    esi
0x926ECB: mov     esi, ecx
0x926ECD: mov     ebx, [esi+18h]
0x926ED0: movaps  xmm0, xmmword ptr [esi+30h]
0x926ED4: push    edi
0x926ED5: mov     edi, [ebx+50h]
0x926ED8: fld     dword ptr [edi+8Ch]
0x926EDE: movaps  xmm1, xmmword ptr [edi+80h]
0x926EE5: fld     st
0x926EE7: movaps  [esp+40h+var_30], xmm1
0x926EEC: fmul    st, st(1)
0x926EEE: mov     dword ptr [esp+40h+var_30+0Ch], 0
0x926EF6: movaps  xmm2, [esp+40h+var_30]
0x926EFB: movaps  xmm1, xmm2
0x926EFE: fadd    st, st
0x926F00: mulps   xmm1, xmm0
0x926F03: movaps  xmm4, xmm1
0x926F06: shufps  xmm4, xmm1, 55h ; 'U'
0x926F0A: fsub    dword ptr ds:0A2F948h
0x926F10: addss   xmm4, xmm1
0x926F14: movaps  xmm5, xmm1
0x926F17: shufps  xmm5, xmm1, 0AAh ; 'ª'
0x926F1B: fstp    [esp+40h+var_34]
0x926F1F: movss   xmm3, [esp+40h+var_34]
0x926F25: addss   xmm5, xmm4
0x926F29: lea     eax, [esp+40h+var_34]
0x926F2D: movss   dword ptr [eax], xmm5
0x926F31: fld     [esp+40h+var_34]
0x926F35: fadd    st, st
0x926F37: movaps  xmm6, xmm2
0x926F3A: shufps  xmm6, xmm2, 0D2h ; 'Ò'
0x926F3E: movaps  xmm5, xmm0
0x926F41: fstp    [esp+40h+var_34]
0x926F45: movss   xmm1, [esp+40h+var_34]
0x926F4B: shufps  xmm5, xmm0, 0C9h ; 'É'
0x926F4F: mulps   xmm6, xmm5
0x926F52: fadd    st, st
0x926F54: movaps  xmm7, xmm2
0x926F57: shufps  xmm7, xmm2, 0C9h ; 'É'
0x926F5B: fstp    [esp+40h+var_34]
0x926F5F: movss   xmm4, [esp+40h+var_34]
0x926F65: movaps  xmm5, xmm0
0x926F68: shufps  xmm5, xmm0, 0D2h ; 'Ò'
0x926F6C: mulps   xmm7, xmm5
0x926F6F: movaps  xmm5, xmm4
0x926F72: shufps  xmm5, xmm4, 0
0x926F76: movaps  xmm4, xmm1
0x926F79: shufps  xmm4, xmm1, 0
0x926F7D: subps   xmm7, xmm6
0x926F80: mulps   xmm4, xmm2
0x926F83: movaps  xmm2, xmmword ptr [esi+20h]
0x926F87: movaps  xmm1, xmm3
0x926F8A: shufps  xmm1, xmm3, 0
0x926F8E: mulps   xmm1, xmm0
0x926F91: addps   xmm1, xmm4
0x926F94: mulps   xmm5, xmm7
0x926F97: movaps  xmm4, xmm1
0x926F9A: addps   xmm4, xmm5
0x926F9D: movaps  [esp+40h+var_10], xmm4
0x926FA2: fld     dword ptr [edi+8Ch]
0x926FA8: movaps  xmm1, xmmword ptr [edi+80h]
0x926FAF: fld     st
0x926FB1: fmul    st, st(1)
0x926FB3: movaps  [esp+40h+var_30], xmm1
0x926FB8: mov     dword ptr [esp+40h+var_30+0Ch], 0
0x926FC0: movaps  xmm3, [esp+40h+var_30]
0x926FC5: fadd    st, st
0x926FC7: movaps  xmm1, xmm3
0x926FCA: mulps   xmm1, xmm2
0x926FCD: movaps  xmm6, xmm1
0x926FD0: fsub    dword ptr ds:0A2F948h
0x926FD6: shufps  xmm6, xmm1, 55h ; 'U'
0x926FDA: movaps  xmm7, xmm1
0x926FDD: addss   xmm6, xmm1
0x926FE1: fstp    [esp+40h+var_34]
0x926FE5: movss   xmm5, [esp+40h+var_34]
0x926FEB: shufps  xmm7, xmm1, 0AAh ; 'ª'
0x926FEF: lea     ecx, [esp+40h+var_34]
0x926FF3: addss   xmm7, xmm6
0x926FF7: movss   dword ptr [ecx], xmm7
0x926FFB: fld     [esp+40h+var_34]
0x926FFF: movaps  xmm6, xmm3
0x927002: fadd    st, st
0x927004: shufps  xmm6, xmm3, 0D2h ; 'Ò'
0x927008: movaps  xmm7, xmm3
0x92700B: shufps  xmm7, xmm3, 0C9h ; 'É'
0x92700F: fstp    [esp+40h+var_34]
0x927013: movss   xmm1, [esp+40h+var_34]
0x927019: movaps  [esp+40h+var_30], xmm1
0x92701E: fadd    st, st
0x927020: lea     edx, [esp+40h+var_34]
0x927024: fstp    [esp+40h+var_34]
0x927028: movss   xmm1, [esp+40h+var_34]
0x92702E: movaps  [esp+40h+var_20], xmm1
0x927033: movaps  xmm1, xmm2
0x927036: shufps  xmm1, xmm2, 0C9h ; 'É'
0x92703A: mulps   xmm6, xmm1
0x92703D: movaps  xmm1, xmm2
0x927040: shufps  xmm1, xmm2, 0D2h ; 'Ò'
0x927044: mulps   xmm7, xmm1
0x927047: movaps  xmm1, [esp+40h+var_20]
0x92704C: subps   xmm7, xmm6
0x92704F: movaps  xmm6, xmm1
0x927052: shufps  xmm6, xmm1, 0
0x927056: movaps  xmm1, [esp+40h+var_30]
0x92705B: mulps   xmm6, xmm7
0x92705E: movaps  xmm7, xmm1
0x927061: shufps  xmm7, xmm1, 0
0x927065: mulps   xmm7, xmm3
0x927068: movaps  xmm1, xmm5
0x92706B: shufps  xmm1, xmm5, 0
0x92706F: mulps   xmm1, xmm2
0x927072: movaps  xmm2, xmm1
0x927075: movaps  xmm1, xmm0
0x927078: addps   xmm2, xmm7
0x92707B: addps   xmm2, xmm6
0x92707E: mulps   xmm1, xmm2
0x927081: movaps  xmm3, xmm1
0x927084: shufps  xmm3, xmm1, 55h ; 'U'
0x927088: addss   xmm3, xmm1
0x92708C: movaps  xmm5, xmm1
0x92708F: shufps  xmm5, xmm1, 0AAh ; 'ª'
0x927093: addss   xmm5, xmm3
0x927097: movss   dword ptr [edx], xmm5
0x92709B: fld     [esp+40h+var_34]
0x92709F: fchs
0x9270A1: movaps  [esp+40h+var_20], xmm2
0x9270A6: fstp    [esp+40h+var_34]
0x9270AA: movss   xmm1, [esp+40h+var_34]
0x9270B0: movaps  xmm3, xmm1
0x9270B3: shufps  xmm3, xmm1, 0
0x9270B7: mulps   xmm3, xmm2
0x9270BA: addps   xmm0, xmm3
0x9270BD: movaps  xmm1, xmm0
0x9270C0: mulps   xmm1, xmm0
0x9270C3: movaps  xmm3, xmm1
0x9270C6: shufps  xmm3, xmm1, 55h ; 'U'
0x9270CA: addss   xmm3, xmm1
0x9270CE: movaps  xmm5, xmm1
0x9270D1: shufps  xmm5, xmm1, 0AAh ; 'ª'
0x9270D5: movaps  xmm1, xmm5
0x9270D8: addss   xmm1, xmm3
0x9270DC: movaps  [esp+40h+var_30], xmm1
0x9270E1: rsqrtss xmm3, xmm1
0x9270E5: movss   dword ptr [esp+40h+var_30], xmm3
0x9270EB: movaps  xmm3, [esp+40h+var_30]
0x9270F0: mulss   xmm1, xmm3
0x9270F4: mulss   xmm1, xmm3
0x9270F8: mov     [esp+40h+var_34], 40400000h
0x927100: movss   xmm5, [esp+40h+var_34]
0x927106: subss   xmm5, xmm1
0x92710A: mov     [esp+40h+var_34], 3F000000h
0x927112: movss   xmm1, [esp+40h+var_34]
0x927118: mulss   xmm1, xmm3
0x92711C: mulss   xmm1, xmm5
0x927120: movaps  xmm3, xmm1
0x927123: shufps  xmm3, xmm1, 0
0x927127: movaps  xmm1, xmm3
0x92712A: mulps   xmm1, xmm0
0x92712D: movaps  [esp+40h+var_30], xmm1
0x927132: movaps  xmm0, xmm4
0x927135: mulps   xmm0, xmm1
0x927138: movaps  xmm3, xmm0
0x92713B: shufps  xmm3, xmm0, 55h ; 'U'
0x92713F: movaps  xmm5, xmm0
0x927142: lea     eax, [esp+40h+var_34]
0x927146: addss   xmm3, xmm0
0x92714A: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x92714E: addss   xmm5, xmm3
0x927152: movss   dword ptr [eax], xmm5
0x927156: fld     [esp+40h+var_34]
0x92715A: fabs
0x92715C: fcomp   dword ptr ds:0A2F948h
0x927162: fnstsw  ax
0x927164: test    ah, 1
0x927167: jnz     short loc_92718A
0x927169: fld     [esp+40h+var_34]
0x92716D: fcomp   dword ptr ds:0A2FAA8h
0x927173: fnstsw  ax
0x927175: test    ah, 41h
0x927178: jnz     short loc_927182
0x92717A: fld     dword ptr ds:0A2FAA8h
0x927180: jmp     short loc_9271A2
0x927182: fld     dword ptr ds:0AA1854h
0x927188: jmp     short loc_9271A2
0x92718A: fld     [esp+40h+var_34]
0x92718E: call    __CIacos
0x927193: movaps  xmm2, [esp+40h+var_20]
0x927198: movaps  xmm1, [esp+40h+var_30]
0x92719D: movaps  xmm4, [esp+40h+var_10]
0x9271A2: movaps  xmm0, xmm1
0x9271A5: shufps  xmm0, xmm1, 0C9h ; 'É'
0x9271A9: movaps  xmm3, xmm4
0x9271AC: shufps  xmm3, xmm4, 0D2h ; 'Ò'
0x9271B0: mulps   xmm3, xmm0
0x9271B3: movaps  xmm0, xmm1
0x9271B6: shufps  xmm0, xmm1, 0D2h ; 'Ò'
0x9271BA: movaps  xmm1, xmm4
0x9271BD: shufps  xmm1, xmm4, 0C9h ; 'É'
0x9271C1: mulps   xmm1, xmm0
0x9271C4: movaps  xmm0, xmm1
0x9271C7: movaps  xmm1, xmmword ptr ds:0A372D0h
0x9271CE: subps   xmm0, xmm3
0x9271D1: movaps  [esp+40h+var_10], xmm0
0x9271D6: andps   xmm0, xmm1
0x9271D9: movaps  [esp+40h+var_30], xmm0
0x9271DE: fld     dword ptr [esp+40h+var_30]
0x9271E2: fcomp   dword ptr [esp+40h+var_30+4]
0x9271E6: fnstsw  ax
0x9271E8: test    ah, 5
0x9271EB: jp      short loc_92720A
0x9271ED: fld     dword ptr [esp+40h+var_30+4]
0x9271F1: fcomp   dword ptr [esp+40h+var_30+8]
0x9271F5: fnstsw  ax
0x9271F7: test    ah, 5
0x9271FA: jp      short loc_927203
0x9271FC: mov     eax, 2
0x927201: jmp     short loc_927222
0x927203: mov     eax, 1
0x927208: jmp     short loc_927222
0x92720A: fld     dword ptr [esp+40h+var_30]
0x92720E: fcomp   dword ptr [esp+40h+var_30+8]
0x927212: fnstsw  ax
0x927214: test    ah, 5
0x927217: jp      short loc_927220
0x927219: mov     eax, 2
0x92721E: jmp     short loc_927222
0x927220: xor     eax, eax
0x927222: fld     dword ptr [esp+eax*4+40h+var_10]
0x927226: movaps  xmm0, xmm2
0x927229: andps   xmm0, xmm1
0x92722C: movaps  [esp+40h+var_30], xmm0
0x927231: fld     dword ptr [esp+40h+var_30]
0x927235: fcomp   dword ptr [esp+40h+var_30+4]
0x927239: fnstsw  ax
0x92723B: test    ah, 5
0x92723E: jp      short loc_92725D
0x927240: fld     dword ptr [esp+40h+var_30+4]
0x927244: fcomp   dword ptr [esp+40h+var_30+8]
0x927248: fnstsw  ax
0x92724A: test    ah, 5
0x92724D: jp      short loc_927256
0x92724F: mov     eax, 2
0x927254: jmp     short loc_927275
0x927256: mov     eax, 1
0x92725B: jmp     short loc_927275
0x92725D: fld     dword ptr [esp+40h+var_30]
0x927261: fcomp   dword ptr [esp+40h+var_30+8]
0x927265: fnstsw  ax
0x927267: test    ah, 5
0x92726A: jp      short loc_927273
0x92726C: mov     eax, 2
0x927271: jmp     short loc_927275
0x927273: xor     eax, eax
0x927275: fld     dword ptr [esp+eax*4+40h+var_20]
0x927279: fstp    [esp+40h+var_34]
0x92727D: movss   xmm0, [esp+40h+var_34]
0x927283: movmskps ecx, xmm0
0x927286: fstp    [esp+40h+var_34]
0x92728A: movss   xmm0, [esp+40h+var_34]
0x927290: movmskps edx, xmm0
0x927293: xor     ecx, edx
0x927295: test    cl, 1
0x927298: jz      short loc_92729C
0x92729A: fchs
0x92729C: mov     eax, [ebp+arg_0]
0x92729F: fld     dword ptr [esi+44h]
0x9272A2: fmul    dword ptr [eax+0Ch]
0x9272A5: movaps  xmm1, xmmword ptr [edi+0E0h]
0x9272AC: mov     ecx, ebx
0x9272AE: fstp    [esp+40h+var_34]
0x9272B2: movss   xmm0, [esp+40h+var_34]
0x9272B8: fld     dword ptr [esi+40h]
0x9272BB: movaps  xmm3, xmm0
0x9272BE: fmul    dword ptr [eax+0Ch]
0x9272C1: shufps  xmm3, xmm0, 0
0x9272C5: movaps  xmm0, xmm3
0x9272C8: mulps   xmm0, xmm1
0x9272CB: fmul    st, st(1)
0x9272CD: fstp    [esp+40h+var_34]
0x9272D1: movss   xmm1, [esp+40h+var_34]
0x9272D7: movaps  xmm3, xmm1
0x9272DA: shufps  xmm3, xmm1, 0
0x9272DE: fstp    st
0x9272E0: mulps   xmm3, xmm2
0x9272E3: subps   xmm3, xmm0
0x9272E6: movaps  [esp+40h+var_10], xmm3
0x9272EB: call    sub_8A6410
0x9272F0: mov     ecx, [ebx+50h]
0x9272F3: mov     eax, [ecx]
0x9272F5: lea     edx, [esp+40h+var_10]
0x9272F9: push    edx
0x9272FA: call    dword ptr [eax+64h]
0x9272FD: pop     edi
0x9272FE: pop     esi
0x9272FF: pop     ebx
0x927300: mov     esp, ebp
0x927302: pop     ebp
0x927303: retn    4
