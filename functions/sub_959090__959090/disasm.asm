0x959090: push    ebp
0x959091: mov     ebp, esp
0x959093: and     esp, 0FFFFFFF0h
0x959096: sub     esp, 34h
0x959099: mov     ecx, [ebp+arg_0]
0x95909C: mov     eax, [ecx+10h]
0x95909F: dec     eax
0x9590A0: push    ebx
0x9590A1: mov     ebx, [ebp+arg_10]
0x9590A4: push    esi
0x9590A5: push    edi
0x9590A6: mov     [esp+40h+var_20], 7F7FFFFFh
0x9590AE: js      loc_95931A
0x9590B4: lea     edx, [eax+eax*4]
0x9590B7: shl     edx, 4
0x9590BA: inc     eax
0x9590BB: lea     edi, [edx+ecx+0F80h]
0x9590C2: mov     [esp+40h+var_14], eax
0x9590C6: fld     dword ptr [edi]
0x9590C8: lea     edx, [edi-10h]
0x9590CB: fld     st
0x9590CD: fmul    st, st(1)
0x9590CF: fcomp   [esp+40h+var_20]
0x9590D3: fnstsw  ax
0x9590D5: fstp    st
0x9590D7: test    ah, 41h
0x9590DA: jz      loc_959308
0x9590E0: mov     ecx, [ebp+arg_4]
0x9590E3: mov     eax, [ecx+10h]
0x9590E6: dec     eax
0x9590E7: cmp     eax, 1
0x9590EA: jl      loc_959308
0x9590F0: lea     esi, [eax+eax*4]
0x9590F3: shl     esi, 4
0x9590F6: lea     ecx, [esi+ecx+0F70h]
0x9590FD: mov     esi, eax
0x9590FF: nop
0x959100: fld     dword ptr [ecx+10h]
0x959103: fld     st
0x959105: fmul    st, st(1)
0x959107: fcomp   [esp+40h+var_20]
0x95910B: fnstsw  ax
0x95910D: fstp    st
0x95910F: test    ah, 41h
0x959112: jz      loc_9592FE
0x959118: movaps  xmm1, xmmword ptr [ecx]
0x95911B: movaps  xmm0, xmmword ptr [edx]
0x95911E: mulps   xmm0, xmm1
0x959121: movaps  xmm1, xmm0
0x959124: shufps  xmm1, xmm0, 55h ; 'U'
0x959128: movaps  xmm2, xmm0
0x95912B: lea     eax, [esp+40h+var_30]
0x95912F: addss   xmm1, xmm0
0x959133: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x959137: addss   xmm2, xmm1
0x95913B: movss   dword ptr [eax], xmm2
0x95913F: fld     [esp+40h+var_30]
0x959143: fcomp   dword ptr ds:0A45E4Ch
0x959149: fnstsw  ax
0x95914B: test    ah, 5
0x95914E: jnp     loc_9592FE
0x959154: mov     eax, [edi]
0x959156: fld     [esp+40h+var_30]
0x95915A: mov     [esp+40h+var_28], eax
0x95915E: mov     eax, [ecx+10h]
0x959161: mov     [esp+40h+var_24], eax
0x959165: fmul    [esp+40h+var_24]
0x959169: fsubr   [esp+40h+var_28]
0x95916D: fstp    [esp+40h+var_1C]
0x959171: fld     [esp+40h+var_30]
0x959175: fmul    [esp+40h+var_28]
0x959179: fsubr   [esp+40h+var_24]
0x95917D: fstp    [esp+40h+var_18]
0x959181: fld     [esp+40h+var_1C]
0x959185: fcomp   dword ptr ds:0AA386Ch
0x95918B: fnstsw  ax
0x95918D: test    ah, 41h
0x959190: jnz     loc_95928F
0x959196: fld     [esp+40h+var_18]
0x95919A: fcomp   dword ptr ds:0AA386Ch
0x9591A0: fnstsw  ax
0x9591A2: test    ah, 41h
0x9591A5: jnz     loc_959266
0x9591AB: fld     [esp+40h+var_1C]
0x9591AF: fcomp   [esp+40h+var_18]
0x9591B3: fnstsw  ax
0x9591B5: test    ah, 41h
0x9591B8: jnz     short loc_9591FE
0x9591BA: fld     [esp+40h+var_18]
0x9591BE: fdiv    [esp+40h+var_1C]
0x9591C2: fstp    [esp+40h+var_18]
0x9591C6: fld     [esp+40h+var_30]
0x9591CA: fmul    [esp+40h+var_18]
0x9591CE: fadd    dword ptr ds:0A2F948h
0x9591D4: fdivr   dword ptr ds:0A2F948h
0x9591DA: fst     [esp+40h+var_1C]
0x9591DE: fld     [esp+40h+var_18]
0x9591E2: fmul    st, st(1)
0x9591E4: fstp    [esp+40h+var_2C]
0x9591E8: fld     [esp+40h+var_1C]
0x9591EC: fmul    [esp+40h+var_28]
0x9591F0: fst     [esp+40h+var_1C]
0x9591F4: fmul    [esp+40h+var_18]
0x9591F8: fld     [esp+40h+var_1C]
0x9591FC: jmp     short loc_95923C
0x9591FE: fld     [esp+40h+var_1C]
0x959202: fdiv    [esp+40h+var_18]
0x959206: fstp    [esp+40h+var_18]
0x95920A: fld     [esp+40h+var_30]
0x95920E: fmul    [esp+40h+var_18]
0x959212: fadd    dword ptr ds:0A2F948h
0x959218: fdivr   dword ptr ds:0A2F948h
0x95921E: fst     [esp+40h+var_1C]
0x959222: fstp    [esp+40h+var_2C]
0x959226: fld     [esp+40h+var_18]
0x95922A: fmul    [esp+40h+var_2C]
0x95922E: fld     [esp+40h+var_1C]
0x959232: fmul    [esp+40h+var_24]
0x959236: fld     [esp+40h+var_18]
0x95923A: fmul    st, st(1)
0x95923C: fld     [esp+40h+var_30]
0x959240: fmul    st, st(2)
0x959242: faddp   st(1), st
0x959244: fld     [esp+40h+var_30]
0x959248: fmul    [esp+40h+var_30]
0x95924C: fsubr   dword ptr ds:0A2F948h
0x959252: fmul    st, st(2)
0x959254: fmulp   st(2), st
0x959256: fld     st
0x959258: fmul    st, st(1)
0x95925A: faddp   st(2), st
0x95925C: fxch    st(1)
0x95925E: fst     [esp+40h+var_1C]
0x959262: fstp    st(1)
0x959264: jmp     short loc_9592D4
0x959266: fld     [esp+40h+var_24]
0x95926A: fcomp   dword ptr ds:0A2FAA8h
0x959270: fnstsw  ax
0x959272: test    ah, 41h
0x959275: jnz     short loc_9592B8
0x959277: fld     dword ptr ds:0A2F948h
0x95927D: mov     [esp+40h+var_2C], 0
0x959285: fld     [esp+40h+var_28]
0x959289: fmul    [esp+40h+var_28]
0x95928D: jmp     short loc_9592D0
0x95928F: fld     [esp+40h+var_28]
0x959293: fcomp   dword ptr ds:0AA386Ch
0x959299: fnstsw  ax
0x95929B: test    ah, 41h
0x95929E: jnz     short loc_9592B8
0x9592A0: fld     dword ptr ds:0A2FAA8h
0x9592A6: mov     [esp+40h+var_2C], 3F800000h
0x9592AE: fld     [esp+40h+var_24]
0x9592B2: fmul    [esp+40h+var_24]
0x9592B6: jmp     short loc_9592D0
0x9592B8: fld     dword ptr ds:0A3D65Ch
0x9592BE: mov     [esp+40h+var_2C], 3F000000h
0x9592C6: fld     [esp+40h+var_30]
0x9592CA: fmul    [esp+40h+var_30]
0x9592CE: fchs
0x9592D0: fst     [esp+40h+var_1C]
0x9592D4: fcomp   [esp+40h+var_20]
0x9592D8: fnstsw  ax
0x9592DA: test    ah, 5
0x9592DD: jp      short loc_9592FC
0x9592DF: mov     eax, [esp+40h+var_2C]
0x9592E3: fstp    dword ptr [esp+40h+var_10]
0x9592E7: mov     dword ptr [esp+40h+var_10+4], eax
0x9592EB: mov     eax, [ebp+arg_C]
0x9592EE: mov     [eax], edx
0x9592F0: mov     eax, [esp+40h+var_1C]
0x9592F4: mov     [ebx], ecx
0x9592F6: mov     [esp+40h+var_20], eax
0x9592FA: jmp     short loc_9592FE
0x9592FC: fstp    st
0x9592FE: sub     ecx, 50h ; 'P'
0x959301: dec     esi
0x959302: jnz     loc_959100
0x959308: mov     eax, [esp+40h+var_14]
0x95930C: sub     edi, 50h ; 'P'
0x95930F: dec     eax
0x959310: mov     [esp+40h+var_14], eax
0x959314: jnz     loc_9590C6
0x95931A: mov     ecx, dword ptr [esp+40h+var_10]
0x95931E: fld     dword ptr ds:0A2FAA8h
0x959324: mov     edx, [ebp+arg_C]
0x959327: fcomp   [esp+40h+var_20]
0x95932B: mov     eax, [edx]
0x95932D: movaps  xmm1, xmmword ptr [eax]
0x959330: mov     edx, dword ptr [esp+40h+var_10+4]
0x959334: mov     [esp+40h+var_14], ecx
0x959338: movss   xmm0, [esp+40h+var_14]
0x95933E: mov     ecx, [ebp+arg_8]
0x959341: movaps  xmm2, xmm0
0x959344: shufps  xmm2, xmm0, 0
0x959348: movaps  xmm0, xmm2
0x95934B: mulps   xmm0, xmm1
0x95934E: movaps  xmmword ptr [ecx], xmm0
0x959351: mov     eax, [ebx]
0x959353: movaps  xmm2, xmmword ptr [eax]
0x959356: fnstsw  ax
0x959358: mov     [esp+40h+var_14], edx
0x95935C: test    ah, 41h
0x95935F: movss   xmm1, [esp+40h+var_14]
0x959365: movaps  xmm3, xmm1
0x959368: shufps  xmm3, xmm1, 0
0x95936C: mulps   xmm3, xmm2
0x95936F: addps   xmm0, xmm3
0x959372: movaps  xmm1, xmm0
0x959375: mulps   xmm0, xmm1
0x959378: movaps  xmm2, xmm0
0x95937B: shufps  xmm2, xmm0, 55h ; 'U'
0x95937F: addss   xmm2, xmm0
0x959383: movaps  xmm3, xmm0
0x959386: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x95938A: movaps  xmm0, xmm3
0x95938D: addss   xmm0, xmm2
0x959391: movaps  [esp+40h+var_10], xmm0
0x959396: rsqrtss xmm2, xmm0
0x95939A: movss   dword ptr [esp+40h+var_10], xmm2
0x9593A0: movaps  xmm2, [esp+40h+var_10]
0x9593A5: mulss   xmm0, xmm2
0x9593A9: mulss   xmm0, xmm2
0x9593AD: mov     [esp+40h+var_14], 40400000h
0x9593B5: movss   xmm3, [esp+40h+var_14]
0x9593BB: subss   xmm3, xmm0
0x9593BF: mov     [esp+40h+var_14], 3F000000h
0x9593C7: movss   xmm0, [esp+40h+var_14]
0x9593CD: mulss   xmm0, xmm2
0x9593D1: mulss   xmm0, xmm3
0x9593D5: movaps  xmm2, xmm0
0x9593D8: shufps  xmm2, xmm0, 0
0x9593DC: mulps   xmm2, xmm1
0x9593DF: movaps  xmmword ptr [ecx], xmm2
0x9593E2: jnz     short loc_9593F6
0x9593E4: fld     dword ptr ds:0A2FAA8h
0x9593EA: fsqrt
0x9593EC: fstp    dword ptr [ecx+0Ch]
0x9593EF: pop     edi
0x9593F0: pop     esi
0x9593F1: pop     ebx
0x9593F2: mov     esp, ebp
0x9593F4: pop     ebp
0x9593F5: retn
0x9593F6: fld     [esp+40h+var_20]
0x9593FA: pop     edi
0x9593FB: fsqrt
0x9593FD: pop     esi
0x9593FE: pop     ebx
0x9593FF: fstp    dword ptr [ecx+0Ch]
0x959402: mov     esp, ebp
0x959404: pop     ebp
0x959405: retn
