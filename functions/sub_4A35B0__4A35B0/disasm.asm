0x4A35B0: mov     eax, [esp+arg_0]
0x4A35B4: test    eax, eax
0x4A35B6: jnz     short loc_4A35BD
0x4A35B8: xor     al, al
0x4A35BA: retn    4
0x4A35BD: mov     dl, [eax+4]
0x4A35C0: mov     [ecx+4], dl
0x4A35C3: mov     al, [eax+5]
0x4A35C6: cmp     al, 64h ; 'd'
0x4A35C8: ja      short loc_4A35CD
0x4A35CA: mov     [ecx+6], al
0x4A35CD: mov     al, 1
0x4A35CF: retn    4
