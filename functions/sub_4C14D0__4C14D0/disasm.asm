0x4C14D0: push    0FFFFFFFFh
0x4C14D2: push    offset ??1NiScreenPolygon@@UAE@XZ_SEH
0x4C14D7: mov     eax, large fs:0
0x4C14DD: push    eax
0x4C14DE: push    ecx
0x4C14DF: push    esi
0x4C14E0: push    edi
0x4C14E1: mov     eax, ds:0B30AACh
0x4C14E6: xor     eax, esp
0x4C14E8: push    eax
0x4C14E9: lea     eax, [esp+1Ch+var_C]
0x4C14ED: mov     large fs:0, eax
0x4C14F3: mov     esi, ecx
0x4C14F5: call    NiObject_constr
0x4C14FA: mov     ax, [esp+1Ch+arg_0]
0x4C14FF: xor     ecx, ecx
0x4C1501: mov     dword ptr [esi], offset ??_7NiAdditionalGeometryData@@6B@; const NiAdditionalGeometryData::`vftable'
0x4C1507: mov     dword ptr [esi+1Ch], offset ??_7?$NiTArray@PAVNiAGDDataBlock@NiAdditionalGeometryData@@@@6B@; const NiTArray<NiAdditionalGeometryData::NiAGDDataBlock *>::`vftable'
0x4C150E: mov     [esi+24h], cx
0x4C1512: mov     word ptr [esi+2Ah], 1
0x4C1518: mov     [esi+26h], cx
0x4C151C: mov     [esi+28h], cx
0x4C1520: mov     [esi+20h], ecx
0x4C1523: mov     [esi+0Ch], ax
0x4C1527: mov     [esi+8], ecx
0x4C152A: mov     [esi+10h], ecx
0x4C152D: mov     [esi+14h], ecx
0x4C1530: xor     eax, eax
0x4C1532: cmp     [esi+26h], cx
0x4C1536: jbe     short loc_4C1552
0x4C1538: jmp     short loc_4C1540
0x4C153A: align 10h
0x4C1540: mov     edi, [esi+20h]
0x4C1543: movzx   edx, ax
0x4C1546: add     eax, 1
0x4C1549: mov     [edi+edx*4], ecx
0x4C154C: cmp     ax, [esi+26h]
0x4C1550: jb      short loc_4C1540
0x4C1552: mov     [esi+26h], cx
0x4C1556: mov     [esi+28h], cx
0x4C155A: mov     [esi+18h], ecx
0x4C155D: mov     eax, esi
0x4C155F: mov     ecx, [esp+1Ch+var_C]
0x4C1563: mov     large fs:0, ecx
0x4C156A: pop     ecx
0x4C156B: pop     edi
0x4C156C: pop     esi
0x4C156D: add     esp, 10h
0x4C1570: retn    4
