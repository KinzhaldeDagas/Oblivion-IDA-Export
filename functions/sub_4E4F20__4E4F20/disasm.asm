0x4E4F20: push    edi; Verified PGRI teardown: for each record, read its local point index, get the local TESPathGridPoint, then remove the connection to the remote point position stored at record+4; finally the PGRI list records are freed by TESPathGrid_ClearPGRIRecords.
0x4E4F21: mov     edi, ecx
0x4E4F23: cmp     dword ptr [edi+24h], 0
0x4E4F27: jz      short loc_4E4F68
0x4E4F29: push    esi
0x4E4F2A: lea     esi, [edi+28h]
0x4E4F2D: test    esi, esi
0x4E4F2F: jz      short loc_4E4F67
0x4E4F31: cmp     dword ptr [esi+4], 0
0x4E4F35: jnz     short loc_4E4F3C
0x4E4F37: cmp     dword ptr [esi], 0
0x4E4F3A: jz      short loc_4E4F67
0x4E4F3C: mov     edx, [esi]
0x4E4F3E: movzx   eax, word ptr [edx]
0x4E4F41: cmp     ax, [edi+30h]
0x4E4F45: jnb     short loc_4E4F60
0x4E4F47: mov     ecx, [edi+24h]
0x4E4F4A: mov     ecx, [ecx+4]
0x4E4F4D: movzx   eax, ax
0x4E4F50: mov     ecx, [ecx+eax*4]; this
0x4E4F53: test    ecx, ecx
0x4E4F55: jz      short loc_4E4F60
0x4E4F57: add     edx, 4
0x4E4F5A: push    edx; position
0x4E4F5B: call    TESPathGridPoint_RemoveNeighborAtPosition; Verified removes reciprocal PathGrid adjacency at a neighbor position: searches this point's connection list by each neighbor's NiPoint3 within fConstant_2 tolerance, removes this point from that neighbor's list, then removes/frees the local connection entry.
0x4E4F60: mov     esi, [esi+4]
0x4E4F63: test    esi, esi
0x4E4F65: jnz     short loc_4E4F31
0x4E4F67: pop     esi
0x4E4F68: pop     edi
0x4E4F69: retn
