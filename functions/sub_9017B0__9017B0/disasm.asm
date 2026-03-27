0x9017B0: push    esi
0x9017B1: mov     esi, ecx
0x9017B3: mov     dword ptr [esi], offset off_A9BB10
0x9017B9: mov     eax, [esi+14h]
0x9017BC: test    eax, eax
0x9017BE: js      short loc_9017F3
0x9017C0: mov     ecx, ds:0BA9DE4h
0x9017C6: mov     edx, large fs:2Ch
0x9017CD: mov     ecx, [edx+ecx*4]
0x9017D0: mov     ecx, [ecx+19Ch]
0x9017D6: test    ecx, ecx
0x9017D8: jnz     short loc_9017E0
0x9017DA: mov     ecx, ds:0BA7D9Ch
0x9017E0: mov     edx, [esi+0Ch]
0x9017E3: and     eax, 3FFFFFFFh
0x9017E8: push    14h
0x9017EA: shl     eax, 1
0x9017EC: push    eax
0x9017ED: push    edx
0x9017EE: call    sub_8A75D0
0x9017F3: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x9017F9: pop     esi
0x9017FA: retn
