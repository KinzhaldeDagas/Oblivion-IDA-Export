0x612CD0: mov     eax, [ecx+6Ch]
0x612CD3: cmp     eax, 0Eh
0x612CD6: jz      short loc_612CE0
0x612CD8: cmp     eax, 10h
0x612CDB: jz      short loc_612CE0
0x612CDD: xor     eax, eax
0x612CDF: retn
0x612CE0: mov     eax, 1
0x612CE5: retn
