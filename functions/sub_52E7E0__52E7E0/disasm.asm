0x52E7E0: mov     eax, [esp+arg_0]
0x52E7E4: cmp     eax, 2
0x52E7E7: ja      short loc_52E7F7
0x52E7E9: mov     eax, ds:0B10D90h[eax*4]
0x52E7F0: test    eax, eax
0x52E7F2: jz      short loc_52E7F7
0x52E7F4: mov     eax, [eax]
0x52E7F6: retn
0x52E7F7: xor     eax, eax
0x52E7F9: retn
