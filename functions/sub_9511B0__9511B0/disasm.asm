0x9511B0: push    ebp
0x9511B1: mov     ebp, esp
0x9511B3: and     esp, 0FFFFFFF0h
0x9511B6: sub     esp, 14h
0x9511B9: mov     eax, [ebp+arg_C]
0x9511BC: mov     edx, [eax+4]
0x9511BF: push    ebx
0x9511C0: push    esi
0x9511C1: push    edi
0x9511C2: xor     edi, edi
0x9511C4: mov     cl, 1
0x9511C6: mov     [esp+20h+var_10], edi
0x9511CA: mov     [esp+20h+var_C], edx
0x9511CE: mov     edi, edi
0x9511D0: mov     eax, [esp+20h+var_C]
0x9511D4: cmp     [esp+20h+var_10], eax
0x9511D8: jge     loc_9512DC
0x9511DE: xor     esi, esi
0x9511E0: test    cl, cl
0x9511E2: jz      short loc_951254
0x9511E4: mov     ebx, [ebp+arg_4]
0x9511E7: xor     edx, edx
0x9511E9: lea     esp, [esp+0]
0x9511F0: cmp     esi, [ebx+4]
0x9511F3: jge     short loc_951254
0x9511F5: mov     eax, [ebp+arg_C]
0x9511F8: mov     eax, [eax]
0x9511FA: movaps  xmm1, xmmword ptr [eax+edi]
0x9511FE: add     eax, edi
0x951200: test    cl, cl
0x951202: mov     eax, [ebx]
0x951204: movaps  xmm2, xmmword ptr [eax+edx]
0x951208: movaps  xmm0, xmm1
0x95120B: mulps   xmm0, xmm2
0x95120E: movaps  xmm2, xmm1
0x951211: shufps  xmm2, xmm1, 0FFh
0x951215: movaps  xmm1, xmm0
0x951218: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x95121C: addss   xmm1, xmm2
0x951220: movaps  xmm2, xmm0
0x951223: shufps  xmm2, xmm0, 55h ; 'U'
0x951227: addss   xmm2, xmm0
0x95122B: lea     eax, [esp+20h+var_8]
0x95122F: addps   xmm2, xmm1
0x951232: movss   dword ptr [eax], xmm2
0x951236: jz      short loc_95124A
0x951238: fld     [esp+20h+var_8]
0x95123C: fcomp   [ebp+arg_10]
0x95123F: fnstsw  ax
0x951241: test    ah, 5
0x951244: jp      short loc_95124A
0x951246: mov     cl, 1
0x951248: jmp     short loc_95124C
0x95124A: xor     cl, cl
0x95124C: inc     esi
0x95124D: add     edx, 10h
0x951250: test    cl, cl
0x951252: jnz     short loc_9511F0
0x951254: xor     esi, esi
0x951256: test    cl, cl
0x951258: jz      short loc_9512C8
0x95125A: mov     edx, [ebp+arg_8]
0x95125D: mov     ebx, [edx+4]
0x951260: xor     edx, edx
0x951262: cmp     esi, ebx
0x951264: jge     short loc_9512C8
0x951266: test    cl, cl
0x951268: jz      short loc_9512BE
0x95126A: mov     eax, [ebp+arg_C]
0x95126D: mov     eax, [eax]
0x95126F: movaps  xmm1, xmmword ptr [eax+edi]
0x951273: mov     ecx, [ebp+arg_8]
0x951276: add     eax, edi
0x951278: mov     eax, [ecx]
0x95127A: movaps  xmm2, xmmword ptr [eax+edx]
0x95127E: movaps  xmm0, xmm1
0x951281: mulps   xmm0, xmm2
0x951284: movaps  xmm2, xmm1
0x951287: shufps  xmm2, xmm1, 0FFh
0x95128B: movaps  xmm1, xmm0
0x95128E: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x951292: addss   xmm1, xmm2
0x951296: movaps  xmm2, xmm0
0x951299: shufps  xmm2, xmm0, 55h ; 'U'
0x95129D: addss   xmm2, xmm0
0x9512A1: lea     ecx, [esp+20h+var_4]
0x9512A5: addps   xmm2, xmm1
0x9512A8: movss   dword ptr [ecx], xmm2
0x9512AC: fld     [esp+20h+var_4]
0x9512B0: fcomp   [ebp+arg_10]
0x9512B3: fnstsw  ax
0x9512B5: test    ah, 5
0x9512B8: jp      short loc_9512BE
0x9512BA: mov     cl, 1
0x9512BC: jmp     short loc_9512C0
0x9512BE: xor     cl, cl
0x9512C0: inc     esi
0x9512C1: add     edx, 10h
0x9512C4: test    cl, cl
0x9512C6: jnz     short loc_951262
0x9512C8: mov     esi, [esp+20h+var_10]
0x9512CC: inc     esi
0x9512CD: add     edi, 10h
0x9512D0: test    cl, cl
0x9512D2: mov     [esp+20h+var_10], esi
0x9512D6: jnz     loc_9511D0
0x9512DC: mov     eax, [ebp+arg_0]
0x9512DF: pop     edi
0x9512E0: pop     esi
0x9512E1: mov     [eax], cl
0x9512E3: pop     ebx
0x9512E4: mov     esp, ebp
0x9512E6: pop     ebp
0x9512E7: retn
