0x980DA5: jmp     short loc_980DBF
0x980DA7: mov     ecx, ds:0BA9C6Ch[eax*4]
0x980DAE: inc     eax
0x980DAF: test    ecx, ecx
0x980DB1: mov     ds:0B30A4Ch, eax
0x980DB6: jz      short loc_980DC4
0x980DB8: call    dword ptr ds:0BA9C68h[eax*4]
0x980DBF: mov     eax, ds:0B30A4Ch
0x980DC4: cmp     eax, 0Ah
0x980DC7: jb      short loc_980DA7
0x980DC9: retn
