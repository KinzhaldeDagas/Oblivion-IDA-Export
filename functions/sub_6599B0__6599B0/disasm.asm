0x6599B0: cmp     dword ptr [ecx+58h], 0
0x6599B4: jz      short loc_6599C0
0x6599B6: mov     ecx, [ecx+58h]
0x6599B9: mov     eax, [ecx]
0x6599BB: mov     edx, [eax+28h]
0x6599BE: jmp     edx
0x6599C0: fld     dword ptr ds:0A30634h
0x6599C6: retn
