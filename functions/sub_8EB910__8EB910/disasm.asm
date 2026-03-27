0x8EB910: push    ebp
0x8EB911: mov     ebp, esp
0x8EB913: and     esp, 0FFFFFFF0h
0x8EB916: sub     esp, 10h
0x8EB919: movaps  xmm1, xmmword ptr [eax]
0x8EB91C: movaps  xmm0, xmmword ptr [eax+10h]
0x8EB920: mov     eax, [ebp+arg_0]
0x8EB923: movaps  xmm2, xmmword ptr [eax]
0x8EB926: subps   xmm2, xmm0
0x8EB929: movaps  xmm0, xmm2
0x8EB92C: mulps   xmm0, xmm1
0x8EB92F: movaps  xmm1, xmm0
0x8EB932: shufps  xmm1, xmm0, 55h ; 'U'
0x8EB936: movaps  xmm2, xmm0
0x8EB939: addss   xmm1, xmm0
0x8EB93D: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8EB941: lea     edx, [esp+10h+var_4]
0x8EB945: addss   xmm2, xmm1
0x8EB949: movss   dword ptr [edx], xmm2
0x8EB94D: fld     [esp+10h+var_4]
0x8EB951: fcomp   dword ptr ds:0A57CB0h
0x8EB957: fnstsw  ax
0x8EB959: test    ah, 1
0x8EB95C: mov     eax, ecx
0x8EB95E: jnz     short loc_8EB967
0x8EB960: mov     byte ptr [ecx], 0
0x8EB963: mov     esp, ebp
0x8EB965: pop     ebp
0x8EB966: retn
0x8EB967: mov     byte ptr [ecx], 1
0x8EB96A: mov     esp, ebp
0x8EB96C: pop     ebp
0x8EB96D: retn
