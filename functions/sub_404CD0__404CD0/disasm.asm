0x404CD0: cmp     [esp+arg_0], 0
0x404CD5: jz      short loc_404CDF
0x404CD7: or      word ptr [ecx+18h], 1
0x404CDC: retn    4
0x404CDF: and     word ptr [ecx+18h], 0FFFEh
0x404CE5: retn    4
