0x498F00: mov     eax, ds:0B350E8h
0x498F05: test    eax, eax
0x498F07: jz      short locret_498F29
0x498F09: cmp     eax, 14h
0x498F0C: jbe     short loc_498F18
0x498F0E: mov     eax, 14h
0x498F13: mov     ds:0B350E8h, eax
0x498F18: push    eax; dwMilliseconds
0x498F19: call    dword ptr ds:0A280DCh
0x498F1F: mov     dword ptr ds:0B350E8h, 0
0x498F29: retn
