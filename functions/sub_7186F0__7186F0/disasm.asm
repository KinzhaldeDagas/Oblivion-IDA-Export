0x7186F0: push    esi
0x7186F1: mov     esi, ds:0B3FCE4h
0x7186F7: test    esi, esi
0x7186F9: jz      short loc_718721
0x7186FB: lea     eax, [esi+4]
0x7186FE: push    eax; lpAddend
0x7186FF: call    dword ptr ds:0A2807Ch
0x718705: test    eax, eax
0x718707: jnz     short loc_718717
0x718709: test    esi, esi
0x71870B: jz      short loc_718717
0x71870D: mov     edx, [esi]
0x71870F: mov     eax, [edx]
0x718711: push    1
0x718713: mov     ecx, esi
0x718715: call    eax
0x718717: mov     dword ptr ds:0B3FCE4h, 0
0x718721: pop     esi
0x718722: retn
