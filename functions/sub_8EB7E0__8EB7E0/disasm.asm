0x8EB7E0: push    ebp
0x8EB7E1: mov     ebp, esp
0x8EB7E3: and     esp, 0FFFFFFF0h
0x8EB7E6: sub     esp, 24h
0x8EB7E9: mov     edx, [ebp+arg_0]
0x8EB7EC: mov     ecx, [edx+30h]
0x8EB7EF: push    ebx
0x8EB7F0: lea     eax, [ecx-1]
0x8EB7F3: test    eax, eax
0x8EB7F5: push    esi
0x8EB7F6: push    edi
0x8EB7F7: jle     loc_8EB906
0x8EB7FD: mov     eax, 1
0x8EB802: lea     ebx, [edx+4]
0x8EB805: mov     [esp+30h+var_1C], eax
0x8EB809: mov     [esp+30h+var_18], ebx
0x8EB80D: lea     ecx, [ecx+0]
0x8EB810: cmp     eax, ecx
0x8EB812: mov     [esp+30h+var_20], eax
0x8EB816: jge     loc_8EB8E9
0x8EB81C: lea     ecx, [ebx+0Ch]
0x8EB81F: nop
0x8EB820: mov     esi, [ecx]
0x8EB822: mov     edi, [ebx]
0x8EB824: mov     eax, [edi+30h]
0x8EB827: mov     edx, [esi+30h]
0x8EB82A: cmp     eax, edx
0x8EB82C: jl      loc_8EB8CB
0x8EB832: jnz     short loc_8EB88D
0x8EB834: movaps  xmm0, xmmword ptr [edi+10h]
0x8EB838: mulps   xmm0, xmm0
0x8EB83B: movaps  xmm1, xmm0
0x8EB83E: shufps  xmm1, xmm0, 55h ; 'U'
0x8EB842: addss   xmm1, xmm0
0x8EB846: movaps  xmm2, xmm0
0x8EB849: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8EB84D: movaps  xmm0, xmmword ptr [esi+10h]
0x8EB851: addss   xmm2, xmm1
0x8EB855: mulps   xmm0, xmm0
0x8EB858: lea     edx, [esp+30h+var_14]
0x8EB85C: movss   dword ptr [edx], xmm2
0x8EB860: fld     [esp+30h+var_14]
0x8EB864: movaps  xmm1, xmm0
0x8EB867: shufps  xmm1, xmm0, 55h ; 'U'
0x8EB86B: movaps  xmm2, xmm0
0x8EB86E: lea     eax, [esp+30h+var_10]
0x8EB872: addss   xmm1, xmm0
0x8EB876: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8EB87A: addss   xmm2, xmm1
0x8EB87E: movss   dword ptr [eax], xmm2
0x8EB882: fcomp   [esp+30h+var_10]
0x8EB886: fnstsw  ax
0x8EB888: test    ah, 5
0x8EB88B: jnp     short loc_8EB8CB
0x8EB88D: lea     esi, [ebx-4]
0x8EB890: mov     eax, esi
0x8EB892: mov     edx, [eax]
0x8EB894: mov     edi, [eax+4]
0x8EB897: mov     eax, [eax+8]
0x8EB89A: mov     [esp+30h+var_8], edi
0x8EB89E: mov     [esp+30h+var_4], eax
0x8EB8A2: lea     eax, [ecx-4]
0x8EB8A5: mov     edi, eax
0x8EB8A7: mov     ebx, [edi]
0x8EB8A9: mov     [esi], ebx
0x8EB8AB: mov     ebx, [edi+4]
0x8EB8AE: mov     [esi+4], ebx
0x8EB8B1: mov     edi, [edi+8]
0x8EB8B4: mov     ebx, [esp+30h+var_18]
0x8EB8B8: mov     [esi+8], edi
0x8EB8BB: mov     [eax], edx
0x8EB8BD: mov     edx, [esp+30h+var_8]
0x8EB8C1: mov     [eax+4], edx
0x8EB8C4: mov     edx, [esp+30h+var_4]
0x8EB8C8: mov     [eax+8], edx
0x8EB8CB: mov     eax, [esp+30h+var_20]
0x8EB8CF: mov     edx, [ebp+arg_0]
0x8EB8D2: mov     esi, [edx+30h]
0x8EB8D5: inc     eax
0x8EB8D6: add     ecx, 0Ch
0x8EB8D9: cmp     eax, esi
0x8EB8DB: mov     [esp+30h+var_20], eax
0x8EB8DF: jl      loc_8EB820
0x8EB8E5: mov     eax, [esp+30h+var_1C]
0x8EB8E9: mov     ecx, [edx+30h]
0x8EB8EC: inc     eax
0x8EB8ED: add     ebx, 0Ch
0x8EB8F0: lea     esi, [eax-1]
0x8EB8F3: lea     edi, [ecx-1]
0x8EB8F6: cmp     esi, edi
0x8EB8F8: mov     [esp+30h+var_1C], eax
0x8EB8FC: mov     [esp+30h+var_18], ebx
0x8EB900: jl      loc_8EB810
0x8EB906: pop     edi
0x8EB907: pop     esi
0x8EB908: pop     ebx
0x8EB909: mov     esp, ebp
0x8EB90B: pop     ebp
0x8EB90C: retn
