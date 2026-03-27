0x46A360: mov     eax, ds:0B33C08h
0x46A365: push    esi
0x46A366: push    eax
0x46A367: mov     esi, ecx
0x46A369: call    FormHeapFree
0x46A36E: xor     eax, eax
0x46A370: add     esp, 4
0x46A373: mov     ds:0B33C08h, eax
0x46A378: mov     ds:0B33C0Eh, ax
0x46A37E: mov     ds:0B33C0Ch, ax
0x46A384: mov     ds:0B33C04h, eax
0x46A389: mov     [esi+4], eax
0x46A38C: pop     esi
0x46A38D: retn
