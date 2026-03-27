0x483320: mov     eax, ds:0B06A2Ch
0x483325: cmp     eax, 5
0x483328: jnb     short loc_483335
0x48332A: mov     dword ptr ds:0B06A2Ch, 5
0x483334: retn
0x483335: test    al, 1
0x483337: jnz     short locret_483341
0x483339: add     eax, 1
0x48333C: mov     ds:0B06A2Ch, eax
0x483341: retn
