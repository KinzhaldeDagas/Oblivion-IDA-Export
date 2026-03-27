0x471730: cmp     dword ptr [ecx+0B8h], 0
0x471737: jnz     short loc_471751
0x471739: cmp     dword ptr [ecx+0B4h], 0
0x471740: jnz     short loc_471751
0x471742: mov     eax, 1
0x471747: xor     ecx, ecx
0x471749: test    al, al
0x47174B: setz    cl
0x47174E: mov     al, cl
0x471750: retn
0x471751: xor     eax, eax
0x471753: xor     ecx, ecx
0x471755: test    al, al
0x471757: setz    cl
0x47175A: mov     al, cl
0x47175C: retn
