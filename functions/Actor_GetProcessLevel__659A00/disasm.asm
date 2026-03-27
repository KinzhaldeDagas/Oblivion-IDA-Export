0x659A00: cmp     dword ptr [ecx+58h], 0
0x659A04: jz      short loc_659A10
0x659A06: mov     ecx, [ecx+58h]
0x659A09: mov     eax, [ecx]
0x659A0B: mov     edx, [eax+8]
0x659A0E: jmp     edx
0x659A10: or      eax, 0FFFFFFFFh
0x659A13: retn
