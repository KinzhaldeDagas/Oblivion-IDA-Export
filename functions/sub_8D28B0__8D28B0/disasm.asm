0x8D28B0: push    ebp
0x8D28B1: mov     ebp, esp
0x8D28B3: and     esp, 0FFFFFFF0h
0x8D28B6: sub     esp, 30h
0x8D28B9: movaps  xmm0, xmmword ptr [ecx+20h]
0x8D28BD: movaps  xmm1, xmmword ptr [ecx+10h]
0x8D28C1: movaps  xmm2, xmm0
0x8D28C4: shufps  xmm2, xmm0, 0C9h ; 'É'
0x8D28C8: movaps  xmm3, xmm1
0x8D28CB: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x8D28CF: mulps   xmm3, xmm2
0x8D28D2: movaps  xmm2, xmm0
0x8D28D5: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x8D28D9: movaps  xmm0, xmm1
0x8D28DC: shufps  xmm0, xmm1, 0C9h ; 'É'
0x8D28E0: movaps  xmm5, xmm0
0x8D28E3: movaps  xmm0, xmmword ptr [ecx+10h]
0x8D28E7: movaps  xmm6, xmm0
0x8D28EA: shufps  xmm6, xmm0, 0D2h ; 'Ò'
0x8D28EE: movaps  [esp+30h+var_10], xmm6
0x8D28F3: movaps  xmm4, xmmword ptr [ecx+20h]
0x8D28F7: movaps  xmm6, xmm0
0x8D28FA: shufps  xmm6, xmm0, 0C9h ; 'É'
0x8D28FE: movaps  xmm0, xmmword ptr [ecx]
0x8D2901: movaps  [esp+30h+var_20], xmm6
0x8D2906: mulps   xmm5, xmm2
0x8D2909: movaps  xmm2, xmmword ptr [ecx]
0x8D290C: subps   xmm5, xmm3
0x8D290F: mulps   xmm0, xmm5
0x8D2912: movaps  xmm6, xmm0
0x8D2915: shufps  xmm6, xmm0, 55h ; 'U'
0x8D2919: addss   xmm6, xmm0
0x8D291D: movaps  xmm7, xmm6
0x8D2920: movaps  xmm6, xmm0
0x8D2923: lea     eax, [esp+30h+var_24]
0x8D2927: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8D292B: addss   xmm6, xmm7
0x8D292F: movss   dword ptr [eax], xmm6
0x8D2933: fld     [esp+30h+var_24]
0x8D2937: fabs
0x8D2939: movaps  xmm1, xmm2
0x8D293C: fld     [ebp+arg_0]
0x8D293F: fmul    [ebp+arg_0]
0x8D2942: movaps  xmm3, xmm4
0x8D2945: shufps  xmm1, xmm2, 0D2h ; 'Ò'
0x8D2949: shufps  xmm3, xmm4, 0C9h ; 'É'
0x8D294D: fmul    [ebp+arg_0]
0x8D2950: shufps  xmm2, xmm2, 0C9h ; 'É'
0x8D2954: shufps  xmm4, xmm4, 0D2h ; 'Ò'
0x8D2958: fcompp
0x8D295A: fnstsw  ax
0x8D295C: test    ah, 5
0x8D295F: jp      short loc_8D29D3
0x8D2961: mulps   xmm4, xmm2
0x8D2964: mulps   xmm2, [esp+30h+var_10]
0x8D2969: mov     [esp+30h+var_24], 3F800000h
0x8D2971: movss   xmm0, [esp+30h+var_24]
0x8D2977: divss   xmm0, xmm6
0x8D297B: shufps  xmm0, xmm0, 0
0x8D297F: mulps   xmm3, xmm1
0x8D2982: mulps   xmm1, [esp+30h+var_20]
0x8D2987: movaps  xmm6, xmm0
0x8D298A: subps   xmm3, xmm4
0x8D298D: movaps  xmm4, xmm0
0x8D2990: mulps   xmm6, xmm5
0x8D2993: movaps  xmmword ptr [ecx], xmm6
0x8D2996: mulps   xmm4, xmm3
0x8D2999: movaps  xmmword ptr [ecx+10h], xmm4
0x8D299D: subps   xmm2, xmm1
0x8D29A0: mulps   xmm0, xmm2
0x8D29A3: movaps  xmmword ptr [ecx+20h], xmm0
0x8D29A7: fld     dword ptr [ecx+10h]
0x8D29AA: mov     edx, [ecx+4]
0x8D29AD: mov     [ecx+10h], edx
0x8D29B0: fstp    dword ptr [ecx+4]
0x8D29B3: mov     eax, [ecx+8]
0x8D29B6: fld     dword ptr [ecx+20h]
0x8D29B9: mov     [ecx+20h], eax
0x8D29BC: fstp    dword ptr [ecx+8]
0x8D29BF: mov     edx, [ecx+18h]
0x8D29C2: fld     dword ptr [ecx+24h]
0x8D29C5: mov     [ecx+24h], edx
0x8D29C8: fstp    dword ptr [ecx+18h]
0x8D29CB: xor     eax, eax
0x8D29CD: mov     esp, ebp
0x8D29CF: pop     ebp
0x8D29D0: retn    4
0x8D29D3: mov     eax, 1
0x8D29D8: mov     esp, ebp
0x8D29DA: pop     ebp
0x8D29DB: retn    4
