0x56A300: mov     eax, [esp+arg_0]
0x56A304: cmp     eax, ds:0B3A4F8h
0x56A30A: jge     short loc_56A30F
0x56A30C: xor     eax, eax
0x56A30E: retn
0x56A30F: cmp     eax, ds:0B3A500h
0x56A315: jge     short loc_56A31D
0x56A317: mov     eax, 1
0x56A31C: retn
0x56A31D: cmp     eax, ds:0B3A508h
0x56A323: jge     short loc_56A32B
0x56A325: mov     eax, 2
0x56A32A: retn
0x56A32B: xor     ecx, ecx
0x56A32D: cmp     eax, ds:0B3A510h
0x56A333: setnl   cl
0x56A336: add     ecx, 3
0x56A339: mov     eax, ecx
0x56A33B: retn
