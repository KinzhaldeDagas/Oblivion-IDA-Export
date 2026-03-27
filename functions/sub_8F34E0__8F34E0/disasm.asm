0x8F34E0: push    ebp
0x8F34E1: mov     ebp, esp
0x8F34E3: and     esp, 0FFFFFFF0h
0x8F34E6: sub     esp, 10h
0x8F34E9: movaps  xmm2, xmmword ptr [ecx+20h]
0x8F34ED: movaps  xmm1, xmmword ptr [ecx+10h]
0x8F34F1: mov     eax, [ebp+arg_0]
0x8F34F4: movaps  xmm3, xmmword ptr [eax]
0x8F34F7: movaps  xmm0, xmm2
0x8F34FA: subps   xmm0, xmm1
0x8F34FD: mulps   xmm0, xmm3
0x8F3500: movaps  xmm3, xmm0
0x8F3503: shufps  xmm3, xmm0, 55h ; 'U'
0x8F3507: movaps  xmm4, xmm0
0x8F350A: lea     ecx, [esp+10h+var_4]
0x8F350E: addss   xmm3, xmm0
0x8F3512: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8F3516: addss   xmm4, xmm3
0x8F351A: movss   dword ptr [ecx], xmm4
0x8F351E: fld     [esp+10h+var_4]
0x8F3522: fcomp   dword ptr ds:0A2FAA8h
0x8F3528: mov     ecx, [ebp+arg_4]
0x8F352B: fnstsw  ax
0x8F352D: test    ah, 5
0x8F3530: jp      short loc_8F3545
0x8F3532: xor     eax, eax
0x8F3534: or      eax, 3F000000h
0x8F3539: movaps  xmmword ptr [ecx], xmm1
0x8F353C: mov     [ecx+0Ch], eax
0x8F353F: mov     esp, ebp
0x8F3541: pop     ebp
0x8F3542: retn    8
0x8F3545: mov     eax, 10h
0x8F354A: or      eax, 3F000000h
0x8F354F: movaps  xmmword ptr [ecx], xmm2
0x8F3552: mov     [ecx+0Ch], eax
0x8F3555: mov     esp, ebp
0x8F3557: pop     ebp
0x8F3558: retn    8
