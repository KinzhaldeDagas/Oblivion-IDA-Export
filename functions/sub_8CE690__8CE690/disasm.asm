0x8CE690: push    ebp
0x8CE691: mov     ebp, esp
0x8CE693: and     esp, 0FFFFFFF0h
0x8CE696: mov     eax, [ebp+arg_4]
0x8CE699: mov     edx, [ebp+arg_0]
0x8CE69C: mov     ecx, [ebp+arg_8]
0x8CE69F: sub     esp, 20h
0x8CE6A2: cmp     dword ptr [eax+24h], 1
0x8CE6A6: jnz     short loc_8CE713
0x8CE6A8: cmp     dword ptr [ecx+24h], 1
0x8CE6AC: jz      short loc_8CE713
0x8CE6AE: movaps  xmm0, xmmword ptr [ecx]
0x8CE6B1: fldz
0x8CE6B3: movaps  xmm1, xmmword ptr [eax]
0x8CE6B6: subps   xmm1, xmm0
0x8CE6B9: movaps  xmm0, xmmword ptr [eax+10h]
0x8CE6BD: mulps   xmm0, xmm1
0x8CE6C0: movaps  xmm2, xmm0
0x8CE6C3: shufps  xmm2, xmm0, 55h ; 'U'
0x8CE6C7: addss   xmm2, xmm0
0x8CE6CB: movaps  xmm3, xmm0
0x8CE6CE: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8CE6D2: movaps  xmm0, xmmword ptr [ecx+10h]
0x8CE6D6: addss   xmm3, xmm2
0x8CE6DA: movss   [esp+20h+var_20], xmm3
0x8CE6DF: fcomp   [esp+20h+var_20]
0x8CE6E2: mulps   xmm0, xmm1
0x8CE6E5: movaps  xmm1, xmm0
0x8CE6E8: shufps  xmm1, xmm0, 55h ; 'U'
0x8CE6EC: fnstsw  ax
0x8CE6EE: movaps  xmm2, xmm0
0x8CE6F1: addss   xmm1, xmm0
0x8CE6F5: test    ah, 5
0x8CE6F8: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8CE6FC: addss   xmm2, xmm1
0x8CE700: movss   [esp+20h+var_10], xmm2
0x8CE706: jp      short loc_8CE713
0x8CE708: mov     byte ptr [edx], 1
0x8CE70B: mov     eax, edx
0x8CE70D: mov     esp, ebp
0x8CE70F: pop     ebp
0x8CE710: retn    0Ch
0x8CE713: mov     byte ptr [edx], 0
0x8CE716: mov     eax, edx
0x8CE718: mov     esp, ebp
0x8CE71A: pop     ebp
0x8CE71B: retn    0Ch
