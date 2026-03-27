0x88A630: push    ebp
0x88A631: mov     ebp, esp
0x88A633: and     esp, 0FFFFFFF0h
0x88A636: mov     eax, ecx
0x88A638: mov     ecx, [ebp+arg_0]
0x88A63B: movaps  xmm0, xmmword ptr [ecx]
0x88A63E: movaps  xmmword ptr [eax], xmm0
0x88A641: mov     edx, [ecx+10h]
0x88A644: mov     [eax+10h], edx
0x88A647: fld     dword ptr [ecx+14h]
0x88A64A: fstp    dword ptr [eax+14h]
0x88A64D: mov     ecx, [ecx+20h]
0x88A650: mov     [eax+20h], ecx
0x88A653: mov     esp, ebp
0x88A655: pop     ebp
0x88A656: retn    4
