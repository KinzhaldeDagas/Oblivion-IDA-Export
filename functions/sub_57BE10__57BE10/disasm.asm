0x57BE10: mov     ecx, ds:0B33B00h
0x57BE16: cmp     byte ptr [ecx+7Ch], 5Dh ; ']'
0x57BE1A: mov     eax, 8
0x57BE1F: jb      short locret_57BE26
0x57BE21: mov     eax, 9
0x57BE26: retn
