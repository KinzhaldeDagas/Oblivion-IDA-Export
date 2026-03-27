0x8F55E0: push    ebp
0x8F55E1: mov     ebp, esp
0x8F55E3: and     esp, 0FFFFFFF0h
0x8F55E6: sub     esp, 88h
0x8F55EC: push    esi
0x8F55ED: lea     esi, [ecx+10h]
0x8F55F0: push    edi
0x8F55F1: mov     edi, [ecx+0Ch]
0x8F55F4: mov     ecx, [ebp+arg_0]
0x8F55F7: movaps  xmm1, xmmword ptr [ecx]
0x8F55FA: movaps  xmm2, xmmword ptr [ecx+10h]
0x8F55FE: movaps  xmm3, xmmword ptr [ecx+20h]
0x8F5602: movaps  xmm4, xmmword ptr [ecx+30h]
0x8F5606: lea     ecx, [esp+90h+var_80]
0x8F560A: mov     edx, edi
0x8F560C: mov     eax, esi
0x8F560E: sub     ecx, esi
0x8F5610: movaps  xmm0, xmmword ptr [eax]
0x8F5613: movaps  xmm5, xmm0
0x8F5616: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F561A: movaps  xmm6, xmm3
0x8F561D: mulps   xmm6, xmm5
0x8F5620: movaps  xmm5, xmm0
0x8F5623: shufps  xmm5, xmm0, 55h ; 'U'
0x8F5627: movaps  xmm7, xmm2
0x8F562A: mulps   xmm7, xmm5
0x8F562D: movaps  xmm5, xmm0
0x8F5630: shufps  xmm5, xmm0, 0
0x8F5634: movaps  xmm0, xmm1
0x8F5637: mulps   xmm0, xmm5
0x8F563A: addps   xmm6, xmm4
0x8F563D: addps   xmm0, xmm7
0x8F5640: addps   xmm0, xmm6
0x8F5643: movaps  xmmword ptr [ecx+eax], xmm0
0x8F5647: add     eax, 10h
0x8F564A: dec     edx
0x8F564B: test    edx, edx
0x8F564D: jg      short loc_8F5610
0x8F564F: test    edi, edi
0x8F5651: mov     [esp+90h+var_84], 7F7FFFFFh
0x8F5659: movss   xmm2, [esp+90h+var_84]
0x8F565F: mov     [esp+90h+var_84], 0FF7FFFFFh
0x8F5667: movss   xmm3, [esp+90h+var_84]
0x8F566D: shufps  xmm2, xmm2, 0
0x8F5671: shufps  xmm3, xmm3, 0
0x8F5675: jle     short loc_8F56A2
0x8F5677: lea     ecx, [esp+90h+var_80]
0x8F567B: mov     eax, esi
0x8F567D: lea     ecx, [ecx+0]
0x8F5680: movaps  xmm1, xmmword ptr [ecx]
0x8F5683: movaps  xmm0, xmmword ptr [eax]
0x8F5686: shufps  xmm0, xmm0, 0FFh
0x8F568A: movaps  xmm4, xmm1
0x8F568D: add     eax, 10h
0x8F5690: add     ecx, 10h
0x8F5693: dec     edi
0x8F5694: subps   xmm4, xmm0
0x8F5697: addps   xmm1, xmm0
0x8F569A: minps   xmm2, xmm4
0x8F569D: maxps   xmm3, xmm1
0x8F56A0: jnz     short loc_8F5680
0x8F56A2: mov     eax, [ebp+arg_4]
0x8F56A5: mov     [esp+90h+var_84], eax
0x8F56A9: movss   xmm0, [esp+90h+var_84]
0x8F56AF: mov     eax, [ebp+arg_8]
0x8F56B2: shufps  xmm0, xmm0, 0
0x8F56B6: pop     edi
0x8F56B7: subps   xmm2, xmm0
0x8F56BA: addps   xmm3, xmm0
0x8F56BD: movaps  xmmword ptr [eax], xmm2
0x8F56C0: movaps  xmmword ptr [eax+10h], xmm3
0x8F56C4: pop     esi
0x8F56C5: mov     esp, ebp
0x8F56C7: pop     ebp
0x8F56C8: retn    0Ch
