0x4CA6C0: mov     al, [ecx+24h]
0x4CA6C3: xor     dl, dl
0x4CA6C5: test    al, 4
0x4CA6C7: jz      short loc_4CA6CB
0x4CA6C9: mov     dl, 1
0x4CA6CB: and     al, 1
0x4CA6CD: jz      short loc_4CA6D4
0x4CA6CF: test    dl, dl
0x4CA6D1: setz    dl
0x4CA6D4: test    dl, dl
0x4CA6D6: jz      short loc_4CA6DB
0x4CA6D8: mov     al, 1
0x4CA6DA: retn
0x4CA6DB: test    al, al
0x4CA6DD: jnz     short loc_4CA6EB
0x4CA6DF: mov     ecx, [ecx+50h]
0x4CA6E2: test    ecx, ecx
0x4CA6E4: jz      short loc_4CA6EB
0x4CA6E6: jmp     sub_4EF140
0x4CA6EB: xor     al, al
0x4CA6ED: retn
