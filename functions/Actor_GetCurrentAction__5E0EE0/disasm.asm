0x5E0EE0: cmp     dword ptr [ecx+58h], 0
0x5E0EE4: jz      short loc_5E0EF3
0x5E0EE6: mov     ecx, [ecx+58h]
0x5E0EE9: mov     eax, [ecx]
0x5E0EEB: mov     edx, [eax+2D0h]
0x5E0EF1: jmp     edx
0x5E0EF3: or      eax, 0FFFFFFFFh
0x5E0EF6: retn
