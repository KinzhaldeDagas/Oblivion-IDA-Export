0x540E90: mov     eax, ds:0B365C4h
0x540E95: test    eax, eax
0x540E97: jz      short locret_540EBC
0x540E99: cmp     dword ptr [eax+30h], 0
0x540E9D: jz      short locret_540EBC
0x540E9F: mov     eax, [eax+30h]
0x540EA2: mov     eax, [eax+10h]
0x540EA5: test    eax, eax
0x540EA7: jz      short locret_540EBC
0x540EA9: cmp     [esp+arg_0], 0
0x540EAE: jz      short loc_540EB6
0x540EB0: or      word ptr [eax+18h], 20h
0x540EB5: retn
0x540EB6: and     word ptr [eax+18h], 0FFDFh
0x540EBC: retn
