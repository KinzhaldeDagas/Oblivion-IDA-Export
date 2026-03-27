0x943230: push    ebp
0x943231: mov     ebp, esp
0x943233: and     esp, 0FFFFFFF0h
0x943236: sub     esp, 20h
0x943239: mov     eax, [ebp+arg_4]
0x94323C: movaps  xmm2, xmmword ptr [eax]
0x94323F: mov     ecx, [ebp+arg_0]
0x943242: movaps  xmm0, xmmword ptr [ecx]
0x943245: movaps  xmm1, xmm2
0x943248: addps   xmm1, xmm0
0x94324B: movaps  xmm0, xmm1
0x94324E: mulps   xmm0, xmm1
0x943251: movaps  xmm3, xmm0
0x943254: shufps  xmm3, xmm0, 55h ; 'U'
0x943258: movaps  xmm4, xmm0
0x94325B: addss   xmm3, xmm0
0x94325F: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x943263: movaps  xmm0, xmm4
0x943266: addss   xmm0, xmm3
0x94326A: movaps  [esp+20h+var_10], xmm0
0x94326F: sqrtss  xmm0, xmm0
0x943273: movss   dword ptr [esp+20h+var_10], xmm0
0x943279: movaps  xmm0, [esp+20h+var_10]
0x94327E: lea     edx, [esp+20h+var_18]
0x943282: movss   dword ptr [edx], xmm0
0x943286: fld     [esp+20h+var_18]
0x94328A: fcomp   dword ptr ds:0A9CCB4h
0x943290: fnstsw  ax
0x943292: test    ah, 41h
0x943295: jnz     short loc_9432BC
0x943297: fld     dword ptr ds:0A2F948h
0x94329D: fdiv    [esp+20h+var_18]
0x9432A1: fstp    [esp+20h+var_18]
0x9432A5: movss   xmm0, [esp+20h+var_18]
0x9432AB: movaps  xmm2, xmm0
0x9432AE: shufps  xmm2, xmm0, 0
0x9432B2: mulps   xmm2, xmm1
0x9432B5: movaps  [esp+20h+var_10], xmm2
0x9432BA: jmp     short loc_9432C6
0x9432BC: movaps  [esp+20h+var_10], xmm2
0x9432C1: movaps  xmm2, [esp+20h+var_10]
0x9432C6: mov     eax, [ebp+arg_C]
0x9432C9: movaps  xmm0, xmmword ptr [eax]
0x9432CC: mov     ecx, [ebp+arg_8]
0x9432CF: movaps  xmm1, xmm2
0x9432D2: shufps  xmm1, xmm2, 0D2h ; 'Ò'
0x9432D6: movaps  xmm3, xmm0
0x9432D9: shufps  xmm3, xmm0, 0C9h ; 'É'
0x9432DD: shufps  xmm2, xmm2, 0C9h ; 'É'
0x9432E1: movaps  xmm4, xmm1
0x9432E4: mulps   xmm4, xmm3
0x9432E7: movaps  xmm3, xmm0
0x9432EA: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x9432EE: movaps  xmm0, xmm2
0x9432F1: mulps   xmm0, xmm3
0x9432F4: subps   xmm0, xmm4
0x9432F7: movaps  xmm3, xmm0
0x9432FA: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x9432FE: mulps   xmm3, xmm2
0x943301: movaps  xmm2, xmm0
0x943304: shufps  xmm2, xmm0, 0C9h ; 'É'
0x943308: mulps   xmm2, xmm1
0x94330B: movaps  xmm1, xmm2
0x94330E: movaps  xmm2, xmmword ptr [ecx]
0x943311: mulps   xmm0, xmm2
0x943314: subps   xmm1, xmm3
0x943317: movaps  xmm3, xmm0
0x94331A: mulps   xmm1, xmm2
0x94331D: shufps  xmm3, xmm0, 55h ; 'U'
0x943321: movaps  xmm4, xmm0
0x943324: addss   xmm3, xmm0
0x943328: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x94332C: movaps  xmm0, xmm1
0x94332F: shufps  xmm0, xmm1, 55h ; 'U'
0x943333: movaps  xmm2, xmm1
0x943336: addss   xmm0, xmm1
0x94333A: shufps  xmm2, xmm1, 0AAh ; 'ª'
0x94333E: lea     eax, [esp+20h+var_18]
0x943342: addss   xmm2, xmm0
0x943346: lea     edx, [esp+20h+var_14]
0x94334A: movss   dword ptr [eax], xmm2
0x94334E: mov     ecx, [esp+20h+var_18]
0x943352: addss   xmm4, xmm3
0x943356: movss   dword ptr [edx], xmm4
0x94335A: mov     edx, [esp+20h+var_14]
0x94335E: push    ecx; float
0x94335F: push    edx; float
0x943360: call    sub_8ECBB0
0x943365: mov     eax, [ebp+arg_14]
0x943368: mov     ecx, [ebp+arg_10]
0x94336B: fstp    dword ptr [eax]
0x94336D: movaps  xmm0, [esp+28h+var_10]
0x943372: add     esp, 8
0x943375: movaps  xmmword ptr [ecx], xmm0
0x943378: mov     esp, ebp
0x94337A: pop     ebp
0x94337B: retn
