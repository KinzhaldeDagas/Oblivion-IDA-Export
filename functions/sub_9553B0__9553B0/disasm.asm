0x9553B0: mov     ecx, [esp+arg_0]
0x9553B4: fld     dword ptr [ecx]
0x9553B6: fcomp   dword ptr ds:0A2FAACh
0x9553BC: fnstsw  ax
0x9553BE: test    ah, 41h
0x9553C1: jnz     loc_95548C
0x9553C7: fld     dword ptr [ecx+8]
0x9553CA: xor     edx, edx
0x9553CC: fcomp   dword ptr ds:0A2FAACh
0x9553D2: fnstsw  ax
0x9553D4: test    ah, 41h
0x9553D7: jnz     short loc_955416
0x9553D9: fld     dword ptr [ecx+4]
0x9553DC: mov     edx, 5
0x9553E1: fcomp   dword ptr ds:0A2FAACh
0x9553E7: fnstsw  ax
0x9553E9: test    ah, 41h
0x9553EC: jnz     short loc_9553F8
0x9553EE: mov     edx, 9
0x9553F3: mov     eax, edx
0x9553F5: retn    4
0x9553F8: fld     dword ptr [ecx+4]
0x9553FB: fcomp   dword ptr ds:0A641B8h
0x955401: fnstsw  ax
0x955403: test    ah, 5
0x955406: jp      loc_9554DA
0x95540C: mov     edx, 0Bh
0x955411: mov     eax, edx
0x955413: retn    4
0x955416: fld     dword ptr [ecx+8]
0x955419: fcomp   dword ptr ds:0A641B8h
0x95541F: fld     dword ptr [ecx+4]
0x955422: fnstsw  ax
0x955424: fcomp   dword ptr ds:0A2FAACh
0x95542A: test    ah, 5
0x95542D: fnstsw  ax
0x95542F: jp      short loc_955463
0x955431: test    ah, 41h
0x955434: mov     edx, 6
0x955439: jnz     short loc_955445
0x95543B: mov     edx, 0Ah
0x955440: mov     eax, edx
0x955442: retn    4
0x955445: fld     dword ptr [ecx+4]
0x955448: fcomp   dword ptr ds:0A641B8h
0x95544E: fnstsw  ax
0x955450: test    ah, 5
0x955453: jp      loc_9554DA
0x955459: mov     edx, 0Ch
0x95545E: mov     eax, edx
0x955460: retn    4
0x955463: test    ah, 41h
0x955466: jnz     short loc_955472
0x955468: mov     edx, 7
0x95546D: mov     eax, edx
0x95546F: retn    4
0x955472: fld     dword ptr [ecx+4]
0x955475: fcomp   dword ptr ds:0A641B8h
0x95547B: fnstsw  ax
0x95547D: test    ah, 5
0x955480: jp      short loc_9554DA
0x955482: mov     edx, 8
0x955487: mov     eax, edx
0x955489: retn    4
0x95548C: fld     dword ptr [ecx+4]
0x95548F: fcomp   dword ptr ds:0A2FAACh
0x955495: fnstsw  ax
0x955497: test    ah, 41h
0x95549A: jnz     short loc_9554D5
0x95549C: fld     dword ptr [ecx+8]
0x95549F: mov     edx, 1
0x9554A4: fcomp   dword ptr ds:0A2FAACh
0x9554AA: fnstsw  ax
0x9554AC: test    ah, 41h
0x9554AF: jnz     short loc_9554BB
0x9554B1: mov     edx, 3
0x9554B6: mov     eax, edx
0x9554B8: retn    4
0x9554BB: fld     dword ptr [ecx+8]
0x9554BE: fcomp   dword ptr ds:0A641B8h
0x9554C4: fnstsw  ax
0x9554C6: test    ah, 5
0x9554C9: jp      short loc_9554DA
0x9554CB: mov     edx, 4
0x9554D0: mov     eax, edx
0x9554D2: retn    4
0x9554D5: mov     edx, 2
0x9554DA: mov     eax, edx
0x9554DC: retn    4
