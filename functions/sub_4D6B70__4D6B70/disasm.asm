0x4D6B70: test    ecx, ecx
0x4D6B72: jz      short locret_4D6B88
0x4D6B74: mov     eax, [ecx+8]
0x4D6B77: test    eax, eax
0x4D6B79: jz      short locret_4D6B88
0x4D6B7B: mov     eax, [eax+50h]
0x4D6B7E: fld     [esp+arg_0]
0x4D6B82: fstp    dword ptr [eax+0B4h]
0x4D6B88: retn    4
