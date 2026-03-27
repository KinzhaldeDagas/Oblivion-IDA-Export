0x404E90: cmp     byte ptr [ecx+0Eh], 1
0x404E94: mov     al, [esp+arg_0]
0x404E98: jnz     short loc_404EA4
0x404E9A: cmp     al, [ecx+0Fh]
0x404E9D: jnz     short loc_404EA4
0x404E9F: fld1
0x404EA1: retn    4
0x404EA4: mov     ecx, [ecx+14h]
0x404EA7: movzx   eax, al
0x404EAA: lea     eax, [eax+eax*2]
0x404EAD: fld     dword ptr [ecx+eax*8+10h]
0x404EB1: retn    4
