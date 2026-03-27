0x7203D0: mov     eax, ds:0B3F928h
0x7203D5: test    eax, eax
0x7203D7: jz      short loc_7203EB
0x7203D9: mov     edx, [eax]
0x7203DB: push    ecx
0x7203DC: mov     ecx, eax
0x7203DE: mov     eax, [edx+10Ch]
0x7203E4: call    eax
0x7203E6: test    al, al
0x7203E8: jnz     short loc_7203EB
0x7203EA: retn
0x7203EB: mov     al, 1
0x7203ED: retn
