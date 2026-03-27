0x94F6B0: push    ebp
0x94F6B1: mov     ebp, esp
0x94F6B3: and     esp, 0FFFFFFF0h
0x94F6B6: sub     esp, 64h
0x94F6B9: mov     ecx, [ebp+arg_C]
0x94F6BC: mov     edx, [ebp+arg_0]
0x94F6BF: fld     dword ptr [edx+40h]
0x94F6C2: mov     eax, [ebp+arg_4]
0x94F6C5: fadd    dword ptr [eax+40h]
0x94F6C8: xorps   xmm0, xmm0
0x94F6CB: movaps  xmmword ptr [ecx+110h], xmm0
0x94F6D2: movaps  xmmword ptr [ecx+120h], xmm0
0x94F6D9: movaps  xmmword ptr [ecx+130h], xmm0
0x94F6E0: fst     dword ptr [ecx+110h]
0x94F6E6: fst     dword ptr [ecx+124h]
0x94F6EC: push    ebx
0x94F6ED: push    esi
0x94F6EE: fstp    dword ptr [ecx+138h]
0x94F6F4: push    edi
0x94F6F5: mov     edi, [ebp+arg_8]
0x94F6F8: movaps  xmm0, xmmword ptr [edi]
0x94F6FB: movaps  xmmword ptr [ecx+0E0h], xmm0
0x94F702: movaps  xmm0, xmmword ptr [edi+10h]
0x94F706: mov     esi, ecx
0x94F708: movaps  xmmword ptr [ecx+0F0h], xmm0
0x94F70F: movaps  xmm0, xmmword ptr [edi+20h]
0x94F713: neg     esi
0x94F715: movaps  xmmword ptr [ecx+100h], xmm0
0x94F71C: mov     eax, ecx
0x94F71E: mov     [esp+70h+var_5C], esi
0x94F722: mov     [esp+70h+var_54], 2
0x94F72A: lea     ebx, [ebx+0]
0x94F730: movaps  xmm0, xmmword ptr [edi]
0x94F733: movaps  xmm1, xmmword ptr [edx]
0x94F736: movaps  xmm2, xmm0
0x94F739: shufps  xmm2, xmm0, 0C9h ; 'É'
0x94F73D: movaps  xmm3, xmm1
0x94F740: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x94F744: mulps   xmm3, xmm2
0x94F747: movaps  xmm2, xmm0
0x94F74A: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x94F74E: movaps  xmm0, xmm1
0x94F751: shufps  xmm0, xmm1, 0C9h ; 'É'
0x94F755: mulps   xmm0, xmm2
0x94F758: subps   xmm0, xmm3
0x94F75B: movaps  xmmword ptr [eax], xmm0
0x94F75E: movaps  xmm0, xmmword ptr [edi+10h]
0x94F762: movaps  xmm1, xmmword ptr [edx]
0x94F765: movaps  xmm2, xmm0
0x94F768: shufps  xmm2, xmm0, 0C9h ; 'É'
0x94F76C: movaps  xmm3, xmm1
0x94F76F: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x94F773: mulps   xmm3, xmm2
0x94F776: movaps  xmm2, xmm0
0x94F779: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x94F77D: movaps  xmm0, xmm1
0x94F780: shufps  xmm0, xmm1, 0C9h ; 'É'
0x94F784: mulps   xmm0, xmm2
0x94F787: subps   xmm0, xmm3
0x94F78A: movaps  xmmword ptr [eax+10h], xmm0
0x94F78E: movaps  xmm0, xmmword ptr [edi+20h]
0x94F792: movaps  xmm1, xmmword ptr [edx]
0x94F795: movaps  xmm2, xmm0
0x94F798: shufps  xmm2, xmm0, 0C9h ; 'É'
0x94F79C: movaps  xmm3, xmm1
0x94F79F: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x94F7A3: mulps   xmm3, xmm2
0x94F7A6: movaps  xmm2, xmm0
0x94F7A9: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x94F7AD: movaps  xmm0, xmm1
0x94F7B0: shufps  xmm0, xmm1, 0C9h ; 'É'
0x94F7B4: mulps   xmm0, xmm2
0x94F7B7: subps   xmm0, xmm3
0x94F7BA: movaps  xmmword ptr [eax+20h], xmm0
0x94F7BE: movaps  xmm1, xmmword ptr [edx+10h]
0x94F7C2: movaps  xmm2, xmmword ptr [edx+20h]
0x94F7C6: movaps  xmm3, xmmword ptr [edx+30h]
0x94F7CA: mov     esi, eax
0x94F7CC: mov     ebx, 3
0x94F7D1: movaps  xmm0, xmmword ptr [esi]
0x94F7D4: movaps  xmm4, xmm0
0x94F7D7: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x94F7DB: movaps  xmm5, xmm3
0x94F7DE: mulps   xmm5, xmm4
0x94F7E1: movaps  xmm4, xmm0
0x94F7E4: shufps  xmm4, xmm0, 55h ; 'U'
0x94F7E8: movaps  xmm6, xmm2
0x94F7EB: mulps   xmm6, xmm4
0x94F7EE: movaps  xmm4, xmm0
0x94F7F1: shufps  xmm4, xmm0, 0
0x94F7F5: movaps  xmm0, xmm1
0x94F7F8: mulps   xmm0, xmm4
0x94F7FB: addps   xmm0, xmm6
0x94F7FE: addps   xmm0, xmm5
0x94F801: movaps  xmmword ptr [esi+30h], xmm0
0x94F805: add     esi, 10h
0x94F808: dec     ebx
0x94F809: jnz     short loc_94F7D1
0x94F80B: mov     esi, [eax+4]
0x94F80E: fld     dword ptr [eax+10h]
0x94F811: mov     [eax+10h], esi
0x94F814: fstp    dword ptr [eax+4]
0x94F817: mov     esi, [eax+8]
0x94F81A: fld     dword ptr [eax+20h]
0x94F81D: mov     [eax+20h], esi
0x94F820: fstp    dword ptr [eax+8]
0x94F823: mov     esi, [eax+18h]
0x94F826: fld     dword ptr [eax+24h]
0x94F829: mov     [eax+24h], esi
0x94F82C: fstp    dword ptr [eax+18h]
0x94F82F: movaps  xmm1, xmmword ptr [eax]
0x94F832: movaps  xmm2, xmmword ptr [eax+10h]
0x94F836: movaps  xmm3, xmmword ptr [eax+20h]
0x94F83A: lea     esi, [eax+30h]
0x94F83D: mov     [esp+70h+var_58], 3
0x94F845: movaps  xmm0, xmmword ptr [esi]
0x94F848: mov     ebx, [esp+70h+var_5C]
0x94F84C: movaps  xmm4, xmm0
0x94F84F: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x94F853: movaps  xmm5, xmm3
0x94F856: mulps   xmm5, xmm4
0x94F859: movaps  xmm4, xmm0
0x94F85C: shufps  xmm4, xmm0, 55h ; 'U'
0x94F860: movaps  xmm6, xmm2
0x94F863: mulps   xmm6, xmm4
0x94F866: movaps  xmm4, xmm0
0x94F869: shufps  xmm4, xmm0, 0
0x94F86D: movaps  xmm0, xmm1
0x94F870: mulps   xmm0, xmm4
0x94F873: lea     ebx, [esp+ebx+70h+var_60]
0x94F877: addps   xmm0, xmm6
0x94F87A: addps   xmm0, xmm5
0x94F87D: movaps  xmmword ptr [ebx+esi], xmm0
0x94F881: mov     ebx, [esp+70h+var_58]
0x94F885: add     esi, 10h
0x94F888: dec     ebx
0x94F889: mov     [esp+70h+var_58], ebx
0x94F88D: jnz     short loc_94F845
0x94F88F: movaps  xmm1, xmmword ptr [ecx+110h]
0x94F896: movaps  xmm0, [esp+70h+var_30]
0x94F89B: addps   xmm1, xmm0
0x94F89E: movaps  xmm0, [esp+70h+var_20]
0x94F8A3: movaps  xmmword ptr [ecx+110h], xmm1
0x94F8AA: movaps  xmm1, xmmword ptr [ecx+120h]
0x94F8B1: addps   xmm1, xmm0
0x94F8B4: movaps  xmm0, [esp+70h+var_10]
0x94F8B9: movaps  xmmword ptr [ecx+120h], xmm1
0x94F8C0: movaps  xmm1, xmmword ptr [ecx+130h]
0x94F8C7: addps   xmm1, xmm0
0x94F8CA: movaps  xmmword ptr [ecx+130h], xmm1
0x94F8D1: fld     dword ptr [edx+40h]
0x94F8D4: fst     dword ptr [eax+60h]
0x94F8D7: mov     esi, [esp+70h+var_5C]
0x94F8DB: fadd    dword ptr ds:0AA2F0Ch
0x94F8E1: mov     edx, [ebp+arg_4]
0x94F8E4: sub     esi, 70h ; 'p'
0x94F8E7: mov     [esp+70h+var_5C], esi
0x94F8EB: fdivr   dword ptr ds:0A2F948h
0x94F8F1: mov     esi, [esp+70h+var_54]
0x94F8F5: add     eax, 70h ; 'p'
0x94F8F8: dec     esi
0x94F8F9: mov     [esp+70h+var_54], esi
0x94F8FD: fstp    dword ptr [eax-0Ch]
0x94F900: jnz     loc_94F730
0x94F906: movaps  xmm0, xmmword ptr [ecx+130h]
0x94F90D: movaps  xmm1, xmmword ptr [ecx+120h]
0x94F914: movaps  xmm6, xmmword ptr [ecx+120h]
0x94F91B: movaps  xmm4, xmmword ptr [ecx+130h]
0x94F922: movaps  xmm2, xmm0
0x94F925: shufps  xmm2, xmm0, 0C9h ; 'É'
0x94F929: movaps  xmm3, xmm1
0x94F92C: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x94F930: mulps   xmm3, xmm2
0x94F933: movaps  xmm2, xmm0
0x94F936: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x94F93A: movaps  xmm7, xmm6
0x94F93D: shufps  xmm7, xmm6, 0D2h ; 'Ò'
0x94F941: movaps  xmm0, xmm1
0x94F944: shufps  xmm0, xmm1, 0C9h ; 'É'
0x94F948: movaps  xmm5, xmm0
0x94F94B: movaps  xmm0, xmmword ptr [ecx+110h]
0x94F952: movaps  xmm1, xmm0
0x94F955: shufps  xmm1, xmm0, 0D2h ; 'Ò'
0x94F959: mulps   xmm5, xmm2
0x94F95C: movaps  xmm2, xmm0
0x94F95F: shufps  xmm2, xmm0, 0C9h ; 'É'
0x94F963: shufps  xmm6, xmm6, 0C9h ; 'É'
0x94F967: subps   xmm5, xmm3
0x94F96A: mulps   xmm0, xmm5
0x94F96D: movaps  [esp+70h+var_50], xmm6
0x94F972: movaps  xmm6, xmm0
0x94F975: shufps  xmm6, xmm0, 55h ; 'U'
0x94F979: addss   xmm6, xmm0
0x94F97D: movaps  [esp+70h+var_40], xmm7
0x94F982: movaps  xmm7, xmm0
0x94F985: shufps  xmm7, xmm0, 0AAh ; 'ª'
0x94F989: addss   xmm7, xmm6
0x94F98D: mov     [esp+70h+var_54], 1D000000h
0x94F995: movss   xmm0, [esp+70h+var_54]
0x94F99B: addss   xmm0, xmm7
0x94F99F: movaps  xmm3, xmm4
0x94F9A2: shufps  xmm3, xmm4, 0C9h ; 'É'
0x94F9A6: movaps  xmm6, xmm0
0x94F9A9: mov     [esp+70h+var_54], 3F800000h
0x94F9B1: movss   xmm0, [esp+70h+var_54]
0x94F9B7: divss   xmm0, xmm6
0x94F9BB: shufps  xmm4, xmm4, 0D2h ; 'Ò'
0x94F9BF: mulps   xmm4, xmm2
0x94F9C2: mulps   xmm2, [esp+70h+var_40]
0x94F9C7: shufps  xmm0, xmm0, 0
0x94F9CB: mulps   xmm3, xmm1
0x94F9CE: mulps   xmm1, [esp+70h+var_50]
0x94F9D3: movaps  xmm6, xmm0
0x94F9D6: subps   xmm3, xmm4
0x94F9D9: movaps  xmm4, xmm0
0x94F9DC: mulps   xmm6, xmm5
0x94F9DF: movaps  xmmword ptr [ecx+140h], xmm6
0x94F9E6: mulps   xmm4, xmm3
0x94F9E9: movaps  xmmword ptr [ecx+150h], xmm4
0x94F9F0: subps   xmm2, xmm1
0x94F9F3: mulps   xmm0, xmm2
0x94F9F6: movaps  xmmword ptr [ecx+160h], xmm0
0x94F9FD: fld     dword ptr [ecx+110h]
0x94FA03: fadd    dword ptr ds:0AA2F0Ch
0x94FA09: pop     edi
0x94FA0A: pop     esi
0x94FA0B: pop     ebx
0x94FA0C: fdivr   dword ptr ds:0A2F948h
0x94FA12: fstp    dword ptr [ecx+11Ch]
0x94FA18: fld     dword ptr [ecx+138h]
0x94FA1E: fmul    dword ptr [ecx+124h]
0x94FA24: fld     dword ptr [ecx+134h]
0x94FA2A: fmul    dword ptr [ecx+128h]
0x94FA30: fsubp   st(1), st
0x94FA32: fadd    dword ptr ds:0AA2F0Ch
0x94FA38: fdivr   dword ptr ds:0A2F948h
0x94FA3E: fstp    dword ptr [ecx+12Ch]
0x94FA44: mov     esp, ebp
0x94FA46: pop     ebp
0x94FA47: retn
