0x55AED0: mov     eax, [ecx+14h]
0x55AED3: test    eax, eax
0x55AED5: jz      short loc_55AEE5
0x55AED7: mov     ecx, [esp+arg_0]
0x55AEDB: test    ecx, ecx
0x55AEDD: ja      short loc_55AEE5
0x55AEDF: mov     eax, [eax+ecx*4]
0x55AEE2: retn    4
0x55AEE5: xor     eax, eax
0x55AEE7: retn    4
