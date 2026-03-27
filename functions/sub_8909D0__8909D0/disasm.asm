0x8909D0: push    ebp
0x8909D1: mov     ebp, esp
0x8909D3: and     esp, 0FFFFFFF0h
0x8909D6: mov     eax, ecx
0x8909D8: mov     ecx, [ebp+arg_0]
0x8909DB: movaps  xmm0, xmmword ptr [ecx]
0x8909DE: movaps  xmmword ptr [eax], xmm0
0x8909E1: movaps  xmm0, xmmword ptr [ecx+10h]
0x8909E5: movaps  xmmword ptr [eax+10h], xmm0
0x8909E9: fld     dword ptr [ecx+20h]
0x8909EC: fstp    dword ptr [eax+20h]
0x8909EF: fld     dword ptr [ecx+24h]
0x8909F2: fstp    dword ptr [eax+24h]
0x8909F5: fld     dword ptr [ecx+28h]
0x8909F8: fstp    dword ptr [eax+28h]
0x8909FB: fld     dword ptr [ecx+2Ch]
0x8909FE: fstp    dword ptr [eax+2Ch]
0x890A01: mov     ecx, [ecx+30h]
0x890A04: mov     [eax+30h], ecx
0x890A07: mov     esp, ebp
0x890A09: pop     ebp
0x890A0A: retn    4
