0x415760: mov     eax, [ecx+0A4h]
0x415766: test    eax, eax
0x415768: jge     short loc_415774
0x41576A: add     eax, 1
0x41576D: mov     [ecx+0A4h], eax
0x415773: retn
0x415774: jle     short locret_41577F
0x415776: add     eax, 0FFFFFFFFh
0x415779: mov     [ecx+0A4h], eax
0x41577F: retn
