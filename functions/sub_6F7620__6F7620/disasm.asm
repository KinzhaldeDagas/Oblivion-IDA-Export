0x6F7620: mov     eax, [esp+arg_4]
0x6F7624: cmp     dword ptr [eax+18h], 10h
0x6F7628: mov     ecx, [eax+14h]
0x6F762B: jb      short loc_6F7632
0x6F762D: mov     eax, [eax+4]
0x6F7630: jmp     short loc_6F7635
0x6F7632: add     eax, 4
0x6F7635: push    ecx
0x6F7636: mov     ecx, [esp+4+arg_0]
0x6F763A: push    eax
0x6F763B: mov     eax, [ecx+14h]
0x6F763E: push    eax
0x6F763F: push    0
0x6F7641: call    sub_6F5DE0
0x6F7646: xor     ecx, ecx
0x6F7648: test    eax, eax
0x6F764A: setl    cl
0x6F764D: mov     al, cl
0x6F764F: retn    8
