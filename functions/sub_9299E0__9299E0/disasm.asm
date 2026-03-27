0x9299E0: push    esi
0x9299E1: mov     esi, ecx
0x9299E3: mov     eax, [esi+14h]
0x9299E6: test    eax, eax
0x9299E8: js      short loc_929A1E
0x9299EA: mov     ecx, ds:0BA9DE4h
0x9299F0: mov     edx, large fs:2Ch
0x9299F7: mov     ecx, [edx+ecx*4]
0x9299FA: mov     ecx, [ecx+19Ch]
0x929A00: test    ecx, ecx
0x929A02: jnz     short loc_929A0A
0x929A04: mov     ecx, ds:0BA7D9Ch
0x929A0A: mov     edx, [esi+0Ch]
0x929A0D: and     eax, 3FFFFFFFh
0x929A12: push    14h
0x929A14: shl     eax, 5
0x929A17: push    eax
0x929A18: push    edx
0x929A19: call    sub_8A75D0
0x929A1E: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x929A24: pop     esi
0x929A25: retn
