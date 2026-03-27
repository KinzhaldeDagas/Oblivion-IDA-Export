0x539980: push    ebp
0x539981: mov     ebp, esp
0x539983: and     esp, 0FFFFFFF0h
0x539986: mov     eax, ecx
0x539988: mov     ecx, [ebp+arg_0]
0x53998B: movaps  xmm0, xmmword ptr [ecx]
0x53998E: movaps  xmmword ptr [eax], xmm0
0x539991: movaps  xmm0, xmmword ptr [ecx+10h]
0x539995: movaps  xmmword ptr [eax+10h], xmm0
0x539999: movaps  xmm0, xmmword ptr [ecx+20h]
0x53999D: movaps  xmmword ptr [eax+20h], xmm0
0x5399A1: movaps  xmm0, xmmword ptr [ecx+30h]
0x5399A5: movaps  xmmword ptr [eax+30h], xmm0
0x5399A9: mov     esp, ebp
0x5399AB: pop     ebp
0x5399AC: retn    4
