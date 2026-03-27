0x933DD0: push    esi
0x933DD1: mov     esi, ecx
0x933DD3: push    edi
0x933DD4: mov     edi, [esi+50h]
0x933DD7: test    edi, edi
0x933DD9: mov     dword ptr [esi], offset off_A9B2F4
0x933DDF: jz      short loc_933DFF
0x933DE1: mov     ecx, edi
0x933DE3: call    sub_8B44C0
0x933DE8: mov     ecx, ds:0BA7D98h
0x933DEE: mov     eax, [ecx]
0x933DF0: push    24h ; '$'
0x933DF2: push    18h
0x933DF4: push    edi
0x933DF5: call    dword ptr [eax+14h]
0x933DF8: mov     dword ptr [esi+50h], 0
0x933DFF: pop     edi
0x933E00: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x933E06: pop     esi
0x933E07: retn
