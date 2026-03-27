0x4C9AC0: test    byte ptr [ecx+24h], 1
0x4C9AC4: jnz     short locret_4C9ADA
0x4C9AC6: mov     eax, [ecx+3Ch]
0x4C9AC9: test    eax, eax
0x4C9ACB: jz      short locret_4C9ADA
0x4C9ACD: mov     ecx, [esp+arg_0]
0x4C9AD1: mov     edx, [esp+arg_4]
0x4C9AD5: mov     [eax], ecx
0x4C9AD7: mov     [eax+4], edx
0x4C9ADA: retn    8
