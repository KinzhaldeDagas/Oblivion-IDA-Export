0x952190: push    ebp
0x952191: mov     ebp, esp
0x952193: and     esp, 0FFFFFFF0h
0x952196: sub     esp, 0A8h
0x95219C: push    esi
0x95219D: mov     esi, ecx
0x95219F: mov     eax, [esi+68h]
0x9521A2: movaps  xmm1, xmmword ptr [eax+10h]
0x9521A6: movaps  xmm0, xmmword ptr [eax]
0x9521A9: subps   xmm0, xmm1
0x9521AC: movaps  [esp+0ACh+var_A0], xmm0
0x9521B1: fld     dword ptr [esp+0ACh+var_A0]
0x9521B5: fabs
0x9521B7: xor     ecx, ecx
0x9521B9: fld     dword ptr [esp+0ACh+var_A0+4]
0x9521BD: fabs
0x9521BF: push    edi
0x9521C0: fst     [esp+0B0h+var_A4]
0x9521C4: fld     dword ptr [esp+0B0h+var_A0+8]
0x9521C8: mov     edx, 1
0x9521CD: fabs
0x9521CF: mov     edi, 2
0x9521D4: fstp    [esp+0B0h+var_A8]
0x9521D8: fcomp   st(1)
0x9521DA: fnstsw  ax
0x9521DC: test    ah, 5
0x9521DF: jp      short loc_9521EE
0x9521E1: fstp    st
0x9521E3: xor     edx, edx
0x9521E5: fld     [esp+0B0h+var_A4]
0x9521E9: mov     ecx, 1
0x9521EE: fld     [esp+0B0h+var_A8]
0x9521F2: fcomp   st(1)
0x9521F4: fnstsw  ax
0x9521F6: fstp    st
0x9521F8: test    ah, 5
0x9521FB: jp      short loc_952204
0x9521FD: mov     edi, ecx
0x9521FF: mov     ecx, 2
0x952204: fld     dword ptr [esp+edx*4+0B0h+var_A0]
0x952208: mov     eax, dword ptr [esp+edi*4+0B0h+var_A0]
0x95220C: movaps  xmm3, xmm0
0x95220F: fchs
0x952211: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x952215: movaps  xmm4, xmm0
0x952218: shufps  xmm4, xmm0, 0C9h ; 'É'
0x95221C: mov     dword ptr [esp+ecx*4+0B0h+var_90], 0
0x952224: mov     dword ptr [esp+0B0h+var_90+0Ch], 0
0x95222C: mov     dword ptr [esp+edx*4+0B0h+var_90], eax
0x952230: fstp    dword ptr [esp+edi*4+0B0h+var_90]
0x952234: movaps  xmm1, [esp+0B0h+var_90]
0x952239: movaps  xmm2, xmm1
0x95223C: shufps  xmm2, xmm1, 0C9h ; 'É'
0x952240: mulps   xmm3, xmm2
0x952243: movaps  xmm2, xmm1
0x952246: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x95224A: movaps  xmm0, xmm4
0x95224D: mulps   xmm0, xmm2
0x952250: movaps  xmm2, xmm0
0x952253: subps   xmm2, xmm3
0x952256: movaps  xmm0, xmm1
0x952259: mulps   xmm0, xmm1
0x95225C: movaps  xmm3, xmm0
0x95225F: shufps  xmm3, xmm0, 55h ; 'U'
0x952263: addss   xmm3, xmm0
0x952267: movaps  xmm4, xmm0
0x95226A: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x95226E: mov     eax, [esi+68h]
0x952271: movaps  xmm0, xmm4
0x952274: addss   xmm0, xmm3
0x952278: movaps  [esp+0B0h+var_A0], xmm0
0x95227D: rsqrtss xmm3, xmm0
0x952281: movss   dword ptr [esp+0B0h+var_A0], xmm3
0x952287: movaps  xmm5, [esp+0B0h+var_A0]
0x95228C: mulss   xmm0, xmm5
0x952290: mulss   xmm0, xmm5
0x952294: mov     [esp+0B0h+var_A8], 40400000h
0x95229C: movss   xmm3, [esp+0B0h+var_A8]
0x9522A2: movaps  xmm6, xmm3
0x9522A5: subss   xmm6, xmm0
0x9522A9: mov     [esp+0B0h+var_A8], 3F000000h
0x9522B1: movss   xmm4, [esp+0B0h+var_A8]
0x9522B7: movaps  xmm0, xmm4
0x9522BA: mulss   xmm0, xmm5
0x9522BE: mulss   xmm0, xmm6
0x9522C2: movaps  xmm5, xmm0
0x9522C5: shufps  xmm5, xmm0, 0
0x9522C9: mulps   xmm5, xmm1
0x9522CC: movaps  xmm0, xmm2
0x9522CF: mulps   xmm0, xmm2
0x9522D2: movaps  xmm1, xmm0
0x9522D5: shufps  xmm1, xmm0, 55h ; 'U'
0x9522D9: addss   xmm1, xmm0
0x9522DD: movaps  [esp+0B0h+var_90], xmm5
0x9522E2: movaps  xmm5, xmm0
0x9522E5: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x9522E9: movaps  xmm0, xmm5
0x9522EC: addss   xmm0, xmm1
0x9522F0: movaps  [esp+0B0h+var_A0], xmm0
0x9522F5: rsqrtss xmm1, xmm0
0x9522F9: movss   dword ptr [esp+0B0h+var_A0], xmm1
0x9522FF: movaps  xmm1, [esp+0B0h+var_A0]
0x952304: mulss   xmm0, xmm1
0x952308: lea     ecx, [esp+0B0h+var_A8]
0x95230C: push    ecx
0x95230D: mulss   xmm0, xmm1
0x952311: subss   xmm3, xmm0
0x952315: lea     edx, [esp+0B4h+var_80]
0x952319: push    edx
0x95231A: mulss   xmm4, xmm1
0x95231E: mulss   xmm4, xmm3
0x952322: push    eax
0x952323: lea     ecx, [esp+0BCh+var_90]
0x952327: movaps  xmm0, xmm4
0x95232A: shufps  xmm0, xmm4, 0
0x95232E: push    ecx
0x95232F: mulps   xmm0, xmm2
0x952332: mov     ecx, esi
0x952334: movaps  [esp+0C0h+var_A0], xmm0
0x952339: call    sub_951DF0
0x95233E: mov     ecx, [esi+68h]
0x952341: lea     edx, [esp+0B0h+var_A4]
0x952345: push    edx
0x952346: lea     eax, [esp+0B4h+var_40]
0x95234A: push    eax
0x95234B: push    ecx
0x95234C: lea     edx, [esp+0BCh+var_A0]
0x952350: push    edx
0x952351: mov     ecx, esi
0x952353: call    sub_951DF0
0x952358: fld     [esp+0B0h+var_A8]
0x95235C: fcomp   [esp+0B0h+var_A4]
0x952360: mov     edi, [esi+68h]
0x952363: fnstsw  ax
0x952365: test    ah, 41h
0x952368: mov     eax, [esi+6Ch]
0x95236B: mov     ecx, [eax]
0x95236D: jnz     short loc_952399
0x95236F: movaps  xmm0, [esp+0B0h+var_80]
0x952374: shl     ecx, 4
0x952377: movaps  xmmword ptr [ecx+edi], xmm0
0x95237B: mov     edx, [esi+6Ch]
0x95237E: mov     eax, [edx]
0x952380: movaps  xmm0, [esp+0B0h+var_70]
0x952385: add     ecx, edi
0x952387: mov     ecx, [esi+60h]
0x95238A: shl     eax, 4
0x95238D: add     eax, ecx
0x95238F: movaps  xmmword ptr [eax], xmm0
0x952392: movaps  xmm0, [esp+0B0h+var_60]
0x952397: jmp     short loc_9523C7
0x952399: movaps  xmm0, [esp+0B0h+var_40]
0x95239E: shl     ecx, 4
0x9523A1: movaps  xmmword ptr [ecx+edi], xmm0
0x9523A5: mov     edx, [esi+6Ch]
0x9523A8: mov     eax, [edx]
0x9523AA: movaps  xmm0, [esp+0B0h+var_30]
0x9523B2: add     ecx, edi
0x9523B4: mov     ecx, [esi+60h]
0x9523B7: shl     eax, 4
0x9523BA: add     eax, ecx
0x9523BC: movaps  xmmword ptr [eax], xmm0
0x9523BF: movaps  xmm0, [esp+0B0h+var_20]
0x9523C7: mov     ecx, [esi+6Ch]
0x9523CA: mov     edx, [ecx]
0x9523CC: mov     ecx, [esi+64h]
0x9523CF: shl     edx, 4
0x9523D2: add     edx, ecx
0x9523D4: movaps  xmmword ptr [edx], xmm0
0x9523D7: mov     esi, [esi+6Ch]
0x9523DA: mov     eax, [esi]
0x9523DC: inc     eax
0x9523DD: pop     edi
0x9523DE: mov     [esi], eax
0x9523E0: pop     esi
0x9523E1: mov     esp, ebp
0x9523E3: pop     ebp
0x9523E4: retn
