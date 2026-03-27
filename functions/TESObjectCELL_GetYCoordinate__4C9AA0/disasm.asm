0x4C9AA0: test    byte ptr [ecx+24h], 1
0x4C9AA4: jnz     short loc_4C9AB1
0x4C9AA6: mov     eax, [ecx+3Ch]
0x4C9AA9: test    eax, eax
0x4C9AAB: jz      short loc_4C9AB1
0x4C9AAD: mov     eax, [eax+4]
0x4C9AB0: retn
0x4C9AB1: xor     eax, eax
0x4C9AB3: retn
