0x4031E0: mov     edx, dword ptr [esp+a2]
0x4031E4: push    edi
0x4031E5: xor     edi, edi
0x4031E7: cmp     edx, 8
0x4031EA: jz      loc_403297
0x4031F0: cmp     edx, 9
0x4031F3: jz      loc_4032A8
0x4031F9: test    edx, edx
0x4031FB: jnz     short loc_40320C
0x4031FD: cmp     [ecx+1B48h], edi
0x403203: jz      short loc_40321B
0x403205: mov     edx, 1
0x40320A: jmp     short loc_40321B
0x40320C: cmp     edx, 1
0x40320F: jnz     short loc_40321B
0x403211: cmp     [ecx+1B48h], edi
0x403217: jz      short loc_40321B
0x403219: xor     edx, edx
0x40321B: push    esi
0x40321C: mov     esi, dword ptr [esp+8+a3]
0x403220: cmp     esi, 4; switch 5 cases
0x403223: ja      short def_403225; jumptable 00403225 default case
0x403225: jmp     ds:jpt_403225[esi*4]; switch jump
0x40322C: test    byte ptr [edx+ecx+1B2Ch], 80h; jumptable 00403225 case 0
0x403234: jmp     short loc_403289
0x403236: test    byte ptr [edx+ecx+1B40h], 80h; jumptable 00403225 case 1
0x40323E: jnz     short def_403225; jumptable 00403225 default case
0x403240: test    byte ptr [edx+ecx+1B2Ch], 80h
0x403248: jmp     short loc_403289
0x40324A: test    byte ptr [edx+ecx+1B2Ch], 80h; jumptable 00403225 case 2
0x403252: jnz     short def_403225; jumptable 00403225 default case
0x403254: test    byte ptr [edx+ecx+1B40h], 80h
0x40325C: jmp     short loc_403289
0x40325E: mov     al, [edx+ecx+1B40h]; jumptable 00403225 case 3
0x403265: xor     al, [edx+ecx+1B2Ch]
0x40326C: test    al, al
0x40326E: jns     short def_403225; jumptable 00403225 default case
0x403270: mov     edi, 1
0x403275: pop     esi
0x403276: mov     eax, edi
0x403278: pop     edi
0x403279: retn    8
0x40327C: cmp     edx, 7; jumptable 00403225 case 4
0x40327F: ja      short def_403225; jumptable 00403225 default case
0x403281: cmp     byte ptr [edx+ecx+1B50h], 0
0x403289: jz      short def_403225; jumptable 00403225 default case
0x40328B: mov     edi, 1
0x403290: pop     esi; jumptable 00403225 default case
0x403291: mov     eax, edi
0x403293: pop     edi
0x403294: retn    8
0x403297: cmp     [ecx+1B28h], edi
0x40329D: jle     short loc_4032B0
0x40329F: mov     eax, 1
0x4032A4: pop     edi
0x4032A5: retn    8
0x4032A8: cmp     [ecx+1B28h], edi
0x4032AE: jl      short loc_40329F
0x4032B0: xor     eax, eax
0x4032B2: pop     edi
0x4032B3: retn    8
