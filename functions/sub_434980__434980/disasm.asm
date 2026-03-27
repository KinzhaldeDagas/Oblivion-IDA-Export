0x434980: mov     edx, [esp+arg_0]
0x434984: xor     eax, eax
0x434986: cmp     [esp+arg_4], al
0x43498A: mov     [ecx+24h], eax
0x43498D: jz      short loc_434995
0x43498F: or      [ecx+1Ch], edx
0x434992: retn    8
0x434995: not     edx
0x434997: and     [ecx+1Ch], edx
0x43499A: retn    8
