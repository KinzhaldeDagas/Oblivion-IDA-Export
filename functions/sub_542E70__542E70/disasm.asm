0x542E70: mov     eax, ds:0B365C4h
0x542E75: test    eax, eax
0x542E77: jz      short locret_542E9C
0x542E79: cmp     dword ptr [eax+28h], 0
0x542E7D: jz      short locret_542E9C
0x542E7F: mov     eax, [eax+28h]
0x542E82: mov     eax, [eax+0Ch]
0x542E85: test    eax, eax
0x542E87: jz      short locret_542E9C
0x542E89: cmp     [esp+arg_0], 0
0x542E8E: jz      short loc_542E96
0x542E90: or      word ptr [eax+18h], 20h
0x542E95: retn
0x542E96: and     word ptr [eax+18h], 0FFDFh
0x542E9C: retn
