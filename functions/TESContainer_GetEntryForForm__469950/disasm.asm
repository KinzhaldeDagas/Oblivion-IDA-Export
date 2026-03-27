0x469950: test    byte ptr [ecx+4], 1
0x469954: jz      short loc_469970
0x469956: add     ecx, 8
0x469959: cmp     dword ptr [ecx], 0
0x46995C: jz      short loc_469970
0x46995E: mov     edx, [esp+arg_0]
0x469962: mov     eax, [ecx]
0x469964: cmp     [eax+4], edx
0x469967: jz      short locret_469972
0x469969: mov     ecx, [ecx+4]
0x46996C: test    ecx, ecx
0x46996E: jnz     short loc_469962
0x469970: xor     eax, eax
0x469972: retn    4
