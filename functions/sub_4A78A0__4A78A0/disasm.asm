0x4A78A0: cmp     [esp+arg_0], 0
0x4A78A5: jz      short loc_4A78AD
0x4A78A7: cmp     dword ptr [ecx+24h], 3
0x4A78AB: jb      short loc_4A78B8
0x4A78AD: push    1
0x4A78AF: call    sub_4A7270
0x4A78B4: test    al, al
0x4A78B6: jz      short loc_4A78BD
0x4A78B8: xor     al, al
0x4A78BA: retn    4
0x4A78BD: mov     al, 1
0x4A78BF: retn    4
