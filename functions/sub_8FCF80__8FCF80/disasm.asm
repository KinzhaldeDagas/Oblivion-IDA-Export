0x8FCF80: push    ebp
0x8FCF81: mov     ebp, esp
0x8FCF83: and     esp, 0FFFFFFF0h
0x8FCF86: sub     esp, 14h
0x8FCF89: push    ebx
0x8FCF8A: push    esi
0x8FCF8B: mov     esi, large fs:2Ch
0x8FCF92: push    edi
0x8FCF93: mov     edi, ecx
0x8FCF95: mov     ecx, ds:0BA9DE4h
0x8FCF9B: mov     eax, [esi+ecx*4]
0x8FCF9E: mov     edx, [eax+1A4h]
0x8FCFA4: cmp     edx, [eax+1A8h]
0x8FCFAA: jnb     short loc_8FCFD0
0x8FCFAC: mov     ebx, eax
0x8FCFAE: mov     ecx, [ebx+1A4h]
0x8FCFB4: mov     dword ptr [ecx], offset aTtspheresphere; "TtSphereSphere"
0x8FCFBA: rdtsc
0x8FCFBC: mov     [esp+20h+var_8], eax
0x8FCFC0: mov     eax, [esp+20h+var_8]
0x8FCFC4: mov     [ecx+4], eax
0x8FCFC7: add     ecx, 0Ch
0x8FCFCA: mov     [ebx+1A4h], ecx
0x8FCFD0: mov     ecx, [ebp+arg_4]
0x8FCFD3: mov     edx, [ecx]
0x8FCFD5: mov     eax, [ebp+arg_0]
0x8FCFD8: mov     ebx, [eax]
0x8FCFDA: mov     eax, [eax+8]
0x8FCFDD: mov     ecx, [ecx+8]
0x8FCFE0: movaps  xmm1, xmmword ptr [eax+30h]
0x8FCFE4: movaps  xmm0, xmmword ptr [ecx+30h]
0x8FCFE8: add     ecx, 30h ; '0'
0x8FCFEB: subps   xmm1, xmm0
0x8FCFEE: movaps  xmm0, xmm1
0x8FCFF1: mulps   xmm0, xmm1
0x8FCFF4: movaps  xmm2, xmm0
0x8FCFF7: shufps  xmm2, xmm0, 55h ; 'U'
0x8FCFFB: movaps  xmm3, xmm0
0x8FCFFE: lea     eax, [esp+20h+var_8]
0x8FD002: addss   xmm2, xmm0
0x8FD006: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8FD00A: addss   xmm3, xmm2
0x8FD00E: movss   dword ptr [eax], xmm3
0x8FD012: mov     eax, [ebp+arg_8]
0x8FD015: fld     dword ptr [eax+8]
0x8FD018: fadd    dword ptr [edx+0Ch]
0x8FD01B: fadd    dword ptr [ebx+0Ch]
0x8FD01E: fld     st
0x8FD020: fmul    st, st(1)
0x8FD022: fld     [esp+20h+var_8]
0x8FD026: fcompp
0x8FD028: fnstsw  ax
0x8FD02A: fstp    st
0x8FD02C: test    ah, 5
0x8FD02F: jp      loc_8FD138
0x8FD035: fld     [esp+20h+var_8]
0x8FD039: mov     eax, [ebp+arg_C]
0x8FD03C: fcomp   dword ptr ds:0A2FAA8h
0x8FD042: mov     esi, [eax]
0x8FD044: fnstsw  ax
0x8FD046: test    ah, 41h
0x8FD049: jnz     short loc_8FD07D
0x8FD04B: fld     [esp+20h+var_8]
0x8FD04F: fsqrt
0x8FD051: fdivr   dword ptr ds:0A2F948h
0x8FD057: fst     [esp+20h+var_4]
0x8FD05B: fmul    [esp+20h+var_8]
0x8FD05F: movss   xmm0, [esp+20h+var_4]
0x8FD065: movaps  xmm2, xmm0
0x8FD068: shufps  xmm2, xmm0, 0
0x8FD06C: mulps   xmm2, xmm1
0x8FD06F: movaps  xmmword ptr [esi+10h], xmm2
0x8FD073: fld     dword ptr [edx+0Ch]
0x8FD076: fadd    dword ptr [ebx+0Ch]
0x8FD079: fsubp   st(1), st
0x8FD07B: jmp     short loc_8FD090
0x8FD07D: movaps  xmm0, xmmword ptr ds:0B2F090h
0x8FD084: movaps  xmmword ptr [esi+10h], xmm0
0x8FD088: fld     dword ptr [edx+0Ch]
0x8FD08B: fadd    dword ptr [ebx+0Ch]
0x8FD08E: fchs
0x8FD090: mov     edx, [edx+0Ch]
0x8FD093: movaps  xmm1, xmmword ptr [esi+10h]
0x8FD097: mov     [esp+20h+var_4], edx
0x8FD09B: movss   xmm0, [esp+20h+var_4]
0x8FD0A1: movaps  xmm2, xmm0
0x8FD0A4: shufps  xmm2, xmm0, 0
0x8FD0A8: movaps  xmm0, xmmword ptr [ecx]
0x8FD0AB: mulps   xmm2, xmm1
0x8FD0AE: addps   xmm0, xmm2
0x8FD0B1: movaps  xmmword ptr [esi], xmm0
0x8FD0B4: fstp    dword ptr [esi+1Ch]
0x8FD0B7: cmp     word ptr [edi+0Ch], 0FFFFh
0x8FD0BD: jnz     short loc_8FD0D8
0x8FD0BF: mov     edx, [ebp+arg_8]
0x8FD0C2: mov     ecx, [edi+8]
0x8FD0C5: mov     eax, [ecx]
0x8FD0C7: push    esi
0x8FD0C8: push    edx
0x8FD0C9: mov     edx, [ebp+arg_4]
0x8FD0CC: push    edx
0x8FD0CD: mov     edx, [ebp+arg_0]
0x8FD0D0: push    edx
0x8FD0D1: call    dword ptr [eax+8]
0x8FD0D4: mov     [edi+0Ch], ax
0x8FD0D8: mov     di, [edi+0Ch]
0x8FD0DC: cmp     di, 0FFFFh
0x8FD0E1: jz      short loc_8FD0ED
0x8FD0E3: mov     eax, [ebp+arg_C]
0x8FD0E6: mov     [esi+20h], di
0x8FD0EA: add     dword ptr [eax], 30h ; '0'
0x8FD0ED: mov     esi, large fs:2Ch
0x8FD0F4: mov     ecx, ds:0BA9DE4h
0x8FD0FA: mov     eax, [esi+ecx*4]
0x8FD0FD: mov     edx, [eax+1A4h]
0x8FD103: cmp     edx, [eax+1A8h]
0x8FD109: jnb     short loc_8FD12F
0x8FD10B: mov     esi, eax
0x8FD10D: mov     ecx, [esi+1A4h]
0x8FD113: mov     dword ptr [ecx], offset aEt; "Et"
0x8FD119: rdtsc
0x8FD11B: mov     [esp+20h+var_4], eax
0x8FD11F: mov     eax, [esp+20h+var_4]
0x8FD123: mov     [ecx+4], eax
0x8FD126: add     ecx, 0Ch
0x8FD129: mov     [esi+1A4h], ecx
0x8FD12F: pop     edi
0x8FD130: pop     esi
0x8FD131: pop     ebx
0x8FD132: mov     esp, ebp
0x8FD134: pop     ebp
0x8FD135: retn    10h
0x8FD138: xor     eax, eax
0x8FD13A: mov     ax, [edi+0Ch]
0x8FD13E: cmp     ax, 0FFFFh
0x8FD142: jz      short loc_8FD0F4
0x8FD144: mov     ecx, [edi+8]
0x8FD147: mov     edx, [ecx]
0x8FD149: push    eax
0x8FD14A: call    dword ptr [edx+10h]
0x8FD14D: mov     word ptr [edi+0Ch], 0FFFFh
0x8FD153: jmp     short loc_8FD0F4
