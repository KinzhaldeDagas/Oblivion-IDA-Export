0x8ED480: push    ebp
0x8ED481: mov     ebp, esp
0x8ED483: mov     eax, [ebp+arg_0]
0x8ED486: xorps   xmm0, xmm0
0x8ED489: and     esp, 0FFFFFFF0h
0x8ED48C: movaps  xmmword ptr [eax], xmm0
0x8ED48F: mov     esp, ebp
0x8ED491: pop     ebp
0x8ED492: retn    4
