0x8F3FA0: push    ebp
0x8F3FA1: mov     ebp, esp
0x8F3FA3: and     esp, 0FFFFFFF0h
0x8F3FA6: sub     esp, 0Ch
0x8F3FA9: mov     eax, [ebp+arg_0]
0x8F3FAC: mov     eax, [eax]
0x8F3FAE: push    esi
0x8F3FAF: mov     esi, [ecx]
0x8F3FB1: shl     esi, 4
0x8F3FB4: movaps  xmm2, xmmword ptr [esi+eax]
0x8F3FB8: mov     esi, [ecx+4]
0x8F3FBB: mov     ecx, [ecx+8]
0x8F3FBE: shl     esi, 4
0x8F3FC1: movaps  xmm0, xmmword ptr [esi+eax]
0x8F3FC5: subps   xmm0, xmm2
0x8F3FC8: shl     ecx, 4
0x8F3FCB: movaps  xmm1, xmmword ptr [ecx+eax]
0x8F3FCF: subps   xmm1, xmm2
0x8F3FD2: movaps  xmm3, xmm1
0x8F3FD5: shufps  xmm3, xmm1, 0C9h ; 'É'
0x8F3FD9: movaps  xmm4, xmm0
0x8F3FDC: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x8F3FE0: mulps   xmm4, xmm3
0x8F3FE3: movaps  xmm3, xmm1
0x8F3FE6: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x8F3FEA: movaps  xmm1, xmm0
0x8F3FED: shufps  xmm1, xmm0, 0C9h ; 'É'
0x8F3FF1: mulps   xmm1, xmm3
0x8F3FF4: movaps  xmm0, xmm1
0x8F3FF7: subps   xmm0, xmm4
0x8F3FFA: mulps   xmm0, xmm2
0x8F3FFD: movaps  xmm1, xmm0
0x8F4000: shufps  xmm1, xmm0, 55h ; 'U'
0x8F4004: movaps  xmm2, xmm0
0x8F4007: lea     eax, [esp+10h+var_4]
0x8F400B: addss   xmm1, xmm0
0x8F400F: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F4013: addss   xmm2, xmm1
0x8F4017: movss   dword ptr [eax], xmm2
0x8F401B: fld     [esp+10h+var_4]
0x8F401F: fcomp   dword ptr ds:0A2FAA8h
0x8F4025: fnstsw  ax
0x8F4027: test    ah, 41h
0x8F402A: jnz     short loc_8F4037
0x8F402C: mov     al, 1
0x8F402E: mov     [edx], al
0x8F4030: mov     eax, edx
0x8F4032: pop     esi
0x8F4033: mov     esp, ebp
0x8F4035: pop     ebp
0x8F4036: retn
0x8F4037: xor     al, al
0x8F4039: mov     [edx], al
0x8F403B: mov     eax, edx
0x8F403D: pop     esi
0x8F403E: mov     esp, ebp
0x8F4040: pop     ebp
0x8F4041: retn
