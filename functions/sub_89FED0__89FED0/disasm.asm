0x89FED0: test    ecx, ecx
0x89FED2: jz      short locret_89FEEB
0x89FED4: mov     ecx, [ecx+8]
0x89FED7: test    ecx, ecx
0x89FED9: jz      short locret_89FEEB
0x89FEDB: mov     eax, [esp+arg_0]
0x89FEDF: mov     edx, [eax+8]
0x89FEE2: mov     [esp+arg_0], edx
0x89FEE6: jmp     loc_8E7BD0
0x89FEEB: retn    4
