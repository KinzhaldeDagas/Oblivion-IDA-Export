0x89D940: test    ecx, ecx
0x89D942: jz      short loc_89D94F
0x89D944: mov     eax, [ecx+8]
0x89D947: test    eax, eax
0x89D949: jz      short loc_89D94F
0x89D94B: mov     eax, [eax+8]
0x89D94E: retn
0x89D94F: xor     eax, eax
0x89D951: retn
