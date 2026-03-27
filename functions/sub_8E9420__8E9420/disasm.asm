0x8E9420: push    ebp
0x8E9421: mov     ebp, esp
0x8E9423: and     esp, 0FFFFFFF0h
0x8E9426: sub     esp, 10h
0x8E9429: mov     eax, [ecx+0C0h]
0x8E942F: mov     edx, [ebp+arg_4]
0x8E9432: mov     [esp+10h+var_4], eax
0x8E9436: movss   xmm0, [esp+10h+var_4]
0x8E943C: mov     eax, [ebp+arg_0]
0x8E943F: movaps  xmm1, xmmword ptr [eax]
0x8E9442: movaps  xmm2, xmm0
0x8E9445: shufps  xmm2, xmm0, 0
0x8E9449: movaps  xmm0, xmmword ptr [ecx+0D0h]
0x8E9450: mulps   xmm2, xmm1
0x8E9453: addps   xmm0, xmm2
0x8E9456: movaps  xmmword ptr [ecx+0D0h], xmm0
0x8E945D: movaps  xmm1, xmmword ptr [ecx+60h]
0x8E9461: movaps  xmm0, xmmword ptr [edx]
0x8E9464: mov     edx, [ecx+0C4h]
0x8E946A: subps   xmm0, xmm1
0x8E946D: movaps  xmm1, xmmword ptr [eax]
0x8E9470: movaps  xmm3, xmm1
0x8E9473: shufps  xmm3, xmm1, 0C9h ; 'É'
0x8E9477: movaps  xmm4, xmm0
0x8E947A: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x8E947E: mulps   xmm4, xmm3
0x8E9481: movaps  xmm3, xmm1
0x8E9484: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x8E9488: movaps  xmm1, xmm0
0x8E948B: shufps  xmm1, xmm0, 0C9h ; 'É'
0x8E948F: mov     [esp+10h+var_4], edx
0x8E9493: movss   xmm2, [esp+10h+var_4]
0x8E9499: mulps   xmm1, xmm3
0x8E949C: subps   xmm1, xmm4
0x8E949F: movaps  xmm0, xmm2
0x8E94A2: shufps  xmm0, xmm2, 0
0x8E94A6: mulps   xmm0, xmm1
0x8E94A9: movaps  xmm1, xmmword ptr [ecx+0E0h]
0x8E94B0: addps   xmm1, xmm0
0x8E94B3: movaps  xmmword ptr [ecx+0E0h], xmm1
0x8E94BA: mov     esp, ebp
0x8E94BC: pop     ebp
0x8E94BD: retn    8
