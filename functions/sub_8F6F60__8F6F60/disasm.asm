0x8F6F60: push    ebp
0x8F6F61: mov     ebp, esp
0x8F6F63: and     esp, 0FFFFFFF0h
0x8F6F66: sub     esp, 18h
0x8F6F69: mov     edx, [ebp+arg_8]
0x8F6F6C: push    esi
0x8F6F6D: push    edi
0x8F6F6E: mov     edi, [ebp+arg_C]
0x8F6F71: mov     eax, [edi+3034h]
0x8F6F77: mov     esi, [edi]
0x8F6F79: push    edi
0x8F6F7A: push    edx
0x8F6F7B: mov     edx, [ebp+arg_4]
0x8F6F7E: mov     [esp+28h+var_14], eax
0x8F6F82: mov     eax, [ebp+arg_0]
0x8F6F85: push    eax
0x8F6F86: push    edx
0x8F6F87: call    sub_8F67C0
0x8F6F8C: cmp     esi, [edi]
0x8F6F8E: jnb     short loc_8F6FD1
0x8F6F90: lea     eax, [esp+20h+var_10]
0x8F6F94: push    eax
0x8F6F95: mov     ecx, esi
0x8F6F97: call    sub_8F7000
0x8F6F9C: movaps  xmm0, xmmword ptr [eax]
0x8F6F9F: movaps  xmm1, xmmword ptr [esi+10h]
0x8F6FA3: movaps  xmm2, xmm0
0x8F6FA6: shufps  xmm2, xmm0, 0
0x8F6FAA: movaps  xmm0, xmmword ptr [esi]
0x8F6FAD: mulps   xmm2, xmm1
0x8F6FB0: addps   xmm0, xmm2
0x8F6FB3: movaps  xmmword ptr [esi], xmm0
0x8F6FB6: movaps  xmm1, xmmword ptr [esi+10h]
0x8F6FBA: movaps  xmm0, xmmword ptr ds:0A9B570h
0x8F6FC1: xorps   xmm1, xmm0
0x8F6FC4: movaps  xmmword ptr [esi+10h], xmm1
0x8F6FC8: mov     eax, [edi]
0x8F6FCA: add     esi, 30h ; '0'
0x8F6FCD: cmp     esi, eax
0x8F6FCF: jb      short loc_8F6F90
0x8F6FD1: fld     dword ptr [edi+3034h]
0x8F6FD7: fld     [esp+20h+var_14]
0x8F6FDB: fucompp
0x8F6FDD: fnstsw  ax
0x8F6FDF: test    ah, 44h
0x8F6FE2: jnp     short loc_8F6FF6
0x8F6FE4: movaps  xmm0, xmmword ptr ds:0A9B570h
0x8F6FEB: movaps  xmm1, xmmword ptr [edi+20h]
0x8F6FEF: xorps   xmm1, xmm0
0x8F6FF2: movaps  xmmword ptr [edi+20h], xmm1
0x8F6FF6: pop     edi
0x8F6FF7: pop     esi
0x8F6FF8: mov     esp, ebp
0x8F6FFA: pop     ebp
0x8F6FFB: retn    10h
