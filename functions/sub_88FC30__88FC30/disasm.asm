0x88FC30: push    ebp
0x88FC31: mov     ebp, esp
0x88FC33: and     esp, 0FFFFFFF0h
0x88FC36: sub     esp, 10h
0x88FC39: xor     edx, edx
0x88FC3B: jmp     short loc_88FC40
0x88FC3D: align 10h
0x88FC40: fld     dword ptr [ecx+edx*4]
0x88FC43: fld     st
0x88FC45: fxch    st(1)
0x88FC47: fucompp
0x88FC49: fnstsw  ax
0x88FC4B: test    ah, 44h
0x88FC4E: jp      short loc_88FCAA
0x88FC50: inc     edx
0x88FC51: cmp     edx, 3
0x88FC54: jl      short loc_88FC40
0x88FC56: movaps  xmm0, xmmword ptr [ecx]
0x88FC59: mulps   xmm0, xmm0
0x88FC5C: movaps  xmm1, xmm0
0x88FC5F: shufps  xmm1, xmm0, 55h ; 'U'
0x88FC63: movaps  xmm2, xmm0
0x88FC66: lea     eax, [esp+10h+var_4]
0x88FC6A: addss   xmm1, xmm0
0x88FC6E: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x88FC72: addss   xmm2, xmm1
0x88FC76: movss   dword ptr [eax], xmm2
0x88FC7A: fld     [esp+10h+var_4]
0x88FC7E: fsub    dword ptr ds:0A2F948h
0x88FC84: fabs
0x88FC86: fcomp   [ebp+arg_4]
0x88FC89: fnstsw  ax
0x88FC8B: test    ah, 5
0x88FC8E: jp      short loc_88FC9D
0x88FC90: mov     eax, [ebp+arg_0]
0x88FC93: mov     cl, 1
0x88FC95: mov     [eax], cl
0x88FC97: mov     esp, ebp
0x88FC99: pop     ebp
0x88FC9A: retn    8
0x88FC9D: mov     eax, [ebp+arg_0]
0x88FCA0: xor     cl, cl
0x88FCA2: mov     [eax], cl
0x88FCA4: mov     esp, ebp
0x88FCA6: pop     ebp
0x88FCA7: retn    8
0x88FCAA: mov     eax, [ebp+arg_0]
0x88FCAD: mov     byte ptr [eax], 0
0x88FCB0: mov     esp, ebp
0x88FCB2: pop     ebp
0x88FCB3: retn    8
