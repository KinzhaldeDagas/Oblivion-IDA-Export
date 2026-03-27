0x8D2AB0: push    ebp
0x8D2AB1: mov     ebp, esp
0x8D2AB3: mov     edx, [ebp+arg_0]
0x8D2AB6: mov     eax, [ebp+arg_4]
0x8D2AB9: movaps  xmm1, xmmword ptr [edx]
0x8D2ABC: movaps  xmm2, xmmword ptr [edx+10h]
0x8D2AC0: movaps  xmm3, xmmword ptr [edx+20h]
0x8D2AC4: and     esp, 0FFFFFFF0h
0x8D2AC7: sub     ecx, eax
0x8D2AC9: mov     edx, 3
0x8D2ACE: mov     edi, edi
0x8D2AD0: movaps  xmm0, xmmword ptr [eax]
0x8D2AD3: movaps  xmm4, xmm0
0x8D2AD6: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8D2ADA: movaps  xmm5, xmm3
0x8D2ADD: mulps   xmm5, xmm4
0x8D2AE0: movaps  xmm4, xmm0
0x8D2AE3: shufps  xmm4, xmm0, 55h ; 'U'
0x8D2AE7: movaps  xmm6, xmm2
0x8D2AEA: mulps   xmm6, xmm4
0x8D2AED: movaps  xmm4, xmm0
0x8D2AF0: shufps  xmm4, xmm0, 0
0x8D2AF4: movaps  xmm0, xmm1
0x8D2AF7: mulps   xmm0, xmm4
0x8D2AFA: addps   xmm0, xmm6
0x8D2AFD: addps   xmm0, xmm5
0x8D2B00: movaps  xmmword ptr [ecx+eax], xmm0
0x8D2B04: add     eax, 10h
0x8D2B07: dec     edx
0x8D2B08: jnz     short loc_8D2AD0
0x8D2B0A: mov     esp, ebp
0x8D2B0C: pop     ebp
0x8D2B0D: retn    8
