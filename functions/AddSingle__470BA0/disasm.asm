0x470BA0: push    esi
0x470BA1: push    edi
0x470BA2: mov     edi, ecx
0x470BA4: mov     esi, [edi+4]
0x470BA7: test    esi, esi
0x470BA9: jz      short loc_470BC7
0x470BAB: lea     eax, [esi+4]
0x470BAE: push    eax; lpAddend
0x470BAF: call    dword ptr ds:0A2807Ch
0x470BB5: test    eax, eax
0x470BB7: jnz     short loc_470BC7
0x470BB9: test    esi, esi
0x470BBB: jz      short loc_470BC7
0x470BBD: mov     edx, [esi]
0x470BBF: mov     eax, [edx]
0x470BC1: push    1
0x470BC3: mov     ecx, esi
0x470BC5: call    eax
0x470BC7: mov     eax, [esp+8+a2]
0x470BCB: test    eax, eax
0x470BCD: mov     [edi+4], eax
0x470BD0: pop     edi
0x470BD1: pop     esi
0x470BD2: jz      short locret_470BE1
0x470BD4: add     eax, 4
0x470BD7: mov     [esp+a2], eax
0x470BDB: jmp     dword ptr ds:0A28078h
0x470BE1: retn    4
