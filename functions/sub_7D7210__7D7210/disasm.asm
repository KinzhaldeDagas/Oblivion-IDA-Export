0x7D7210: push    esi
0x7D7211: mov     esi, ds:0B3F928h
0x7D7217: call    sub_7D7150
0x7D721C: cmp     dword ptr [esi+200h], 1
0x7D7223: jnz     short loc_7D7248
0x7D7225: cmp     dword ptr [esi+204h], 0
0x7D722C: jnz     short loc_7D7248
0x7D722E: mov     eax, [esi]
0x7D7230: mov     edx, [eax+134h]
0x7D7236: mov     ecx, esi
0x7D7238: call    edx
0x7D723A: test    al, al
0x7D723C: jz      short loc_7D7248
0x7D723E: mov     dword ptr [esi+200h], 2
0x7D7248: cmp     dword ptr [esi+200h], 2
0x7D724F: jnz     short loc_7D727B
0x7D7251: cmp     dword ptr [esi+204h], 0
0x7D7258: jnz     short loc_7D727B
0x7D725A: mov     eax, [esi]
0x7D725C: mov     edx, [eax+138h]
0x7D7262: mov     ecx, esi
0x7D7264: call    edx
0x7D7266: test    al, al
0x7D7268: jz      short loc_7D727B
0x7D726A: add     dword ptr [esi+208h], 1
0x7D7271: mov     dword ptr [esi+200h], 0
0x7D727B: pop     esi
0x7D727C: retn
