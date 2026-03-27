0x4C9D30: test    byte ptr [ecx+24h], 1
0x4C9D34: jz      short locret_4C9D44
0x4C9D36: mov     eax, [ecx+3Ch]
0x4C9D39: test    eax, eax
0x4C9D3B: jz      short locret_4C9D44
0x4C9D3D: mov     ecx, [esp+arg_0]
0x4C9D41: mov     [eax+24h], ecx
0x4C9D44: retn    4
