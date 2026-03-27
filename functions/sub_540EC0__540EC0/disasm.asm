0x540EC0: mov     eax, ds:0B365C4h
0x540EC5: test    eax, eax
0x540EC7: jz      short locret_540EEC
0x540EC9: cmp     dword ptr [eax+34h], 0
0x540ECD: jz      short locret_540EEC
0x540ECF: mov     eax, [eax+34h]
0x540ED2: mov     eax, [eax+10h]
0x540ED5: test    eax, eax
0x540ED7: jz      short locret_540EEC
0x540ED9: cmp     [esp+arg_0], 0
0x540EDE: jz      short loc_540EE6
0x540EE0: or      word ptr [eax+18h], 20h
0x540EE5: retn
0x540EE6: and     word ptr [eax+18h], 0FFDFh
0x540EEC: retn
