0x8EA180: push    ebp
0x8EA181: mov     ebp, esp
0x8EA183: mov     eax, [ebp+arg_0]
0x8EA186: xorps   xmm0, xmm0
0x8EA189: movaps  xmmword ptr [eax], xmm0
0x8EA18C: movaps  xmmword ptr [eax+10h], xmm0
0x8EA190: and     esp, 0FFFFFFF0h
0x8EA193: movaps  xmmword ptr [eax+20h], xmm0
0x8EA197: mov     esp, ebp
0x8EA199: pop     ebp
0x8EA19A: retn    4
