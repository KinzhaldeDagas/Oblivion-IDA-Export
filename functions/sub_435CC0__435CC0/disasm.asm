0x435CC0: mov     ecx, [esp+arg_4]
0x435CC4: test    ecx, ecx
0x435CC6: jnz     short loc_435CCB
0x435CC8: xor     al, al
0x435CCA: retn
0x435CCB: mov     eax, [ecx]
0x435CCD: mov     edx, [eax+4]
0x435CD0: call    edx
0x435CD2: xor     ecx, ecx
0x435CD4: cmp     eax, [esp+arg_0]
0x435CD8: setz    cl
0x435CDB: mov     al, cl
0x435CDD: retn
