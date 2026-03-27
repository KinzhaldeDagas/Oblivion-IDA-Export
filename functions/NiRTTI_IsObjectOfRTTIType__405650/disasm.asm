0x405650: mov     ecx, [esp+arg_4]
0x405654: test    ecx, ecx
0x405656: jz      short loc_405672
0x405658: mov     eax, [ecx]
0x40565A: mov     edx, [eax+4]
0x40565D: call    edx
0x40565F: test    eax, eax
0x405661: jz      short loc_405672
0x405663: mov     ecx, [esp+arg_0]
0x405667: cmp     eax, ecx
0x405669: jz      short loc_405675
0x40566B: mov     eax, [eax+4]
0x40566E: test    eax, eax
0x405670: jnz     short loc_405667
0x405672: xor     al, al
0x405674: retn
0x405675: mov     al, 1
0x405677: retn
