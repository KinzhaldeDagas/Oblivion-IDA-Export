0x8C2820: push    ebp
0x8C2821: mov     ebp, esp
0x8C2823: and     esp, 0FFFFFFF0h
0x8C2826: push    0FFFFFFFFh
0x8C2828: push    offset SEH_8C2D80
0x8C282D: mov     eax, large fs:0
0x8C2833: push    eax
0x8C2834: sub     esp, 8
0x8C2837: push    ebx
0x8C2838: push    esi
0x8C2839: push    edi
0x8C283A: mov     eax, ds:0B30AACh
0x8C283F: xor     eax, esp
0x8C2841: push    eax
0x8C2842: lea     eax, [esp+24h+var_C]
0x8C2846: mov     large fs:0, eax
0x8C284C: mov     ebx, [ebp+arg_4]
0x8C284F: mov     edi, ecx
0x8C2851: mov     ecx, [ebp+arg_0]
0x8C2854: test    ecx, ecx
0x8C2856: mov     esi, [edi+4]
0x8C2859: jnz     short loc_8C288F
0x8C285B: mov     ecx, ds:0BA7D98h
0x8C2861: mov     eax, [ecx]
0x8C2863: mov     edx, [eax+10h]
0x8C2866: push    29h ; ')'
0x8C2868: push    60h ; '`'
0x8C286A: call    edx
0x8C286C: mov     word ptr [eax+4], 60h ; '`'
0x8C2872: mov     [esp+24h+var_14], eax
0x8C2876: mov     ecx, eax
0x8C2878: mov     [esp+24h+var_4], 0
0x8C2880: call    sub_9138D0
0x8C2885: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8C288D: mov     ecx, eax
0x8C288F: movaps  xmm0, xmmword ptr [esi+10h]
0x8C2893: movaps  xmmword ptr [ecx+10h], xmm0
0x8C2897: movaps  xmm0, xmmword ptr [esi+20h]
0x8C289B: movaps  xmmword ptr [ecx+20h], xmm0
0x8C289F: movaps  xmm0, xmmword ptr [esi+30h]
0x8C28A3: movaps  xmmword ptr [ecx+30h], xmm0
0x8C28A7: movaps  xmm0, xmmword ptr [esi+40h]
0x8C28AB: movaps  xmmword ptr [ecx+40h], xmm0
0x8C28AF: movaps  xmm0, xmmword ptr [esi+50h]
0x8C28B3: movaps  xmmword ptr [ecx+50h], xmm0
0x8C28B7: fld     dword ptr [ebx+10h]
0x8C28BA: fstp    [esp+24h+var_14]
0x8C28BE: fld1
0x8C28C0: fcomp   [esp+24h+var_14]
0x8C28C4: fnstsw  ax
0x8C28C6: test    ah, 44h
0x8C28C9: jnp     short loc_8C28FC
0x8C28CB: movss   xmm1, [esp+24h+var_14]
0x8C28D1: movaps  xmm2, xmmword ptr [ecx+10h]
0x8C28D5: xorps   xmm0, xmm0
0x8C28D8: movss   xmm0, xmm1
0x8C28DC: movaps  xmm1, xmm0
0x8C28DF: shufps  xmm1, xmm0, 0
0x8C28E3: mulps   xmm1, xmm2
0x8C28E6: movaps  xmmword ptr [ecx+10h], xmm1
0x8C28EA: movaps  xmm1, xmm0
0x8C28ED: shufps  xmm1, xmm0, 0
0x8C28F1: movaps  xmm0, xmmword ptr [ecx+40h]
0x8C28F5: mulps   xmm1, xmm0
0x8C28F8: movaps  xmmword ptr [ecx+40h], xmm1
0x8C28FC: push    ebx
0x8C28FD: push    ecx
0x8C28FE: mov     ecx, edi
0x8C2900: call    sub_8A07B0
0x8C2905: mov     ecx, [esp+24h+var_C]
0x8C2909: mov     large fs:0, ecx
0x8C2910: pop     ecx
0x8C2911: pop     edi
0x8C2912: pop     esi
0x8C2913: pop     ebx
0x8C2914: mov     esp, ebp
0x8C2916: pop     ebp
0x8C2917: retn    8
