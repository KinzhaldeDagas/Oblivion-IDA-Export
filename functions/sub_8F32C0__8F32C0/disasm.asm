0x8F32C0: push    ebp
0x8F32C1: mov     ebp, esp
0x8F32C3: and     esp, 0FFFFFFF0h
0x8F32C6: sub     esp, 2Ch
0x8F32C9: mov     edx, [ebp+arg_0]
0x8F32CC: movaps  xmm1, xmmword ptr [edx]
0x8F32CF: movaps  xmm2, xmmword ptr [edx+10h]
0x8F32D3: movaps  xmm3, xmmword ptr [edx+20h]
0x8F32D7: movaps  xmm4, xmmword ptr [edx+30h]
0x8F32DB: lea     eax, [ecx+20h]
0x8F32DE: lea     edx, [esp+2Ch+var_20]
0x8F32E2: push    esi
0x8F32E3: sub     edx, eax
0x8F32E5: mov     esi, 2
0x8F32EA: lea     ebx, [ebx+0]
0x8F32F0: movaps  xmm0, xmmword ptr [eax]
0x8F32F3: movaps  xmm5, xmm0
0x8F32F6: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F32FA: movaps  xmm6, xmm3
0x8F32FD: mulps   xmm6, xmm5
0x8F3300: movaps  xmm5, xmm0
0x8F3303: shufps  xmm5, xmm0, 55h ; 'U'
0x8F3307: movaps  xmm7, xmm2
0x8F330A: mulps   xmm7, xmm5
0x8F330D: movaps  xmm5, xmm0
0x8F3310: shufps  xmm5, xmm0, 0
0x8F3314: movaps  xmm0, xmm1
0x8F3317: mulps   xmm0, xmm5
0x8F331A: addps   xmm6, xmm4
0x8F331D: addps   xmm0, xmm7
0x8F3320: addps   xmm0, xmm6
0x8F3323: movaps  xmmword ptr [edx+eax], xmm0
0x8F3327: add     eax, 10h
0x8F332A: dec     esi
0x8F332B: jnz     short loc_8F32F0
0x8F332D: movaps  xmm2, [esp+30h+var_20]
0x8F3332: movaps  xmm3, [esp+30h+var_10]
0x8F3337: movaps  xmm0, xmm3
0x8F333A: subps   xmm0, xmm2
0x8F333D: movaps  xmm1, xmm0
0x8F3340: mulps   xmm1, xmm0
0x8F3343: movaps  xmm4, xmm1
0x8F3346: shufps  xmm4, xmm1, 55h ; 'U'
0x8F334A: addss   xmm4, xmm1
0x8F334E: movaps  xmm5, xmm1
0x8F3351: shufps  xmm5, xmm1, 0AAh ; 'ª'
0x8F3355: movaps  xmm1, xmm5
0x8F3358: addss   xmm1, xmm4
0x8F335C: movaps  [esp+30h+var_20], xmm1
0x8F3361: rsqrtss xmm1, xmm1
0x8F3365: movss   dword ptr [esp+30h+var_20], xmm1
0x8F336B: movaps  xmm1, [esp+30h+var_20]
0x8F3370: movaps  xmm4, xmm1
0x8F3373: shufps  xmm4, xmm1, 0
0x8F3377: mulps   xmm0, xmm4
0x8F337A: movaps  [esp+30h+var_20], xmm0
0x8F337F: fld     dword ptr [esp+30h+var_20]
0x8F3383: fmul    dword ptr [esp+30h+var_20]
0x8F3387: mov     eax, [ecx+10h]
0x8F338A: mov     [esp+30h+var_24], eax
0x8F338E: movss   xmm0, [esp+30h+var_24]
0x8F3394: fsubr   dword ptr ds:0A88D38h
0x8F339A: mov     eax, [ebp+arg_8]
0x8F339D: movaps  xmm1, xmm0
0x8F33A0: shufps  xmm1, xmm0, 0
0x8F33A4: fsqrt
0x8F33A6: pop     esi
0x8F33A7: fstp    dword ptr [esp+2Ch+var_20]
0x8F33AB: fld     dword ptr [esp+2Ch+var_20+4]
0x8F33AF: fmul    dword ptr [esp+2Ch+var_20+4]
0x8F33B3: fsubr   dword ptr ds:0A88D38h
0x8F33B9: fsqrt
0x8F33BB: fstp    dword ptr [esp+2Ch+var_20+4]
0x8F33BF: fld     dword ptr [esp+2Ch+var_20+8]
0x8F33C3: fmul    dword ptr [esp+2Ch+var_20+8]
0x8F33C7: fsubr   dword ptr ds:0A88D38h
0x8F33CD: fsqrt
0x8F33CF: fstp    dword ptr [esp+2Ch+var_20+8]
0x8F33D3: fld     [ebp+arg_4]
0x8F33D6: movaps  xmm4, [esp+2Ch+var_20]
0x8F33DB: fadd    dword ptr [ecx+0Ch]
0x8F33DE: mulps   xmm1, xmm4
0x8F33E1: fstp    [esp+2Ch+var_24]
0x8F33E5: movss   xmm0, [esp+2Ch+var_24]
0x8F33EB: shufps  xmm0, xmm0, 0
0x8F33EF: addps   xmm0, xmm1
0x8F33F2: movaps  xmm1, xmm2
0x8F33F5: minps   xmm1, xmm3
0x8F33F8: subps   xmm1, xmm0
0x8F33FB: movaps  xmmword ptr [eax], xmm1
0x8F33FE: maxps   xmm2, xmm3
0x8F3401: movaps  xmmword ptr [eax+10h], xmm2
0x8F3405: movaps  xmm1, xmmword ptr [eax+10h]
0x8F3409: addps   xmm1, xmm0
0x8F340C: movaps  xmmword ptr [eax+10h], xmm1
0x8F3410: mov     esp, ebp
0x8F3412: pop     ebp
0x8F3413: retn    0Ch
