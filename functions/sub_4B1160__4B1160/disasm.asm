0x4B1160: xor     al, al
0x4B1162: mov     ecx, 1
0x4B1167: cmp     ds:0B08138h, cl
0x4B116D: mov     ds:0B35AC0h, al
0x4B1172: jnz     short loc_4B117B
0x4B1174: mov     al, cl
0x4B1176: mov     ds:0B35AC0h, al
0x4B117B: cmp     ds:0B08140h, cl
0x4B1181: jnz     short loc_4B118A
0x4B1183: or      al, 2
0x4B1185: mov     ds:0B35AC0h, al
0x4B118A: cmp     ds:0B08148h, cl
0x4B1190: jnz     short loc_4B1199
0x4B1192: or      al, 4
0x4B1194: mov     ds:0B35AC0h, al
0x4B1199: test    al, al
0x4B119B: jnz     short loc_4B11A4
0x4B119D: mov     byte ptr ds:0B35AC0h, 4
0x4B11A4: mov     eax, ds:0B08158h
0x4B11A9: test    eax, eax
0x4B11AB: jz      short loc_4B11BC
0x4B11AD: cmp     eax, ecx
0x4B11AF: jz      short loc_4B11BC
0x4B11B1: cmp     eax, 2
0x4B11B4: jz      short loc_4B11BC
0x4B11B6: mov     ds:0B08158h, ecx
0x4B11BC: mov     eax, ds:0B08160h
0x4B11C1: test    eax, eax
0x4B11C3: jz      short loc_4B11D8
0x4B11C5: cmp     eax, ecx
0x4B11C7: jz      short loc_4B11D8
0x4B11C9: cmp     eax, 2
0x4B11CC: jz      short loc_4B11D8
0x4B11CE: mov     dword ptr ds:0B08160h, 2
0x4B11D8: fldz
0x4B11DA: fcom    dword ptr ds:0B08188h
0x4B11E0: fnstsw  ax
0x4B11E2: fld1
0x4B11E4: test    ah, 44h
0x4B11E7: jp      short loc_4B11EF
0x4B11E9: fst     dword ptr ds:0B08188h
0x4B11EF: fxch    st(1)
0x4B11F1: fcomp   dword ptr ds:0B08190h
0x4B11F7: fnstsw  ax
0x4B11F9: mov     al, cl
0x4B11FB: test    ah, 44h
0x4B11FE: jp      short loc_4B1207
0x4B1200: fstp    dword ptr ds:0B08190h
0x4B1206: retn
0x4B1207: fstp    st
0x4B1209: retn
