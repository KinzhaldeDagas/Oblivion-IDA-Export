0x89DBD0: push    ebp
0x89DBD1: mov     ebp, esp
0x89DBD3: and     esp, 0FFFFFFF0h
0x89DBD6: sub     esp, 10h
0x89DBD9: mov     eax, [ecx+0C0h]
0x89DBDF: mov     edx, [ebp+arg_0]
0x89DBE2: movaps  xmm1, xmmword ptr [edx]
0x89DBE5: mov     [esp+10h+var_4], eax
0x89DBE9: movss   xmm0, [esp+10h+var_4]
0x89DBEF: movaps  xmm2, xmm0
0x89DBF2: shufps  xmm2, xmm0, 0
0x89DBF6: movaps  xmm0, xmmword ptr [ecx+0D0h]
0x89DBFD: mulps   xmm2, xmm1
0x89DC00: addps   xmm0, xmm2
0x89DC03: movaps  xmmword ptr [ecx+0D0h], xmm0
0x89DC0A: mov     esp, ebp
0x89DC0C: pop     ebp
0x89DC0D: retn    4
