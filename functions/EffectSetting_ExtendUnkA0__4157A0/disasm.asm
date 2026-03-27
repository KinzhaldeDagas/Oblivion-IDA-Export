0x4157A0: mov     eax, [ecx+0A0h]
0x4157A6: test    eax, eax
0x4157A8: jge     short loc_4157B4
0x4157AA: add     eax, 0FFFFFFFFh
0x4157AD: mov     [ecx+0A0h], eax
0x4157B3: retn
0x4157B4: add     eax, 1
0x4157B7: mov     [ecx+0A0h], eax
0x4157BD: retn
