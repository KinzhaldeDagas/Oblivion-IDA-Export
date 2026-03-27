0x607B60: mov     eax, ds:0B3B7D4h
0x607B65: test    eax, eax
0x607B67: jnz     short locret_607B8C
0x607B69: mov     eax, ds:0B2EB3Ch
0x607B6E: add     eax, 1
0x607B71: and     eax, 0FFFFh
0x607B76: mov     ds:0B2EB3Ch, eax
0x607B7B: jnz     short loc_607B87
0x607B7D: mov     eax, 0Ah
0x607B82: mov     ds:0B2EB3Ch, eax
0x607B87: mov     ds:0B3B7D4h, eax
0x607B8C: retn
