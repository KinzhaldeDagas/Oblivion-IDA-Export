0x94BBF0: push    esi
0x94BBF1: mov     esi, ecx
0x94BBF3: mov     eax, [esi+10h]
0x94BBF6: test    eax, eax
0x94BBF8: js      short loc_94BC2E
0x94BBFA: mov     ecx, ds:0BA9DE4h
0x94BC00: mov     edx, large fs:2Ch
0x94BC07: mov     ecx, [edx+ecx*4]
0x94BC0A: mov     ecx, [ecx+19Ch]
0x94BC10: test    ecx, ecx
0x94BC12: jnz     short loc_94BC1A
0x94BC14: mov     ecx, ds:0BA7D9Ch
0x94BC1A: mov     edx, [esi+8]
0x94BC1D: and     eax, 3FFFFFFFh
0x94BC22: push    14h
0x94BC24: shl     eax, 3
0x94BC27: push    eax
0x94BC28: push    edx
0x94BC29: call    sub_8A75D0
0x94BC2E: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x94BC34: pop     esi
0x94BC35: retn
