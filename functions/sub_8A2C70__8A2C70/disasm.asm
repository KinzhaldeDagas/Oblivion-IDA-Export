0x8A2C70: push    ebp
0x8A2C71: mov     ebp, esp
0x8A2C73: and     esp, 0FFFFFFF0h
0x8A2C76: movaps  xmm1, xmmword ptr [ecx]
0x8A2C79: fldz
0x8A2C7B: movss   xmm4, dword ptr ds:0A46C30h
0x8A2C83: mov     edx, [ebp+arg_0]
0x8A2C86: movaps  xmm0, xmm1
0x8A2C89: mulps   xmm0, xmm1
0x8A2C8C: movaps  xmm2, xmm0
0x8A2C8F: shufps  xmm2, xmm0, 55h ; 'U'
0x8A2C93: addss   xmm2, xmm0
0x8A2C97: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8A2C9B: addss   xmm0, xmm2
0x8A2C9F: movaps  xmm2, xmm0
0x8A2CA2: rsqrtss xmm2, xmm2
0x8A2CA6: mulss   xmm0, xmm2
0x8A2CAA: mulss   xmm0, xmm2
0x8A2CAE: xorps   xmm3, xmm3
0x8A2CB1: movss   xmm3, xmm4
0x8A2CB5: movss   xmm4, dword ptr ds:0A3D65Ch
0x8A2CBD: subss   xmm3, xmm0
0x8A2CC1: xorps   xmm0, xmm0
0x8A2CC4: movss   xmm0, xmm4
0x8A2CC8: mulss   xmm0, xmm2
0x8A2CCC: mulss   xmm0, xmm3
0x8A2CD0: movaps  xmmword ptr [edx], xmm1
0x8A2CD3: shufps  xmm0, xmm0, 0
0x8A2CD7: mulps   xmm0, xmm1
0x8A2CDA: movaps  xmmword ptr [edx], xmm0
0x8A2CDD: fcomp   dword ptr [ecx+0Ch]
0x8A2CE0: fnstsw  ax
0x8A2CE2: test    ah, 41h
0x8A2CE5: jnz     short loc_8A2CF4
0x8A2CE7: movaps  xmm1, xmmword ptr ds:0A965C0h
0x8A2CEE: xorps   xmm0, xmm1
0x8A2CF1: movaps  xmmword ptr [edx], xmm0
0x8A2CF4: mov     esp, ebp
0x8A2CF6: pop     ebp
0x8A2CF7: retn    4
