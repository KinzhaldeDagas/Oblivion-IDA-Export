0x533CE0: cmp     dword ptr [ecx+8], 0
0x533CE4: jz      short loc_533CF0
0x533CE6: mov     ecx, [ecx+8]
0x533CE9: mov     eax, [ecx]
0x533CEB: mov     edx, [eax+1Ch]
0x533CEE: jmp     edx
0x533CF0: or      eax, 0FFFFFFFFh
0x533CF3: retn
