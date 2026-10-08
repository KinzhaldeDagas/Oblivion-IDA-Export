0x4E6D60: push    ebp; Verified per-PathGrid point lookup by packed 512-unit X/Y spatial bucket, then scans that bucket's point pointers and compares NiPoint3 positions using fConstant_2 tolerance. The field's existing name pointsByCell is legacy shorthand; this map subdivides world coordinates at 512 units, unlike 4096-unit world cells.
0x4E6D61: push    esi
0x4E6D62: mov     esi, ecx
0x4E6D64: xor     ebp, ebp
0x4E6D66: cmp     [esi+24h], ebp
0x4E6D69: jz      short loc_4E6DDF
0x4E6D6B: push    ebx
0x4E6D6C: mov     ebx, [esp+0Ch+position]
0x4E6D70: push    ebx; position
0x4E6D71: call    TESPathGrid_PackSpatialBucketKey; Verified spatial-index key encoder used by both insertion and lookup. Converts world X/Y to signed integers, arithmetic-shifts each by 9 (512 world units), accepts bucket coordinates only in [-0x7FFF, 0x7FFE], and packs X into the high halfword and Y into the low halfword. Z is ignored. Out-of-range input returns 0, which also encodes bucket (0,0); handling/significance of that collision is Unknown. This is not the 4096-unit exterior cell-coordinate key. Fallout NavMeshInfoMap uses a separate global registry keyed by NavMeshInfo IDs and nested worldspace/cell keys (e.g. Fallout constructor 0x824A7D30), so that system is architectural context only and does not establish this Oblivion behavior.
0x4E6D76: add     esp, 4
0x4E6D79: lea     ecx, [esp+0Ch+position]
0x4E6D7D: push    ecx
0x4E6D7E: push    eax
0x4E6D7F: lea     ecx, [esi+44h]
0x4E6D82: mov     [esp+14h+position], ebp
0x4E6D86: call    NiTMap_GetAt
0x4E6D8B: mov     esi, [esp+0Ch+position]
0x4E6D8F: test    esi, esi
0x4E6D91: jz      short loc_4E6DD7
0x4E6D93: push    edi
0x4E6D94: cmp     [esi+4], ebp
0x4E6D97: jnz     short loc_4E6D9D
0x4E6D99: cmp     [esi], ebp
0x4E6D9B: jz      short loc_4E6DC5
0x4E6D9D: mov     edi, [esi]
0x4E6D9F: fld     dword ptr ds:0A379B4h
0x4E6DA5: push    ecx
0x4E6DA6: fstp    [esp+14h+var_14]; float
0x4E6DA9: push    ebx; int
0x4E6DAA: mov     ecx, edi; this
0x4E6DAC: call    PathGraphNode_GetPosition; Verified shared graph-node position accessor: returns this+0x14, used by TESConnectedPoint and TESPathGridPoint distance, serialization, and route-generation code.
0x4E6DB1: push    eax; int
0x4E6DB2: call    sub_47D810
0x4E6DB7: add     esp, 0Ch
0x4E6DBA: test    al, al
0x4E6DBC: jnz     short loc_4E6DCE
0x4E6DBE: mov     esi, [esi+4]
0x4E6DC1: test    esi, esi
0x4E6DC3: jnz     short loc_4E6D94
0x4E6DC5: pop     edi
0x4E6DC6: pop     ebx
0x4E6DC7: pop     esi
0x4E6DC8: mov     eax, ebp
0x4E6DCA: pop     ebp
0x4E6DCB: retn    4
0x4E6DCE: mov     eax, edi
0x4E6DD0: pop     edi
0x4E6DD1: pop     ebx
0x4E6DD2: pop     esi
0x4E6DD3: pop     ebp
0x4E6DD4: retn    4
0x4E6DD7: pop     ebx
0x4E6DD8: pop     esi
0x4E6DD9: mov     eax, ebp
0x4E6DDB: pop     ebp
0x4E6DDC: retn    4
0x4E6DDF: pop     esi
0x4E6DE0: mov     eax, ebp
0x4E6DE2: pop     ebp
0x4E6DE3: retn    4
