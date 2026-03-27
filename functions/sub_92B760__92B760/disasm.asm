0x92B760: push    ebp
0x92B761: mov     ebp, esp
0x92B763: and     esp, 0FFFFFFF0h
0x92B766: sub     esp, 14h
0x92B769: mov     eax, [ebp+arg_0]
0x92B76C: mov     eax, [eax]
0x92B76E: mov     ecx, [ebp+arg_C]
0x92B771: push    ebx
0x92B772: mov     ebx, [ebp+arg_4]
0x92B775: shl     ecx, 4
0x92B778: movaps  xmm0, xmmword ptr [ecx+eax]
0x92B77C: lea     edx, [ecx+eax]
0x92B77F: push    esi
0x92B780: movaps  xmm2, xmm0
0x92B783: shufps  xmm2, xmm0, 0C9h ; 'É'
0x92B787: push    edi
0x92B788: mov     edi, [ebp+arg_8]
0x92B78B: mov     ecx, edi
0x92B78D: shl     ecx, 4
0x92B790: movaps  xmm1, xmmword ptr [ecx+eax]
0x92B794: lea     esi, [ecx+eax]
0x92B797: movaps  xmm3, xmm1
0x92B79A: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x92B79E: mulps   xmm3, xmm2
0x92B7A1: movaps  xmm2, xmm0
0x92B7A4: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x92B7A8: movaps  xmm0, xmm1
0x92B7AB: shufps  xmm0, xmm1, 0C9h ; 'É'
0x92B7AF: movaps  xmm1, xmm0
0x92B7B2: mulps   xmm1, xmm2
0x92B7B5: movaps  xmm2, xmmword ptr [edx]
0x92B7B8: subps   xmm1, xmm3
0x92B7BB: mov     ecx, ebx
0x92B7BD: shl     ecx, 4
0x92B7C0: movaps  xmm0, xmmword ptr [ecx+eax]
0x92B7C4: add     ecx, eax
0x92B7C6: movaps  xmm3, xmm0
0x92B7C9: shufps  xmm3, xmm0, 0C9h ; 'É'
0x92B7CD: movaps  xmm4, xmm2
0x92B7D0: shufps  xmm4, xmm2, 0D2h ; 'Ò'
0x92B7D4: mulps   xmm4, xmm3
0x92B7D7: movaps  xmm3, xmm0
0x92B7DA: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x92B7DE: movaps  xmm0, xmm2
0x92B7E1: shufps  xmm0, xmm2, 0C9h ; 'É'
0x92B7E5: movaps  xmm2, xmmword ptr [ecx]
0x92B7E8: mulps   xmm0, xmm3
0x92B7EB: movaps  xmm3, xmm0
0x92B7EE: movaps  xmm0, xmmword ptr [esi]
0x92B7F1: subps   xmm3, xmm4
0x92B7F4: movaps  xmm4, xmm0
0x92B7F7: shufps  xmm4, xmm0, 0C9h ; 'É'
0x92B7FB: movaps  xmm5, xmm2
0x92B7FE: shufps  xmm5, xmm2, 0D2h ; 'Ò'
0x92B802: mulps   xmm5, xmm4
0x92B805: movaps  xmm4, xmm0
0x92B808: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x92B80C: movaps  xmm0, xmm2
0x92B80F: shufps  xmm0, xmm2, 0C9h ; 'É'
0x92B813: movaps  xmm2, xmm0
0x92B816: mulps   xmm2, xmm4
0x92B819: movaps  xmm4, xmmword ptr [ecx]
0x92B81C: subps   xmm2, xmm5
0x92B81F: movaps  xmm0, xmm1
0x92B822: mulps   xmm0, xmm4
0x92B825: movaps  xmm4, xmm0
0x92B828: shufps  xmm4, xmm0, 55h ; 'U'
0x92B82C: movaps  xmm5, xmm0
0x92B82F: lea     eax, [esp+20h+var_14]
0x92B833: addss   xmm4, xmm0
0x92B837: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x92B83B: addss   xmm5, xmm4
0x92B83F: movss   dword ptr [eax], xmm5
0x92B843: fld     [esp+20h+var_14]
0x92B847: fabs
0x92B849: fcomp   dword ptr ds:0AA1C24h
0x92B84F: fnstsw  ax
0x92B851: test    ah, 5
0x92B854: jp      short loc_92B862
0x92B856: mov     eax, 1
0x92B85B: pop     edi
0x92B85C: pop     esi
0x92B85D: pop     ebx
0x92B85E: mov     esp, ebp
0x92B860: pop     ebp
0x92B861: retn
0x92B862: cmp     ebx, edi
0x92B864: fld     dword ptr [ecx+0Ch]
0x92B867: fchs
0x92B869: mov     eax, [ebp+arg_10]
0x92B86C: fstp    dword ptr [esp+20h+var_10]
0x92B870: mov     ecx, [ebp+arg_C]
0x92B873: fld     dword ptr [esi+0Ch]
0x92B876: mov     dword ptr [esp+20h+var_10+0Ch], 0
0x92B87E: fchs
0x92B880: fstp    dword ptr [esp+20h+var_10+4]
0x92B884: fld     dword ptr [edx+0Ch]
0x92B887: mov     [eax+10h], ebx
0x92B88A: fchs
0x92B88C: mov     [eax+14h], edi
0x92B88F: fstp    dword ptr [esp+20h+var_10+8]
0x92B893: movaps  xmm0, [esp+20h+var_10]
0x92B898: fld     dword ptr ds:0A2F948h
0x92B89E: movaps  xmm5, xmm0
0x92B8A1: fdiv    [esp+20h+var_14]
0x92B8A5: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x92B8A9: mulps   xmm2, xmm5
0x92B8AC: movaps  xmm5, xmm0
0x92B8AF: shufps  xmm5, xmm0, 55h ; 'U'
0x92B8B3: mulps   xmm3, xmm5
0x92B8B6: movaps  xmm5, xmm0
0x92B8B9: shufps  xmm5, xmm0, 0
0x92B8BD: mulps   xmm1, xmm5
0x92B8C0: addps   xmm1, xmm3
0x92B8C3: addps   xmm1, xmm2
0x92B8C6: mov     [eax+18h], ecx
0x92B8C9: fstp    [esp+20h+var_14]
0x92B8CD: movss   xmm4, [esp+20h+var_14]
0x92B8D3: movaps  xmm0, xmm4
0x92B8D6: shufps  xmm0, xmm4, 0
0x92B8DA: mulps   xmm0, xmm1
0x92B8DD: movaps  xmmword ptr [eax], xmm0
0x92B8E0: jle     short loc_92B8EC
0x92B8E2: mov     edx, edi
0x92B8E4: mov     ecx, ebx
0x92B8E6: mov     [eax+10h], edx
0x92B8E9: mov     [eax+14h], ecx
0x92B8EC: pop     edi
0x92B8ED: pop     esi
0x92B8EE: xor     eax, eax
0x92B8F0: pop     ebx
0x92B8F1: mov     esp, ebp
0x92B8F3: pop     ebp
0x92B8F4: retn
