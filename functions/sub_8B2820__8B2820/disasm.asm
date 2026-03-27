0x8B2820: push    ebp
0x8B2821: mov     ebp, esp
0x8B2823: and     esp, 0FFFFFFF0h
0x8B2826: sub     esp, 0B4h
0x8B282C: push    ebx
0x8B282D: push    esi
0x8B282E: mov     esi, [ebp+arg_0]
0x8B2831: mov     eax, [esi+28h]
0x8B2834: push    edi
0x8B2835: push    8
0x8B2837: mov     edi, ecx
0x8B2839: mov     ecx, [ebp+arg_4]
0x8B283C: push    eax
0x8B283D: push    ecx
0x8B283E: push    esi
0x8B283F: call    sub_8F0F70
0x8B2844: mov     ecx, [esi+1Ch]
0x8B2847: movaps  xmm1, xmmword ptr [ecx]
0x8B284A: movaps  xmm2, xmmword ptr [ecx+10h]
0x8B284E: movaps  xmm3, xmmword ptr [ecx+20h]
0x8B2852: lea     eax, [edi+20h]
0x8B2855: lea     edx, [esp+0D0h+var_70]
0x8B2859: add     esp, 10h
0x8B285C: sub     edx, eax
0x8B285E: mov     ebx, 4
0x8B2863: movaps  xmm0, xmmword ptr [eax]
0x8B2866: movaps  xmm4, xmm0
0x8B2869: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8B286D: movaps  xmm5, xmm3
0x8B2870: mulps   xmm5, xmm4
0x8B2873: movaps  xmm4, xmm0
0x8B2876: shufps  xmm4, xmm0, 55h ; 'U'
0x8B287A: movaps  xmm6, xmm2
0x8B287D: mulps   xmm6, xmm4
0x8B2880: movaps  xmm4, xmm0
0x8B2883: shufps  xmm4, xmm0, 0
0x8B2887: movaps  xmm0, xmm1
0x8B288A: mulps   xmm0, xmm4
0x8B288D: addps   xmm0, xmm6
0x8B2890: addps   xmm0, xmm5
0x8B2893: movaps  xmmword ptr [edx+eax], xmm0
0x8B2897: add     eax, 10h
0x8B289A: dec     ebx
0x8B289B: jnz     short loc_8B2863
0x8B289D: movaps  xmm0, xmmword ptr [ecx+30h]
0x8B28A1: movaps  xmm1, [esp+0C0h+var_70]
0x8B28A6: mov     ecx, [esi+20h]
0x8B28A9: addps   xmm1, xmm0
0x8B28AC: movaps  [esp+0C0h+var_70], xmm1
0x8B28B1: movaps  xmm1, xmmword ptr [ecx]
0x8B28B4: movaps  xmm2, xmmword ptr [ecx+10h]
0x8B28B8: movaps  xmm3, xmmword ptr [ecx+20h]
0x8B28BC: lea     eax, [edi+60h]
0x8B28BF: lea     edx, [esp+0C0h+var_30]
0x8B28C6: sub     edx, eax
0x8B28C8: mov     ebx, 3
0x8B28CD: lea     ecx, [ecx+0]
0x8B28D0: movaps  xmm0, xmmword ptr [eax]
0x8B28D3: movaps  xmm4, xmm0
0x8B28D6: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8B28DA: movaps  xmm5, xmm3
0x8B28DD: mulps   xmm5, xmm4
0x8B28E0: movaps  xmm4, xmm0
0x8B28E3: shufps  xmm4, xmm0, 55h ; 'U'
0x8B28E7: movaps  xmm6, xmm2
0x8B28EA: mulps   xmm6, xmm4
0x8B28ED: movaps  xmm4, xmm0
0x8B28F0: shufps  xmm4, xmm0, 0
0x8B28F4: movaps  xmm0, xmm1
0x8B28F7: mulps   xmm0, xmm4
0x8B28FA: addps   xmm0, xmm6
0x8B28FD: addps   xmm0, xmm5
0x8B2900: movaps  xmmword ptr [edx+eax], xmm0
0x8B2904: add     eax, 10h
0x8B2907: dec     ebx
0x8B2908: jnz     short loc_8B28D0
0x8B290A: movaps  xmm0, xmmword ptr [ecx+30h]
0x8B290E: movaps  xmm1, [esp+0C0h+var_30]
0x8B2916: mov     ebx, [ebp+arg_4]
0x8B2919: addps   xmm1, xmm0
0x8B291C: movaps  xmm0, [esp+0C0h+var_50]
0x8B2921: movaps  [esp+0C0h+var_90], xmm0
0x8B2926: movaps  xmm0, [esp+0C0h+var_40]
0x8B292E: push    ebx
0x8B292F: lea     edx, [esp+0C4h+var_A0]
0x8B2933: movaps  [esp+0C4h+var_A0], xmm0
0x8B2938: movaps  xmm0, [esp+0C4h+var_20]
0x8B2940: push    esi
0x8B2941: push    edx
0x8B2942: movaps  [esp+0CCh+var_30], xmm1
0x8B294A: movaps  [esp+0CCh+var_80], xmm0
0x8B294F: call    sub_8F1310
0x8B2954: movaps  xmm0, [esp+0CCh+var_40]
0x8B295C: movaps  xmm1, [esp+0CCh+var_20]
0x8B2964: movaps  [esp+0CCh+var_90], xmm0
0x8B2969: movaps  xmm0, [esp+0CCh+var_50]
0x8B296E: push    ebx
0x8B296F: movaps  [esp+0D0h+var_A0], xmm0
0x8B2974: movaps  xmm0, xmmword ptr ds:0A965C0h
0x8B297B: lea     eax, [esp+0D0h+var_A0]
0x8B297F: push    esi
0x8B2980: xorps   xmm1, xmm0
0x8B2983: push    eax
0x8B2984: movaps  [esp+0D8h+var_80], xmm1
0x8B2989: call    sub_8F1310
0x8B298E: movaps  xmm1, [esp+0D8h+var_10]
0x8B2996: movaps  xmm0, [esp+0D8h+var_60]
0x8B299B: movaps  xmm2, [esp+0D8h+var_50]
0x8B29A3: mov     ecx, [esi+28h]
0x8B29A6: mov     edx, [edi+0Ch]
0x8B29A9: mov     eax, [edi+10h]
0x8B29AC: movaps  [esp+0D8h+var_A0], xmm0
0x8B29B1: movaps  xmm0, xmm1
0x8B29B4: mulps   xmm0, xmm2
0x8B29B7: movaps  xmm3, xmm0
0x8B29BA: shufps  xmm3, xmm0, 55h ; 'U'
0x8B29BE: addss   xmm3, xmm0
0x8B29C2: movaps  xmm4, xmm0
0x8B29C5: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8B29C9: movaps  xmm0, [esp+0D8h+var_20]
0x8B29D1: addss   xmm4, xmm3
0x8B29D5: mov     [esp+0D8h+var_AC], ecx
0x8B29D9: movaps  xmm3, xmm0
0x8B29DC: shufps  xmm3, xmm0, 0C9h ; 'É'
0x8B29E0: lea     ecx, [esp+0D8h+var_A8]
0x8B29E4: movss   dword ptr [ecx], xmm4
0x8B29E8: mov     ecx, [esp+0D8h+var_A8]
0x8B29EC: movaps  xmm4, xmm1
0x8B29EF: shufps  xmm4, xmm1, 0D2h ; 'Ò'
0x8B29F3: mulps   xmm4, xmm3
0x8B29F6: movaps  xmm3, xmm0
0x8B29F9: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x8B29FD: movaps  xmm0, xmm1
0x8B2A00: shufps  xmm0, xmm1, 0C9h ; 'É'
0x8B2A04: mulps   xmm0, xmm3
0x8B2A07: subps   xmm0, xmm4
0x8B2A0A: mulps   xmm0, xmm2
0x8B2A0D: movaps  xmm1, xmm0
0x8B2A10: mov     dword ptr [esp+0D8h+var_90], edx
0x8B2A14: shufps  xmm1, xmm0, 55h ; 'U'
0x8B2A18: movaps  xmm2, xmm0
0x8B2A1B: addss   xmm1, xmm0
0x8B2A1F: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8B2A23: lea     edx, [esp+0D8h+var_A4]
0x8B2A27: addss   xmm2, xmm1
0x8B2A2B: mov     dword ptr [esp+0D8h+var_90+4], eax
0x8B2A2F: movss   dword ptr [edx], xmm2
0x8B2A33: mov     eax, [esp+0D8h+var_A4]
0x8B2A37: push    eax; float
0x8B2A38: push    ecx; float
0x8B2A39: call    sub_8ECBB0
0x8B2A3E: fst     dword ptr [esp+0E0h+var_90+8]
0x8B2A42: mov     ecx, [esp+0E0h+var_AC]
0x8B2A46: fld     dword ptr [ecx+38h]
0x8B2A49: add     esp, 20h
0x8B2A4C: fsub    st, st(1)
0x8B2A4E: fcomp   dword ptr ds:0A97E64h
0x8B2A54: fnstsw  ax
0x8B2A56: test    ah, 41h
0x8B2A59: jnz     short loc_8B2A63
0x8B2A5B: fadd    dword ptr ds:0A46B14h
0x8B2A61: jmp     short loc_8B2A7B
0x8B2A63: fld     st
0x8B2A65: fsub    dword ptr [ecx+38h]
0x8B2A68: fcomp   dword ptr ds:0A97E64h
0x8B2A6E: fnstsw  ax
0x8B2A70: test    ah, 41h
0x8B2A73: jnz     short loc_8B2A7F
0x8B2A75: fsub    dword ptr ds:0A46B14h
0x8B2A7B: fst     dword ptr [esp+0C0h+var_90+8]
0x8B2A7F: push    ebx
0x8B2A80: fstp    dword ptr [ecx+38h]
0x8B2A83: lea     edx, [esp+0C4h+var_A0]
0x8B2A87: push    esi
0x8B2A88: push    edx
0x8B2A89: call    sub_8F1B60
0x8B2A8E: push    ebx
0x8B2A8F: push    esi
0x8B2A90: lea     eax, [esp+0D4h+var_30]
0x8B2A97: push    eax
0x8B2A98: lea     ecx, [esp+0D8h+var_70]
0x8B2A9C: push    ecx
0x8B2A9D: call    sub_8F1CC0
0x8B2AA2: fld     dword ptr ds:0A2FAA8h
0x8B2AA8: fld     dword ptr [edi+14h]
0x8B2AAB: add     esp, 1Ch
0x8B2AAE: fucompp
0x8B2AB0: fnstsw  ax
0x8B2AB2: test    ah, 44h
0x8B2AB5: jnp     short loc_8B2AE8
0x8B2AB7: mov     ecx, [esp+0C0h+var_AC]
0x8B2ABB: mov     eax, [edi+14h]
0x8B2ABE: lea     edx, [esp+0C0h+var_60]
0x8B2AC2: push    ebx
0x8B2AC3: mov     dword ptr [esp+0C4h+var_A0], edx
0x8B2AC7: lea     edx, [esp+0C4h+var_A0]
0x8B2ACB: add     ecx, 30h ; '0'
0x8B2ACE: push    esi
0x8B2ACF: push    edx
0x8B2AD0: mov     dword ptr [esp+0CCh+var_A0+8], eax
0x8B2AD4: mov     dword ptr [esp+0CCh+var_A0+0Ch], 1
0x8B2ADC: mov     dword ptr [esp+0CCh+var_A0+4], ecx
0x8B2AE0: call    sub_8F1460
0x8B2AE5: add     esp, 0Ch
0x8B2AE8: pop     edi
0x8B2AE9: pop     esi
0x8B2AEA: pop     ebx
0x8B2AEB: mov     esp, ebp
0x8B2AED: pop     ebp
0x8B2AEE: retn    8
