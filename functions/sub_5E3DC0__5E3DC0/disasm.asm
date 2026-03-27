0x5E3DC0: cmp     dword ptr [ecx+58h], 0
0x5E3DC4: jz      short loc_5E3DDB
0x5E3DC6: mov     ecx, [ecx+58h]
0x5E3DC9: mov     eax, [ecx]
0x5E3DCB: mov     edx, [eax+184h]
0x5E3DD1: call    edx
0x5E3DD3: test    eax, eax
0x5E3DD5: jz      short loc_5E3DDB
0x5E3DD7: mov     eax, [eax+24h]
0x5E3DDA: retn
0x5E3DDB: xor     eax, eax
0x5E3DDD: retn
