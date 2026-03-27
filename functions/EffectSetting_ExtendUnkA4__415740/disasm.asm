0x415740: mov     eax, [ecx+0A4h]
0x415746: test    eax, eax
0x415748: jge     short loc_415754
0x41574A: add     eax, 0FFFFFFFFh
0x41574D: mov     [ecx+0A4h], eax
0x415753: retn
0x415754: add     eax, 1
0x415757: mov     [ecx+0A4h], eax
0x41575D: retn
