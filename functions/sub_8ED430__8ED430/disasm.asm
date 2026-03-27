0x8ED430: push    ebp
0x8ED431: mov     ebp, esp
0x8ED433: mov     eax, [ebp+arg_4]
0x8ED436: xorps   xmm0, xmm0
0x8ED439: and     esp, 0FFFFFFF0h
0x8ED43C: movaps  xmmword ptr [eax], xmm0
0x8ED43F: mov     esp, ebp
0x8ED441: pop     ebp
0x8ED442: retn    8
