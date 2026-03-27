0x8ABD40: push    ebp
0x8ABD41: mov     ebp, esp
0x8ABD43: and     esp, 0FFFFFFF0h
0x8ABD46: sub     esp, 0Ch
0x8ABD49: mov     ecx, [ebp+arg_4]
0x8ABD4C: dec     ecx
0x8ABD4D: push    esi
0x8ABD4E: js      short loc_8ABDA0
0x8ABD50: mov     eax, [ebp+arg_0]
0x8ABD53: mov     edx, [ebp+arg_8]
0x8ABD56: add     eax, 1Ch
0x8ABD59: inc     ecx
0x8ABD5A: lea     ebx, [ebx+0]
0x8ABD60: fld     dword ptr [eax]
0x8ABD62: movaps  xmm1, xmmword ptr [eax-0Ch]
0x8ABD66: fst     dword ptr [eax-10h]
0x8ABD69: movaps  xmm0, xmmword ptr [edx]
0x8ABD6C: mulps   xmm0, xmm1
0x8ABD6F: movaps  xmm1, xmm0
0x8ABD72: shufps  xmm1, xmm0, 55h ; 'U'
0x8ABD76: movaps  xmm2, xmm0
0x8ABD79: addss   xmm1, xmm0
0x8ABD7D: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8ABD81: lea     esi, [esp+10h+var_4]
0x8ABD85: addss   xmm2, xmm1
0x8ABD89: movss   dword ptr [esi], xmm2
0x8ABD8D: fld     [esp+10h+var_4]
0x8ABD91: fmul    st, st(1)
0x8ABD93: add     eax, 30h ; '0'
0x8ABD96: dec     ecx
0x8ABD97: fchs
0x8ABD99: fstp    dword ptr [eax-30h]
0x8ABD9C: fstp    st
0x8ABD9E: jnz     short loc_8ABD60
0x8ABDA0: pop     esi
0x8ABDA1: mov     esp, ebp
0x8ABDA3: pop     ebp
0x8ABDA4: retn    0Ch
