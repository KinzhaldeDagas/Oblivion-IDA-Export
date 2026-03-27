0x6DA2D0: cmp     dword ptr [ecx+18h], 0
0x6DA2D4: jz      short loc_6DA2DB
0x6DA2D6: xor     al, al
0x6DA2D8: retn    4
0x6DA2DB: fld     dword ptr [ecx+0Ch]
0x6DA2DE: fld     dword ptr ds:0B24FC8h
0x6DA2E4: fucompp
0x6DA2E6: fnstsw  ax
0x6DA2E8: test    ah, 44h
0x6DA2EB: jp      short loc_6DA311
0x6DA2ED: fld     dword ptr [ecx+10h]
0x6DA2F0: fld     dword ptr ds:0B24FCCh
0x6DA2F6: fucompp
0x6DA2F8: fnstsw  ax
0x6DA2FA: test    ah, 44h
0x6DA2FD: jp      short loc_6DA311
0x6DA2FF: fld     dword ptr [ecx+14h]
0x6DA302: fld     dword ptr ds:0B24FD0h
0x6DA308: fucompp
0x6DA30A: fnstsw  ax
0x6DA30C: test    ah, 44h
0x6DA30F: jnp     short loc_6DA2D6
0x6DA311: mov     al, 1
0x6DA313: retn    4
