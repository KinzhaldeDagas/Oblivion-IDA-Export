0x46B9F0: mov     eax, [ecx+8]
0x46B9F3: shr     eax, 0Eh
0x46B9F6: test    al, 1
0x46B9F8: jnz     short locret_46BA0C
0x46B9FA: mov     ecx, ds:0B33C18h
0x46BA00: mov     edx, ds:0B33C14h
0x46BA06: add     ecx, 0FFFFFFECh
0x46BA09: mov     [edx+4], ecx
0x46BA0C: retn
