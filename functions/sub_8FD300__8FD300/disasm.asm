0x8FD300: push    ebp
0x8FD301: mov     ebp, esp
0x8FD303: and     esp, 0FFFFFFF0h
0x8FD306: sub     esp, 44h
0x8FD309: push    ebx
0x8FD30A: mov     ebx, ds:0BA9DE4h
0x8FD310: push    esi
0x8FD311: push    edi
0x8FD312: mov     edi, large fs:2Ch
0x8FD319: mov     eax, [edi+ebx*4]
0x8FD31C: mov     ecx, [eax+1A4h]
0x8FD322: cmp     ecx, [eax+1A8h]
0x8FD328: jnb     short loc_8FD34E
0x8FD32A: mov     esi, eax
0x8FD32C: mov     ecx, [esi+1A4h]
0x8FD332: mov     dword ptr [ecx], offset aTtspheresphere; "TtSphereSphere"
0x8FD338: rdtsc
0x8FD33A: mov     [esp+50h+var_38], eax
0x8FD33E: mov     edx, [esp+50h+var_38]
0x8FD342: mov     [ecx+4], edx
0x8FD345: add     ecx, 0Ch
0x8FD348: mov     [esi+1A4h], ecx
0x8FD34E: mov     ecx, [ebp+arg_4]
0x8FD351: mov     eax, [ebp+arg_0]
0x8FD354: mov     esi, [eax]
0x8FD356: mov     edx, [ecx]
0x8FD358: mov     [esp+50h+var_10], eax
0x8FD35C: mov     eax, [eax+8]
0x8FD35F: mov     [esp+50h+var_C], ecx
0x8FD363: mov     ecx, [ecx+8]
0x8FD366: movaps  xmm1, xmmword ptr [eax+30h]
0x8FD36A: movaps  xmm0, xmmword ptr [ecx+30h]
0x8FD36E: add     ecx, 30h ; '0'
0x8FD371: subps   xmm1, xmm0
0x8FD374: movaps  xmm0, xmm1
0x8FD377: mulps   xmm0, xmm1
0x8FD37A: movaps  xmm2, xmm0
0x8FD37D: shufps  xmm2, xmm0, 55h ; 'U'
0x8FD381: movaps  xmm3, xmm0
0x8FD384: lea     eax, [esp+50h+var_38]
0x8FD388: addss   xmm2, xmm0
0x8FD38C: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8FD390: addss   xmm3, xmm2
0x8FD394: movss   dword ptr [eax], xmm3
0x8FD398: mov     eax, [ebp+arg_8]
0x8FD39B: fld     dword ptr [eax+8]
0x8FD39E: fadd    dword ptr [edx+0Ch]
0x8FD3A1: fadd    dword ptr [esi+0Ch]
0x8FD3A4: fld     st
0x8FD3A6: fmul    st, st(1)
0x8FD3A8: fld     [esp+50h+var_38]
0x8FD3AC: fcompp
0x8FD3AE: fnstsw  ax
0x8FD3B0: fstp    st
0x8FD3B2: test    ah, 5
0x8FD3B5: jp      loc_8FD45A
0x8FD3BB: fld     [esp+50h+var_38]
0x8FD3BF: fcomp   dword ptr ds:0A2FAA8h
0x8FD3C5: fnstsw  ax
0x8FD3C7: test    ah, 41h
0x8FD3CA: jnz     short loc_8FD3FA
0x8FD3CC: fld     [esp+50h+var_38]
0x8FD3D0: fsqrt
0x8FD3D2: fdivr   dword ptr ds:0A2F948h
0x8FD3D8: fst     [esp+50h+var_34]
0x8FD3DC: fmul    [esp+50h+var_38]
0x8FD3E0: movss   xmm0, [esp+50h+var_34]
0x8FD3E6: movaps  xmm2, xmm0
0x8FD3E9: shufps  xmm2, xmm0, 0
0x8FD3ED: movaps  xmm0, xmm2
0x8FD3F0: mulps   xmm0, xmm1
0x8FD3F3: movaps  [esp+50h+var_20], xmm0
0x8FD3F8: jmp     short loc_8FD419
0x8FD3FA: fld     dword ptr ds:0A2FAA8h
0x8FD400: movaps  xmm0, xmmword ptr ds:0B2F090h
0x8FD407: fld     dword ptr [esp+50h+var_20+0Ch]
0x8FD40B: movaps  [esp+50h+var_20], xmm0
0x8FD410: fstp    dword ptr [esp+50h+var_20+0Ch]
0x8FD414: movaps  xmm0, [esp+50h+var_20]
0x8FD419: fld     dword ptr [esi+0Ch]
0x8FD41C: fld     dword ptr [edx+0Ch]
0x8FD41F: mov     edx, [edx+0Ch]
0x8FD422: fadd    st, st(1)
0x8FD424: mov     [esp+50h+var_34], edx
0x8FD428: movss   xmm1, [esp+50h+var_34]
0x8FD42E: movaps  xmm2, xmm1
0x8FD431: fsubr   st, st(2)
0x8FD433: shufps  xmm2, xmm1, 0
0x8FD437: mulps   xmm2, xmm0
0x8FD43A: movaps  xmm0, xmmword ptr [ecx]
0x8FD43D: mov     ecx, [ebp+arg_C]
0x8FD440: fstp    dword ptr [esp+50h+var_20+0Ch]
0x8FD444: mov     eax, [ecx]
0x8FD446: lea     edx, [esp+50h+var_30]
0x8FD44A: fstp    st
0x8FD44C: addps   xmm0, xmm2
0x8FD44F: fstp    st
0x8FD451: push    edx
0x8FD452: movaps  [esp+54h+var_30], xmm0
0x8FD457: call    dword ptr [eax+4]
0x8FD45A: mov     eax, [edi+ebx*4]
0x8FD45D: mov     ecx, [eax+1A4h]
0x8FD463: cmp     ecx, [eax+1A8h]
0x8FD469: jnb     short loc_8FD48F
0x8FD46B: mov     esi, eax
0x8FD46D: mov     ecx, [esi+1A4h]
0x8FD473: mov     dword ptr [ecx], offset aEt; "Et"
0x8FD479: rdtsc
0x8FD47B: mov     [esp+50h+var_34], eax
0x8FD47F: mov     edx, [esp+50h+var_34]
0x8FD483: mov     [ecx+4], edx
0x8FD486: add     ecx, 0Ch
0x8FD489: mov     [esi+1A4h], ecx
0x8FD48F: pop     edi
0x8FD490: pop     esi
0x8FD491: pop     ebx
0x8FD492: mov     esp, ebp
0x8FD494: pop     ebp
0x8FD495: retn
