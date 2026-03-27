0x540EF0: mov     eax, ds:0B365C4h
0x540EF5: test    eax, eax
0x540EF7: jz      short locret_540F1C
0x540EF9: cmp     dword ptr [eax+30h], 0
0x540EFD: jz      short locret_540F1C
0x540EFF: mov     eax, [eax+30h]
0x540F02: mov     eax, [eax+14h]
0x540F05: test    eax, eax
0x540F07: jz      short locret_540F1C
0x540F09: cmp     [esp+arg_0], 0
0x540F0E: jz      short loc_540F16
0x540F10: or      word ptr [eax+18h], 20h
0x540F15: retn
0x540F16: and     word ptr [eax+18h], 0FFDFh
0x540F1C: retn
