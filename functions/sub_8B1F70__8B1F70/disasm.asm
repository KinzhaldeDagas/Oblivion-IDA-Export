0x8B1F70: push    ebp
0x8B1F71: mov     ebp, esp
0x8B1F73: and     esp, 0FFFFFFF0h
0x8B1F76: sub     esp, 8
0x8B1F79: mov     eax, [ebp+arg_4]
0x8B1F7C: push    esi
0x8B1F7D: mov     esi, [ebp+arg_0]
0x8B1F80: movaps  xmm1, xmmword ptr [esi]
0x8B1F83: movaps  xmm2, xmmword ptr [esi+10h]
0x8B1F87: movaps  xmm3, xmmword ptr [esi+20h]
0x8B1F8B: mov     edx, ecx
0x8B1F8D: push    edi
0x8B1F8E: sub     edx, eax
0x8B1F90: mov     edi, 4
0x8B1F95: movaps  xmm0, xmmword ptr [eax]
0x8B1F98: movaps  xmm4, xmm0
0x8B1F9B: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8B1F9F: movaps  xmm5, xmm3
0x8B1FA2: mulps   xmm5, xmm4
0x8B1FA5: movaps  xmm4, xmm0
0x8B1FA8: shufps  xmm4, xmm0, 55h ; 'U'
0x8B1FAC: movaps  xmm6, xmm2
0x8B1FAF: mulps   xmm6, xmm4
0x8B1FB2: movaps  xmm4, xmm0
0x8B1FB5: shufps  xmm4, xmm0, 0
0x8B1FB9: movaps  xmm0, xmm1
0x8B1FBC: mulps   xmm0, xmm4
0x8B1FBF: addps   xmm0, xmm6
0x8B1FC2: addps   xmm0, xmm5
0x8B1FC5: movaps  xmmword ptr [edx+eax], xmm0
0x8B1FC9: add     eax, 10h
0x8B1FCC: dec     edi
0x8B1FCD: jnz     short loc_8B1F95
0x8B1FCF: movaps  xmm0, xmmword ptr [esi+30h]
0x8B1FD3: movaps  xmm1, xmmword ptr [ecx+30h]
0x8B1FD7: pop     edi
0x8B1FD8: addps   xmm1, xmm0
0x8B1FDB: movaps  xmmword ptr [ecx+30h], xmm1
0x8B1FDF: pop     esi
0x8B1FE0: mov     esp, ebp
0x8B1FE2: pop     ebp
0x8B1FE3: retn    8
