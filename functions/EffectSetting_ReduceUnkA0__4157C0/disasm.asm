0x4157C0: mov     eax, [ecx+0A0h]
0x4157C6: test    eax, eax
0x4157C8: jge     short loc_4157D4
0x4157CA: add     eax, 1
0x4157CD: mov     [ecx+0A0h], eax
0x4157D3: retn
0x4157D4: jle     short locret_4157DF
0x4157D6: add     eax, 0FFFFFFFFh
0x4157D9: mov     [ecx+0A0h], eax
0x4157DF: retn
