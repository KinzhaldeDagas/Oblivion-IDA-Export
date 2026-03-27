0x8E93E0: push    ebp
0x8E93E1: mov     ebp, esp
0x8E93E3: fld     dword ptr [ecx+0C4h]
0x8E93E9: mov     eax, [ebp+arg_0]
0x8E93EC: fld     dword ptr [ecx+0C4h]
0x8E93F2: xorps   xmm0, xmm0
0x8E93F5: fld     dword ptr [ecx+0C4h]
0x8E93FB: movaps  xmmword ptr [eax], xmm0
0x8E93FE: movaps  xmmword ptr [eax+10h], xmm0
0x8E9402: movaps  xmmword ptr [eax+20h], xmm0
0x8E9406: fstp    dword ptr [eax]
0x8E9408: and     esp, 0FFFFFFF0h
0x8E940B: fstp    dword ptr [eax+14h]
0x8E940E: fstp    dword ptr [eax+28h]
0x8E9411: mov     esp, ebp
0x8E9413: pop     ebp
0x8E9414: retn    4
