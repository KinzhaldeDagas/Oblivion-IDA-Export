0x7C02E0: mov     eax, ds:0B43328h
0x7C02E5: test    eax, eax
0x7C02E7: jz      short locret_7C0328
0x7C02E9: mov     ecx, ds:0B42F50h; this
0x7C02EF: push    eax; a2
0x7C02F0: call    sub_7C1EE0
0x7C02F5: mov     eax, ds:0B43328h
0x7C02FA: test    eax, eax
0x7C02FC: jz      short locret_7C0328
0x7C02FE: push    esi
0x7C02FF: mov     esi, eax
0x7C0301: add     eax, 4
0x7C0304: push    eax; lpAddend
0x7C0305: call    dword ptr ds:0A2807Ch
0x7C030B: test    eax, eax
0x7C030D: jnz     short loc_7C031D
0x7C030F: test    esi, esi
0x7C0311: jz      short loc_7C031D
0x7C0313: mov     eax, [esi]
0x7C0315: mov     edx, [eax]
0x7C0317: push    1
0x7C0319: mov     ecx, esi
0x7C031B: call    edx
0x7C031D: mov     dword ptr ds:0B43328h, 0
0x7C0327: pop     esi
0x7C0328: retn
