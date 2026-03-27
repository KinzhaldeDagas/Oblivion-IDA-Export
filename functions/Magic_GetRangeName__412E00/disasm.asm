0x412E00: mov     eax, [esp+arg_0]
0x412E04: mov     eax, Magic_RangeNameArray[eax*4]
0x412E0B: test    eax, eax
0x412E0D: jz      short loc_412E12
0x412E0F: mov     eax, [eax]
0x412E11: retn
0x412E12: xor     eax, eax
0x412E14: retn
