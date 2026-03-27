0x441760: lea     eax, [ecx+0A0h]
0x441766: xor     edx, edx
0x441768: test    eax, eax
0x44176A: push    esi
0x44176B: jz      short loc_4417B8
0x44176D: mov     esi, [esp+4+arg_0]
0x441771: test    edx, edx
0x441773: jnz     short loc_441796
0x441775: mov     ecx, [eax+4]
0x441778: test    ecx, ecx
0x44177A: jnz     short loc_441780
0x44177C: cmp     [eax], ecx
0x44177E: jz      short loc_4417B8
0x441780: mov     eax, [eax]
0x441782: test    eax, eax
0x441784: jz      short loc_44178C
0x441786: cmp     [eax], esi
0x441788: jnz     short loc_44178C
0x44178A: mov     edx, eax
0x44178C: mov     eax, ecx
0x44178E: test    eax, eax
0x441790: jnz     short loc_441771
0x441792: test    edx, edx
0x441794: jz      short loc_4417B8
0x441796: mov     esi, [edx+4]
0x441799: test    esi, esi
0x44179B: jz      short loc_4417B8
0x44179D: xor     eax, eax
0x44179F: mov     ecx, esi
0x4417A1: mov     edx, [ecx]
0x4417A3: test    edx, edx
0x4417A5: jz      short loc_4417AD
0x4417A7: cmp     dword ptr [edx+4], 1
0x4417AB: jz      short loc_4417BE
0x4417AD: add     eax, 1
0x4417B0: add     ecx, 4
0x4417B3: cmp     eax, 5
0x4417B6: jl      short loc_4417A1
0x4417B8: xor     eax, eax
0x4417BA: pop     esi
0x4417BB: retn    4
0x4417BE: mov     eax, [esi+eax*4]
0x4417C1: pop     esi
0x4417C2: retn    4
