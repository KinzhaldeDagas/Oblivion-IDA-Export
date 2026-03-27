0x5BDFA0: push    3F5h
0x5BDFA5: call    InterfaceManager_MenuModeHasFocus
0x5BDFAA: add     esp, 4
0x5BDFAD: test    al, al
0x5BDFAF: jz      short loc_5BDFDC
0x5BDFB1: cmp     [esp+arg_0], 5
0x5BDFB6: jnz     short loc_5BDFDC
0x5BDFB8: mov     ecx, ds:0B333C4h
0x5BDFBE: test    ecx, ecx
0x5BDFC0: jz      short loc_5BDFDC
0x5BDFC2: mov     eax, [ecx]
0x5BDFC4: mov     edx, [eax+198h]
0x5BDFCA: push    0
0x5BDFCC: call    edx
0x5BDFCE: test    al, al
0x5BDFD0: jnz     short loc_5BDFDC
0x5BDFD2: call    sub_5BDCD0
0x5BDFD7: mov     al, 1
0x5BDFD9: retn    8
0x5BDFDC: xor     al, al
0x5BDFDE: retn    8
