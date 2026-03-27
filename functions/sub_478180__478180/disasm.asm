0x478180: mov     eax, [ecx+12Ch]
0x478186: test    eax, eax
0x478188: jz      short loc_478197
0x47818A: cmp     byte ptr [eax+4], 1Ah
0x47818E: jnz     short loc_478197
0x478190: mov     eax, [ecx+134h]
0x478196: retn
0x478197: xor     eax, eax
0x478199: retn
