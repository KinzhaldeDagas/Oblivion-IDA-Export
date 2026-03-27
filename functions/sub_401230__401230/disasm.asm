0x401230: mov     eax, [esp+arg_0]
0x401234: cmp     eax, 1000h
0x401239: jle     short loc_401241
0x40123B: or      eax, 0FFFFFFFFh
0x40123E: retn    4
0x401241: sub     eax, [ecx+4]
0x401244: cdq
0x401245: and     edx, 0FFh
0x40124B: add     eax, edx
0x40124D: sar     eax, 8
0x401250: retn    4
