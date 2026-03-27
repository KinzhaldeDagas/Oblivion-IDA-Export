0x8EAF30: push    ebp
0x8EAF31: mov     ebp, esp
0x8EAF33: and     esp, 0FFFFFFF0h
0x8EAF36: movaps  xmm3, xmmword ptr [ecx+30h]
0x8EAF3A: movaps  xmm2, xmmword ptr [ecx+10h]
0x8EAF3E: movaps  xmm5, xmmword ptr [ecx+20h]
0x8EAF42: mov     eax, [ebp+arg_0]
0x8EAF45: movaps  xmm1, xmmword ptr [eax]
0x8EAF48: movaps  xmm4, xmm3
0x8EAF4B: shufps  xmm4, xmm3, 44h ; 'D'
0x8EAF4F: movaps  xmm7, xmm3
0x8EAF52: movaps  xmm0, xmm2
0x8EAF55: shufps  xmm0, xmm5, 44h ; 'D'
0x8EAF59: shufps  xmm7, xmm3, 0EEh ; 'î'
0x8EAF5D: movaps  xmm3, xmm1
0x8EAF60: shufps  xmm3, xmm1, 55h ; 'U'
0x8EAF64: shufps  xmm2, xmm5, 0EEh ; 'î'
0x8EAF68: movaps  xmm5, xmm0
0x8EAF6B: movaps  xmm6, xmm1
0x8EAF6E: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x8EAF72: shufps  xmm0, xmm4, 88h ; 'ˆ'
0x8EAF76: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x8EAF7A: mulps   xmm5, xmm3
0x8EAF7D: movaps  xmm3, xmm1
0x8EAF80: shufps  xmm3, xmm1, 0
0x8EAF84: mulps   xmm0, xmm3
0x8EAF87: movaps  xmm3, xmmword ptr [ecx+20h]
0x8EAF8B: addps   xmm0, xmm5
0x8EAF8E: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x8EAF92: mulps   xmm2, xmm6
0x8EAF95: addps   xmm0, xmm2
0x8EAF98: movaps  xmm2, xmmword ptr [ecx+30h]
0x8EAF9C: movaps  xmm1, xmm0
0x8EAF9F: movaps  xmm0, xmmword ptr [ecx+0F0h]
0x8EAFA6: mulps   xmm0, xmm1
0x8EAFA9: movaps  xmm1, xmm0
0x8EAFAC: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8EAFB0: mulps   xmm2, xmm1
0x8EAFB3: movaps  xmm1, xmm0
0x8EAFB6: shufps  xmm1, xmm0, 55h ; 'U'
0x8EAFBA: mulps   xmm3, xmm1
0x8EAFBD: movaps  xmm1, xmm0
0x8EAFC0: shufps  xmm1, xmm0, 0
0x8EAFC4: movaps  xmm0, xmmword ptr [ecx+10h]
0x8EAFC8: mulps   xmm0, xmm1
0x8EAFCB: movaps  xmm1, xmmword ptr [ecx+0E0h]
0x8EAFD2: addps   xmm0, xmm3
0x8EAFD5: addps   xmm0, xmm2
0x8EAFD8: addps   xmm1, xmm0
0x8EAFDB: movaps  xmmword ptr [ecx+0E0h], xmm1
0x8EAFE2: mov     esp, ebp
0x8EAFE4: pop     ebp
0x8EAFE5: retn    4
