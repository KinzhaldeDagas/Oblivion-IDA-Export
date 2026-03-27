0x903AE0: push    esi
0x903AE1: mov     esi, ecx
0x903AE3: mov     eax, [esi+14h]
0x903AE6: test    eax, eax
0x903AE8: js      short loc_903B1E
0x903AEA: mov     ecx, ds:0BA9DE4h
0x903AF0: mov     edx, large fs:2Ch
0x903AF7: mov     ecx, [edx+ecx*4]
0x903AFA: mov     ecx, [ecx+19Ch]
0x903B00: test    ecx, ecx
0x903B02: jnz     short loc_903B0A
0x903B04: mov     ecx, ds:0BA7D9Ch
0x903B0A: mov     edx, [esi+0Ch]
0x903B0D: and     eax, 3FFFFFFFh
0x903B12: push    14h
0x903B14: shl     eax, 2
0x903B17: push    eax
0x903B18: push    edx
0x903B19: call    sub_8A75D0
0x903B1E: test    [esp+4+arg_0], 1
0x903B23: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x903B29: jz      short loc_903B3E
0x903B2B: movzx   edx, word ptr [esi+4]
0x903B2F: mov     ecx, ds:0BA7D98h
0x903B35: mov     eax, [ecx]
0x903B37: push    1Ch
0x903B39: push    edx
0x903B3A: push    esi
0x903B3B: call    dword ptr [eax+14h]
0x903B3E: mov     eax, esi
0x903B40: pop     esi
0x903B41: retn    4
