0x7F3BA0: push    esi
0x7F3BA1: mov     esi, ds:0B4690Ch
0x7F3BA7: test    esi, esi
0x7F3BA9: jz      short loc_7F3BD1
0x7F3BAB: lea     eax, [esi+4]
0x7F3BAE: push    eax; lpAddend
0x7F3BAF: call    dword ptr ds:0A2807Ch
0x7F3BB5: test    eax, eax
0x7F3BB7: jnz     short loc_7F3BC7
0x7F3BB9: test    esi, esi
0x7F3BBB: jz      short loc_7F3BC7
0x7F3BBD: mov     edx, [esi]
0x7F3BBF: mov     eax, [edx]
0x7F3BC1: push    1
0x7F3BC3: mov     ecx, esi
0x7F3BC5: call    eax
0x7F3BC7: mov     dword ptr ds:0B4690Ch, 0
0x7F3BD1: pop     esi
0x7F3BD2: retn
