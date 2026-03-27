0x8A6300: push    esi
0x8A6301: mov     esi, [ecx+0B0h]
0x8A6307: xor     eax, eax
0x8A6309: test    esi, esi
0x8A630B: push    edi
0x8A630C: jle     short loc_8A6324
0x8A630E: mov     edx, [ecx+0ACh]
0x8A6314: mov     edi, [esp+8+arg_0]
0x8A6318: cmp     [edx], edi
0x8A631A: jz      short loc_8A6339
0x8A631C: inc     eax
0x8A631D: add     edx, 4
0x8A6320: cmp     eax, esi
0x8A6322: jl      short loc_8A6318
0x8A6324: mov     edx, [ecx+0ACh]
0x8A632A: pop     edi
0x8A632B: or      eax, 0FFFFFFFFh
0x8A632E: pop     esi
0x8A632F: mov     dword ptr [edx+eax*4], 0
0x8A6336: retn    4
0x8A6339: mov     ecx, [ecx+0ACh]
0x8A633F: pop     edi
0x8A6340: pop     esi
0x8A6341: mov     dword ptr [ecx+eax*4], 0
0x8A6348: retn    4
