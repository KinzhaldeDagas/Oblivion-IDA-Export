0x612910: cmp     [esp+arg_4], 0
0x612915: jz      short loc_612924
0x612917: mov     eax, [esp+arg_0]
0x61291B: not     eax
0x61291D: and     [ecx+2], ax
0x612921: retn    8
0x612924: mov     dx, word ptr [esp+arg_0]
0x612929: or      [ecx+2], dx
0x61292D: retn    8
