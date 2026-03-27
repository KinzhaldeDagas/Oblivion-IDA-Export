0x914E00: push    ebp
0x914E01: mov     ebp, esp
0x914E03: and     esp, 0FFFFFFF0h
0x914E06: sub     esp, 10h
0x914E09: movaps  xmm3, xmmword ptr [ecx+30h]
0x914E0D: movaps  xmm2, xmmword ptr [ecx+10h]
0x914E11: movaps  xmm5, xmmword ptr [ecx+20h]
0x914E15: mov     eax, [ebp+arg_0]
0x914E18: movaps  xmm1, xmmword ptr [eax]
0x914E1B: movaps  xmm4, xmm3
0x914E1E: shufps  xmm4, xmm3, 44h ; 'D'
0x914E22: movaps  xmm7, xmm3
0x914E25: movaps  xmm0, xmm2
0x914E28: shufps  xmm0, xmm5, 44h ; 'D'
0x914E2C: shufps  xmm7, xmm3, 0EEh ; 'î'
0x914E30: shufps  xmm2, xmm5, 0EEh ; 'î'
0x914E34: movaps  xmm5, xmm0
0x914E37: movaps  xmm3, xmm1
0x914E3A: shufps  xmm3, xmm1, 55h ; 'U'
0x914E3E: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x914E42: mulps   xmm5, xmm3
0x914E45: shufps  xmm0, xmm4, 88h ; 'ˆ'
0x914E49: movaps  xmm3, xmm1
0x914E4C: movaps  xmm6, xmm1
0x914E4F: shufps  xmm3, xmm1, 0
0x914E53: mulps   xmm0, xmm3
0x914E56: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x914E5A: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x914E5E: mulps   xmm2, xmm6
0x914E61: addps   xmm0, xmm5
0x914E64: addps   xmm0, xmm2
0x914E67: movaps  [esp+10h+var_10], xmm0
0x914E6B: fld     dword ptr [esp+10h+var_10+8]
0x914E6F: fcomp   dword ptr [esp+10h+var_10+4]
0x914E73: fnstsw  ax
0x914E75: test    ah, 41h
0x914E78: jnz     short loc_914E85
0x914E7A: fld     dword ptr [esp+10h+var_10+8]
0x914E7E: mov     edx, 20h ; ' '
0x914E83: jmp     short loc_914E8E
0x914E85: fld     dword ptr [esp+10h+var_10+4]
0x914E89: mov     edx, 10h
0x914E8E: fld     dword ptr [esp+10h+var_10]
0x914E91: fcomp   st(1)
0x914E93: fnstsw  ax
0x914E95: fstp    st
0x914E97: test    ah, 41h
0x914E9A: jnz     short loc_914E9E
0x914E9C: xor     edx, edx
0x914E9E: movaps  xmm0, xmmword ptr [edx+ecx+10h]
0x914EA3: mov     eax, [ebp+arg_4]
0x914EA6: or      edx, 3F000000h
0x914EAC: movaps  xmmword ptr [eax], xmm0
0x914EAF: mov     [eax+0Ch], edx
0x914EB2: mov     esp, ebp
0x914EB4: pop     ebp
0x914EB5: retn    8
