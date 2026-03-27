0x8E94C0: push    ebp
0x8E94C1: mov     ebp, esp
0x8E94C3: and     esp, 0FFFFFFF0h
0x8E94C6: sub     esp, 10h
0x8E94C9: mov     eax, [ecx+0C4h]
0x8E94CF: mov     edx, [ebp+arg_0]
0x8E94D2: movaps  xmm1, xmmword ptr [edx]
0x8E94D5: mov     [esp+10h+var_4], eax
0x8E94D9: movss   xmm0, [esp+10h+var_4]
0x8E94DF: movaps  xmm2, xmm0
0x8E94E2: shufps  xmm2, xmm0, 0
0x8E94E6: movaps  xmm0, xmmword ptr [ecx+0E0h]
0x8E94ED: mulps   xmm2, xmm1
0x8E94F0: addps   xmm0, xmm2
0x8E94F3: movaps  xmmword ptr [ecx+0E0h], xmm0
0x8E94FA: mov     esp, ebp
0x8E94FC: pop     ebp
0x8E94FD: retn    4
