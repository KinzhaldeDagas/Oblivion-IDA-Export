0x8F2870: push    ebp
0x8F2871: mov     ebp, esp
0x8F2873: and     esp, 0FFFFFFF0h
0x8F2876: sub     esp, 14h
0x8F2879: push    ebx
0x8F287A: push    esi
0x8F287B: push    edi
0x8F287C: fld     dword ptr [ecx+10h]
0x8F287F: mov     eax, [ecx+10h]
0x8F2882: fmul    dword ptr ds:0A9B264h
0x8F2888: movaps  xmm0, xmmword ptr [ecx+40h]
0x8F288C: movaps  xmm6, xmmword ptr [ecx+50h]
0x8F2890: movaps  xmm5, xmmword ptr ds:0A9A470h
0x8F2897: mov     edx, [ebp+arg_0]
0x8F289A: fstp    [esp+20h+var_14]
0x8F289E: movss   xmm4, [esp+20h+var_14]
0x8F28A4: mov     [esp+20h+var_14], eax
0x8F28A8: movss   xmm2, [esp+20h+var_14]
0x8F28AE: movaps  xmm1, xmm2
0x8F28B1: shufps  xmm1, xmm2, 0
0x8F28B5: movaps  xmm3, xmm2
0x8F28B8: shufps  xmm3, xmm2, 0
0x8F28BC: movaps  xmm2, xmm3
0x8F28BF: mulps   xmm1, xmm0
0x8F28C2: mulps   xmm2, xmm6
0x8F28C5: movaps  xmm3, xmm0
0x8F28C8: addps   xmm3, xmm6
0x8F28CB: movaps  xmm7, xmm4
0x8F28CE: subps   xmm0, xmm6
0x8F28D1: movaps  xmm6, xmm4
0x8F28D4: shufps  xmm7, xmm4, 0
0x8F28D8: shufps  xmm6, xmm4, 0
0x8F28DC: mulps   xmm7, xmm3
0x8F28DF: movaps  xmm4, xmm6
0x8F28E2: movaps  xmm3, xmm7
0x8F28E5: mulps   xmm4, xmm0
0x8F28E8: andps   xmm1, xmm5
0x8F28EB: andps   xmm2, xmm5
0x8F28EE: andps   xmm3, xmm5
0x8F28F1: andps   xmm4, xmm5
0x8F28F4: add     edx, 20h ; ' '
0x8F28F7: lea     esi, [ecx+20h]
0x8F28FA: mov     edi, 2
0x8F28FF: nop
0x8F2900: mov     eax, esi
0x8F2902: mov     ebx, [eax]
0x8F2904: mov     dword ptr [esp+20h+var_10], ebx
0x8F2908: mov     ebx, [eax+4]
0x8F290B: mov     dword ptr [esp+20h+var_10+4], ebx
0x8F290F: mov     ebx, [eax+8]
0x8F2912: mov     eax, [eax+0Ch]
0x8F2915: mov     dword ptr [esp+20h+var_10+0Ch], eax
0x8F2919: mov     eax, [ecx+0Ch]
0x8F291C: mov     dword ptr [esp+20h+var_10+8], ebx
0x8F2920: mov     dword ptr [esp+20h+var_10+0Ch], eax
0x8F2924: movaps  xmm0, [esp+20h+var_10]
0x8F2929: movaps  xmm5, xmm0
0x8F292C: addps   xmm5, xmm1
0x8F292F: movaps  xmmword ptr [edx-20h], xmm5
0x8F2933: movaps  xmm5, xmm0
0x8F2936: addps   xmm5, xmm3
0x8F2939: movaps  xmmword ptr [edx-10h], xmm5
0x8F293D: movaps  xmm5, xmm0
0x8F2940: addps   xmm5, xmm2
0x8F2943: movaps  xmmword ptr [edx], xmm5
0x8F2946: movaps  xmm5, xmm0
0x8F2949: subps   xmm5, xmm4
0x8F294C: movaps  xmmword ptr [edx+10h], xmm5
0x8F2950: movaps  xmm5, xmm0
0x8F2953: subps   xmm5, xmm1
0x8F2956: movaps  xmmword ptr [edx+20h], xmm5
0x8F295A: movaps  xmm5, xmm0
0x8F295D: subps   xmm5, xmm3
0x8F2960: movaps  xmmword ptr [edx+30h], xmm5
0x8F2964: movaps  xmm5, xmm0
0x8F2967: subps   xmm5, xmm2
0x8F296A: addps   xmm0, xmm4
0x8F296D: movaps  xmmword ptr [edx+40h], xmm5
0x8F2971: movaps  xmmword ptr [edx+50h], xmm0
0x8F2975: add     esi, 10h
0x8F2978: add     edx, 80h ; '€'
0x8F297E: dec     edi
0x8F297F: jnz     loc_8F2900
0x8F2985: mov     eax, [ebp+arg_0]
0x8F2988: pop     edi
0x8F2989: pop     esi
0x8F298A: pop     ebx
0x8F298B: mov     esp, ebp
0x8F298D: pop     ebp
0x8F298E: retn    4
