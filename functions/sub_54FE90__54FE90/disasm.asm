0x54FE90: mov     eax, ds:0B39B80h
0x54FE95: test    eax, eax
0x54FE97: jz      short locret_54FEAD
0x54FE99: cmp     dword ptr [eax+0DACh], 0
0x54FEA0: jz      short locret_54FEAD
0x54FEA2: mov     ecx, [eax+0DACh]
0x54FEA8: jmp     loc_54FB00
0x54FEAD: retn
