0x959630: push    ebp
0x959631: mov     ebp, esp
0x959633: and     esp, 0FFFFFFF0h
0x959636: sub     esp, 2Ch
0x959639: push    ebx
0x95963A: mov     ebx, [ebp+arg_4]
0x95963D: movaps  xmm0, xmmword ptr [ebx]
0x959640: movaps  xmmword ptr [edi+20h], xmm0
0x959644: movaps  xmm0, xmmword ptr ds:0A965C0h
0x95964B: movaps  xmm1, xmmword ptr [ebx]
0x95964E: mov     eax, [ecx]
0x959650: push    edi
0x959651: lea     edx, [esp+34h+var_20]
0x959655: xorps   xmm1, xmm0
0x959658: push    edx
0x959659: movaps  [esp+38h+var_20], xmm1
0x95965E: call    dword ptr [eax+24h]
0x959661: movaps  xmm3, xmmword ptr [esi+20h]
0x959665: movaps  xmm1, xmmword ptr [ebx]
0x959668: movaps  xmm2, xmmword ptr [esi]
0x95966B: movaps  xmm5, xmmword ptr [esi+10h]
0x95966F: mov     ecx, [ebp+arg_0]
0x959672: mov     eax, [ecx]
0x959674: movaps  xmm4, xmm3
0x959677: shufps  xmm4, xmm3, 44h ; 'D'
0x95967B: movaps  xmm7, xmm3
0x95967E: movaps  xmm0, xmm2
0x959681: shufps  xmm0, xmm5, 44h ; 'D'
0x959685: shufps  xmm7, xmm3, 0EEh ; 'î'
0x959689: shufps  xmm2, xmm5, 0EEh ; 'î'
0x95968D: movaps  xmm5, xmm0
0x959690: movaps  xmm3, xmm1
0x959693: shufps  xmm3, xmm1, 55h ; 'U'
0x959697: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x95969B: mulps   xmm5, xmm3
0x95969E: shufps  xmm0, xmm4, 88h ; 'ˆ'
0x9596A2: movaps  xmm3, xmm1
0x9596A5: movaps  xmm6, xmm1
0x9596A8: shufps  xmm3, xmm1, 0
0x9596AC: mulps   xmm0, xmm3
0x9596AF: lea     ebx, [edi+10h]
0x9596B2: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x9596B6: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x9596BA: push    ebx
0x9596BB: lea     edx, [esp+34h+var_10]
0x9596BF: mulps   xmm2, xmm6
0x9596C2: addps   xmm0, xmm5
0x9596C5: addps   xmm0, xmm2
0x9596C8: push    edx
0x9596C9: movaps  [esp+38h+var_10], xmm0
0x9596CE: call    dword ptr [eax+24h]
0x9596D1: movaps  xmm0, xmmword ptr [ebx]
0x9596D4: movaps  xmm2, xmmword ptr [esi+30h]
0x9596D8: movaps  xmm4, xmmword ptr [esi+20h]
0x9596DC: movaps  xmm1, xmmword ptr [edi+20h]
0x9596E0: movaps  xmm3, xmm0
0x9596E3: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x9596E7: mulps   xmm4, xmm3
0x9596EA: movaps  xmm3, xmmword ptr [esi+10h]
0x9596EE: addps   xmm4, xmm2
0x9596F1: movaps  xmm2, xmm0
0x9596F4: shufps  xmm2, xmm0, 55h ; 'U'
0x9596F8: mulps   xmm3, xmm2
0x9596FB: movaps  xmm2, xmm0
0x9596FE: shufps  xmm2, xmm0, 0
0x959702: movaps  xmm0, xmmword ptr [esi]
0x959705: mulps   xmm0, xmm2
0x959708: movaps  xmm2, xmmword ptr [edi]
0x95970B: addps   xmm0, xmm3
0x95970E: addps   xmm0, xmm4
0x959711: subps   xmm2, xmm0
0x959714: movaps  xmm0, xmm2
0x959717: mulps   xmm0, xmm1
0x95971A: movaps  xmm1, xmm0
0x95971D: shufps  xmm1, xmm0, 55h ; 'U'
0x959721: movaps  xmm2, xmm0
0x959724: addss   xmm1, xmm0
0x959728: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x95972C: lea     eax, [esp+30h+var_24]
0x959730: addss   xmm2, xmm1
0x959734: movss   dword ptr [eax], xmm2
0x959738: mov     ecx, [esp+30h+var_24]
0x95973C: mov     [edi+2Ch], ecx
0x95973F: pop     ebx
0x959740: mov     esp, ebp
0x959742: pop     ebp
0x959743: retn
