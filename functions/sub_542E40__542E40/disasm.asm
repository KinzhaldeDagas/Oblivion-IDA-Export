0x542E40: mov     eax, ds:0B365C4h
0x542E45: test    eax, eax
0x542E47: jz      short locret_542E68
0x542E49: cmp     dword ptr [eax+28h], 0
0x542E4D: jz      short locret_542E68
0x542E4F: cmp     [esp+arg_0], 0
0x542E54: mov     eax, [eax+28h]
0x542E57: mov     eax, [eax+4]
0x542E5A: jz      short loc_542E62
0x542E5C: or      word ptr [eax+18h], 20h
0x542E61: retn
0x542E62: and     word ptr [eax+18h], 0FFDFh
0x542E68: retn
