0x44FB90: mov     eax, [ecx+4]; Returns the topmost thread-safe parent of this TESFile, or null when this file has no parent. Behavior matches the later engine API name after being verified here.
0x44FB93: test    eax, eax
0x44FB95: jz      short locret_44FBA4
0x44FB97: mov     ecx, [eax+4]
0x44FB9A: test    ecx, ecx
0x44FB9C: jz      short locret_44FBA4
0x44FB9E: mov     eax, ecx
0x44FBA0: test    eax, eax
0x44FBA2: jnz     short loc_44FB97
0x44FBA4: retn
