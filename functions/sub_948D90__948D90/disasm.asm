0x948D90: push    esi
0x948D91: mov     esi, ecx
0x948D93: lea     ecx, [esi+18h]
0x948D96: mov     dword ptr [esi], offset off_AA2B8C
0x948D9C: mov     dword ptr [esi+8], offset off_AA2B74
0x948DA3: call    sub_8B0E60
0x948DA8: mov     eax, [esi+14h]
0x948DAB: test    eax, eax
0x948DAD: js      short loc_948DE0
0x948DAF: mov     ecx, ds:0BA9DE4h
0x948DB5: mov     edx, large fs:2Ch
0x948DBC: mov     ecx, [edx+ecx*4]
0x948DBF: mov     ecx, [ecx+19Ch]
0x948DC5: test    ecx, ecx
0x948DC7: jnz     short loc_948DCF
0x948DC9: mov     ecx, ds:0BA7D9Ch
0x948DCF: mov     edx, [esi+0Ch]
0x948DD2: push    14h
0x948DD4: and     eax, 3FFFFFFFh
0x948DD9: push    eax
0x948DDA: push    edx
0x948DDB: call    sub_8A75D0
0x948DE0: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x948DE6: pop     esi
0x948DE7: retn
