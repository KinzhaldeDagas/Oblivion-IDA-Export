0x532210: push    ebp
0x532211: mov     ebp, esp
0x532213: and     esp, 0FFFFFFF0h
0x532216: mov     eax, ecx
0x532218: mov     ecx, [ebp+arg_0]
0x53221B: movaps  xmm0, xmmword ptr [ecx]
0x53221E: movaps  xmmword ptr [eax], xmm0
0x532221: movaps  xmm0, xmmword ptr [ecx+10h]
0x532225: movaps  xmmword ptr [eax+10h], xmm0
0x532229: mov     edx, [ecx+20h]
0x53222C: mov     [eax+20h], edx
0x53222F: mov     edx, [ecx+24h]
0x532232: mov     [eax+24h], edx
0x532235: mov     edx, [ecx+28h]
0x532238: mov     [eax+28h], edx
0x53223B: mov     ecx, [ecx+2Ch]
0x53223E: mov     [eax+2Ch], ecx
0x532241: mov     esp, ebp
0x532243: pop     ebp
0x532244: retn    4
