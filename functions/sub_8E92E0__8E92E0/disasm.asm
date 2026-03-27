0x8E92E0: push    ebp
0x8E92E1: mov     ebp, esp
0x8E92E3: fld     dword ptr ds:0A2F948h
0x8E92E9: mov     eax, [ebp+arg_0]
0x8E92EC: fdiv    dword ptr [ecx+0C4h]
0x8E92F2: xorps   xmm0, xmm0
0x8E92F5: movaps  xmmword ptr [eax], xmm0
0x8E92F8: movaps  xmmword ptr [eax+10h], xmm0
0x8E92FC: movaps  xmmword ptr [eax+20h], xmm0
0x8E9300: and     esp, 0FFFFFFF0h
0x8E9303: fst     dword ptr [eax]
0x8E9305: fst     dword ptr [eax+14h]
0x8E9308: fstp    dword ptr [eax+28h]
0x8E930B: mov     esp, ebp
0x8E930D: pop     ebp
0x8E930E: retn    4
