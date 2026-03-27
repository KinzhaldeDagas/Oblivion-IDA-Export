0x8B2620: push    ebp
0x8B2621: mov     ebp, esp
0x8B2623: and     esp, 0FFFFFFF0h
0x8B2626: sub     esp, 0Ch
0x8B2629: push    esi
0x8B262A: mov     esi, ecx
0x8B262C: movaps  xmm1, xmmword ptr [esi+50h]
0x8B2630: movaps  xmm0, xmmword ptr [esi+40h]
0x8B2634: mulps   xmm0, xmm1
0x8B2637: movaps  xmm1, xmm0
0x8B263A: shufps  xmm1, xmm0, 55h ; 'U'
0x8B263E: movaps  xmm2, xmm0
0x8B2641: lea     eax, [esp+10h+var_5+1]
0x8B2645: addss   xmm1, xmm0
0x8B2649: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8B264D: addss   xmm2, xmm1
0x8B2651: movss   dword ptr [eax], xmm2
0x8B2655: fld     dword ptr [esp+10h+var_5+1]
0x8B2659: fabs
0x8B265B: fabs
0x8B265D: fcomp   dword ptr ds:0A3C778h
0x8B2663: fnstsw  ax
0x8B2665: test    ah, 5
0x8B2668: jp      loc_8B27BC
0x8B266E: movaps  xmm1, xmmword ptr [esi+70h]
0x8B2672: movaps  xmm0, xmmword ptr [esi+80h]
0x8B2679: mulps   xmm0, xmm1
0x8B267C: movaps  xmm1, xmm0
0x8B267F: shufps  xmm1, xmm0, 55h ; 'U'
0x8B2683: movaps  xmm2, xmm0
0x8B2686: addss   xmm1, xmm0
0x8B268A: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8B268E: lea     ecx, [esp+10h+var_5+1]
0x8B2692: addss   xmm2, xmm1
0x8B2696: movss   dword ptr [ecx], xmm2
0x8B269A: fld     dword ptr [esp+10h+var_5+1]
0x8B269E: fabs
0x8B26A0: fabs
0x8B26A2: fcomp   dword ptr ds:0A3C778h
0x8B26A8: fnstsw  ax
0x8B26AA: test    ah, 5
0x8B26AD: jp      loc_8B27BC
0x8B26B3: movaps  xmm0, xmmword ptr [esi+40h]
0x8B26B7: mulps   xmm0, xmm0
0x8B26BA: movaps  xmm1, xmm0
0x8B26BD: shufps  xmm1, xmm0, 55h ; 'U'
0x8B26C1: movaps  xmm2, xmm0
0x8B26C4: addss   xmm1, xmm0
0x8B26C8: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8B26CC: lea     edx, [esp+10h+var_5+1]
0x8B26D0: addss   xmm2, xmm1
0x8B26D4: movss   dword ptr [edx], xmm2
0x8B26D8: fld     dword ptr [esp+10h+var_5+1]
0x8B26DC: fsub    dword ptr ds:0A2F948h
0x8B26E2: fabs
0x8B26E4: fcomp   dword ptr ds:0A3C778h
0x8B26EA: fnstsw  ax
0x8B26EC: test    ah, 5
0x8B26EF: jp      loc_8B27BC
0x8B26F5: movaps  xmm0, xmmword ptr [esi+50h]
0x8B26F9: mulps   xmm0, xmm0
0x8B26FC: movaps  xmm1, xmm0
0x8B26FF: shufps  xmm1, xmm0, 55h ; 'U'
0x8B2703: movaps  xmm2, xmm0
0x8B2706: lea     eax, [esp+10h+var_5+1]
0x8B270A: addss   xmm1, xmm0
0x8B270E: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8B2712: addss   xmm2, xmm1
0x8B2716: movss   dword ptr [eax], xmm2
0x8B271A: fld     dword ptr [esp+10h+var_5+1]
0x8B271E: fsub    dword ptr ds:0A2F948h
0x8B2724: fabs
0x8B2726: fcomp   dword ptr ds:0A3C778h
0x8B272C: fnstsw  ax
0x8B272E: test    ah, 5
0x8B2731: jp      loc_8B27BC
0x8B2737: movaps  xmm0, xmmword ptr [esi+70h]
0x8B273B: mulps   xmm0, xmm0
0x8B273E: movaps  xmm1, xmm0
0x8B2741: shufps  xmm1, xmm0, 55h ; 'U'
0x8B2745: movaps  xmm2, xmm0
0x8B2748: addss   xmm1, xmm0
0x8B274C: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8B2750: lea     ecx, [esp+10h+var_5+1]
0x8B2754: addss   xmm2, xmm1
0x8B2758: movss   dword ptr [ecx], xmm2
0x8B275C: fld     dword ptr [esp+10h+var_5+1]
0x8B2760: fsub    dword ptr ds:0A2F948h
0x8B2766: fabs
0x8B2768: fcomp   dword ptr ds:0A3C778h
0x8B276E: fnstsw  ax
0x8B2770: test    ah, 5
0x8B2773: jp      short loc_8B27BC
0x8B2775: movaps  xmm0, xmmword ptr [esi+30h]
0x8B2779: mulps   xmm0, xmm0
0x8B277C: movaps  xmm1, xmm0
0x8B277F: shufps  xmm1, xmm0, 55h ; 'U'
0x8B2783: movaps  xmm2, xmm0
0x8B2786: addss   xmm1, xmm0
0x8B278A: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8B278E: lea     edx, [esp+10h+var_5+1]
0x8B2792: push    3727C5ACh; float
0x8B2797: addss   xmm2, xmm1
0x8B279B: movss   dword ptr [edx], xmm2
0x8B279F: mov     eax, dword ptr [esp+14h+var_5+1]
0x8B27A3: push    3F800000h; float
0x8B27A8: push    eax; float
0x8B27A9: lea     ecx, [esp+1Ch+var_5]
0x8B27AD: push    ecx; int
0x8B27AE: call    sub_8B1EE0
0x8B27B3: mov     cl, [eax]
0x8B27B5: add     esp, 10h
0x8B27B8: test    cl, cl
0x8B27BA: jnz     short loc_8B27C9
0x8B27BC: mov     eax, [ebp+arg_0]
0x8B27BF: mov     byte ptr [eax], 0
0x8B27C2: pop     esi
0x8B27C3: mov     esp, ebp
0x8B27C5: pop     ebp
0x8B27C6: retn    4
0x8B27C9: fld     dword ptr [esi+0Ch]
0x8B27CC: fcomp   dword ptr ds:0A2FAA8h
0x8B27D2: fnstsw  ax
0x8B27D4: test    ah, 41h
0x8B27D7: jp      short loc_8B27F3
0x8B27D9: fld     dword ptr [esi+10h]
0x8B27DC: fcomp   dword ptr ds:0A2FAA8h
0x8B27E2: fnstsw  ax
0x8B27E4: test    ah, 41h
0x8B27E7: jp      short loc_8B27F3
0x8B27E9: fld     dword ptr [esi+0Ch]
0x8B27EC: fabs
0x8B27EE: fadd    dword ptr [esi+10h]
0x8B27F1: jmp     short loc_8B27F9
0x8B27F3: fld     dword ptr [esi+10h]
0x8B27F6: fsub    dword ptr [esi+0Ch]
0x8B27F9: fcomp   dword ptr ds:0A46B14h
0x8B27FF: fnstsw  ax
0x8B2801: test    ah, 41h
0x8B2804: mov     eax, [ebp+arg_0]
0x8B2807: jz      short loc_8B27BF
0x8B2809: mov     byte ptr [eax], 1
0x8B280C: pop     esi
0x8B280D: mov     esp, ebp
0x8B280F: pop     ebp
0x8B2810: retn    4
