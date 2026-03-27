0x540F20: mov     eax, ds:0B365C4h
0x540F25: test    eax, eax
0x540F27: jz      short locret_540F4C
0x540F29: cmp     dword ptr [eax+34h], 0
0x540F2D: jz      short locret_540F4C
0x540F2F: mov     eax, [eax+34h]
0x540F32: mov     eax, [eax+14h]
0x540F35: test    eax, eax
0x540F37: jz      short locret_540F4C
0x540F39: cmp     [esp+arg_0], 0
0x540F3E: jz      short loc_540F46
0x540F40: or      word ptr [eax+18h], 20h
0x540F45: retn
0x540F46: and     word ptr [eax+18h], 0FFDFh
0x540F4C: retn
