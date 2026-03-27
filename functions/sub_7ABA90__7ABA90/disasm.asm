0x7ABA90: mov     eax, [ecx+5Ch]
0x7ABA93: sub     eax, 1
0x7ABA96: mov     edx, 0
0x7ABA9B: sets    dl
0x7ABA9E: sub     edx, 1
0x7ABAA1: and     eax, edx
0x7ABAA3: test    eax, eax
0x7ABAA5: mov     [ecx+5Ch], eax
0x7ABAA8: jg      short locret_7ABAB1
0x7ABAAA: mov     dword ptr [ecx+60h], 0
0x7ABAB1: retn
