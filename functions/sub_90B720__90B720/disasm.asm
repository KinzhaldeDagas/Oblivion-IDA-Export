0x90B720: push    ebp
0x90B721: mov     ebp, esp
0x90B723: and     esp, 0FFFFFFF0h
0x90B726: sub     esp, 18h
0x90B729: mov     edx, [ebp+arg_8]
0x90B72C: push    esi
0x90B72D: push    edi
0x90B72E: mov     edi, [ebp+arg_C]
0x90B731: mov     eax, [edi+3034h]
0x90B737: mov     esi, [edi]
0x90B739: push    edi
0x90B73A: push    edx
0x90B73B: mov     edx, [ebp+arg_4]
0x90B73E: mov     [esp+28h+var_14], eax
0x90B742: mov     eax, [ebp+arg_0]
0x90B745: push    eax
0x90B746: push    edx
0x90B747: call    sub_90A9A0
0x90B74C: cmp     esi, [edi]
0x90B74E: jnb     short loc_90B791
0x90B750: lea     eax, [esp+20h+var_10]
0x90B754: push    eax
0x90B755: mov     ecx, esi
0x90B757: call    sub_8F7000
0x90B75C: movaps  xmm0, xmmword ptr [eax]
0x90B75F: movaps  xmm1, xmmword ptr [esi+10h]
0x90B763: movaps  xmm2, xmm0
0x90B766: shufps  xmm2, xmm0, 0
0x90B76A: movaps  xmm0, xmmword ptr [esi]
0x90B76D: mulps   xmm2, xmm1
0x90B770: addps   xmm0, xmm2
0x90B773: movaps  xmmword ptr [esi], xmm0
0x90B776: movaps  xmm1, xmmword ptr [esi+10h]
0x90B77A: movaps  xmm0, xmmword ptr ds:0A9B570h
0x90B781: xorps   xmm1, xmm0
0x90B784: movaps  xmmword ptr [esi+10h], xmm1
0x90B788: mov     eax, [edi]
0x90B78A: add     esi, 30h ; '0'
0x90B78D: cmp     esi, eax
0x90B78F: jb      short loc_90B750
0x90B791: fld     dword ptr [edi+3034h]
0x90B797: fld     [esp+20h+var_14]
0x90B79B: fucompp
0x90B79D: fnstsw  ax
0x90B79F: test    ah, 44h
0x90B7A2: jnp     short loc_90B7B6
0x90B7A4: movaps  xmm0, xmmword ptr ds:0A9B570h
0x90B7AB: movaps  xmm1, xmmword ptr [edi+20h]
0x90B7AF: xorps   xmm1, xmm0
0x90B7B2: movaps  xmmword ptr [edi+20h], xmm1
0x90B7B6: pop     edi
0x90B7B7: pop     esi
0x90B7B8: mov     esp, ebp
0x90B7BA: pop     ebp
0x90B7BB: retn    10h
