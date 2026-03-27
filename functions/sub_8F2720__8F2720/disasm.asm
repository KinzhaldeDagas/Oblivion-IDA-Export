0x8F2720: push    ebp
0x8F2721: mov     ebp, esp
0x8F2723: and     esp, 0FFFFFFF0h
0x8F2726: sub     esp, 14h
0x8F2729: mov     eax, [ebp+arg_4]
0x8F272C: dec     eax
0x8F272D: push    ebx
0x8F272E: push    esi
0x8F272F: push    edi
0x8F2730: mov     esi, ecx
0x8F2732: js      loc_8F2852
0x8F2738: mov     edi, [ebp+arg_0]
0x8F273B: inc     eax
0x8F273C: mov     [esp+20h+var_C], eax
0x8F2740: mov     ax, [edi]
0x8F2743: mov     bl, al
0x8F2745: shr     bl, 5
0x8F2748: and     bl, 1
0x8F274B: mov     [esp+20h+var_8], bl
0x8F274F: xor     ebx, ebx
0x8F2751: mov     bl, al
0x8F2753: mov     dl, al
0x8F2755: mov     cl, al
0x8F2757: shr     dl, 7
0x8F275A: shr     cl, 6
0x8F275D: shr     al, 4
0x8F2760: and     dl, 1
0x8F2763: and     ebx, 0Fh
0x8F2766: mov     [esp+20h+var_10], ebx
0x8F276A: fild    [esp+20h+var_10]
0x8F276E: and     cl, 1
0x8F2771: test    al, 1
0x8F2773: fadd    dword ptr ds:0A3D65Ch
0x8F2779: fmul    dword ptr ds:0B2FDC0h
0x8F277F: fst     [esp+20h+var_10]
0x8F2783: jz      short loc_8F2797
0x8F2785: fst     [esp+20h+var_10]
0x8F2789: fld     st
0x8F278B: fmulp   st(1), st
0x8F278D: fsubr   dword ptr ds:0A2F948h
0x8F2793: fsqrt
0x8F2795: jmp     short loc_8F27AB
0x8F2797: fld     [esp+20h+var_10]
0x8F279B: fmul    [esp+20h+var_10]
0x8F279F: fsubr   dword ptr ds:0A2F948h
0x8F27A5: fsqrt
0x8F27A7: fstp    [esp+20h+var_10]
0x8F27AB: test    cl, cl
0x8F27AD: fld     [esp+20h+var_10]
0x8F27B1: jnz     short loc_8F27B5
0x8F27B3: fchs
0x8F27B5: mov     al, [esp+20h+var_8]
0x8F27B9: test    al, al
0x8F27BB: jnz     short loc_8F27C3
0x8F27BD: fxch    st(1)
0x8F27BF: fchs
0x8F27C1: fxch    st(1)
0x8F27C3: mov     eax, [esi+10h]
0x8F27C6: fxch    st(1)
0x8F27C8: movaps  xmm3, xmmword ptr [esi+50h]
0x8F27CC: fstp    [esp+20h+var_10]
0x8F27D0: movss   xmm0, [esp+20h+var_10]
0x8F27D6: test    dl, dl
0x8F27D8: fstp    [esp+20h+var_10]
0x8F27DC: movss   xmm1, [esp+20h+var_10]
0x8F27E2: setnz   cl
0x8F27E5: mov     [esp+20h+var_4], eax
0x8F27E9: movss   xmm2, [esp+20h+var_4]
0x8F27EF: movzx   edx, cl
0x8F27F2: movaps  xmm4, xmm1
0x8F27F5: shufps  xmm4, xmm1, 0
0x8F27F9: movaps  xmm1, xmmword ptr [esi+40h]
0x8F27FD: mulps   xmm4, xmm3
0x8F2800: movaps  xmm3, xmm0
0x8F2803: shufps  xmm3, xmm0, 0
0x8F2807: mov     eax, 3
0x8F280C: sub     eax, edx
0x8F280E: shl     eax, 4
0x8F2811: mulps   xmm3, xmm1
0x8F2814: movaps  xmm1, xmmword ptr [eax+esi]
0x8F2818: mov     eax, [ebp+arg_8]
0x8F281B: movaps  xmm0, xmm2
0x8F281E: addps   xmm3, xmm4
0x8F2821: shufps  xmm0, xmm2, 0
0x8F2825: mulps   xmm0, xmm3
0x8F2828: addps   xmm1, xmm0
0x8F282B: movaps  xmmword ptr [eax], xmm1
0x8F282E: movzx   ecx, word ptr [edi]
0x8F2831: or      ecx, 3F000000h
0x8F2837: mov     [eax+0Ch], ecx
0x8F283A: add     eax, 10h
0x8F283D: mov     [ebp+arg_8], eax
0x8F2840: mov     eax, [esp+20h+var_C]
0x8F2844: add     edi, 2
0x8F2847: dec     eax
0x8F2848: mov     [esp+20h+var_C], eax
0x8F284C: jnz     loc_8F2740
0x8F2852: pop     edi
0x8F2853: pop     esi
0x8F2854: pop     ebx
0x8F2855: mov     esp, ebp
0x8F2857: pop     ebp
0x8F2858: retn    0Ch
