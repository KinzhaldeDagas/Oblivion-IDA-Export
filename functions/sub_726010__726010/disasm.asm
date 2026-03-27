0x726010: push    0FFFFFFFFh
0x726012: push    offset ??1NiScreenPolygon@@UAE@XZ_SEH
0x726017: mov     eax, large fs:0
0x72601D: push    eax
0x72601E: push    ecx
0x72601F: push    esi
0x726020: push    edi
0x726021: mov     eax, ds:0B30AACh
0x726026: xor     eax, esp
0x726028: push    eax
0x726029: lea     eax, [esp+1Ch+var_C]
0x72602D: mov     large fs:0, eax
0x726033: mov     esi, ecx
0x726035: call    NiObject_constr
0x72603A: xor     ecx, ecx
0x72603C: mov     dword ptr [esi], offset ??_7NiAdditionalGeometryData@@6B@; const NiAdditionalGeometryData::`vftable'
0x726042: mov     dword ptr [esi+1Ch], offset ??_7?$NiTArray@PAVNiAGDDataBlock@NiAdditionalGeometryData@@@@6B@; const NiTArray<NiAdditionalGeometryData::NiAGDDataBlock *>::`vftable'
0x726049: mov     [esi+24h], cx
0x72604D: mov     word ptr [esi+2Ah], 1
0x726053: mov     [esi+26h], cx
0x726057: mov     [esi+28h], cx
0x72605B: mov     [esi+20h], ecx
0x72605E: mov     [esi+8], ecx
0x726061: mov     [esi+10h], ecx
0x726064: mov     [esi+14h], ecx
0x726067: mov     [esi+0Ch], cx
0x72606B: xor     eax, eax
0x72606D: cmp     [esi+26h], cx
0x726071: jbe     short loc_726085
0x726073: mov     edi, [esi+20h]
0x726076: movzx   edx, ax
0x726079: add     eax, 1
0x72607C: mov     [edi+edx*4], ecx
0x72607F: cmp     ax, [esi+26h]
0x726083: jb      short loc_726073
0x726085: mov     [esi+26h], cx
0x726089: mov     [esi+28h], cx
0x72608D: mov     [esi+18h], ecx
0x726090: mov     eax, esi
0x726092: mov     ecx, [esp+1Ch+var_C]
0x726096: mov     large fs:0, ecx
0x72609D: pop     ecx
0x72609E: pop     edi
0x72609F: pop     esi
0x7260A0: add     esp, 10h
0x7260A3: retn
