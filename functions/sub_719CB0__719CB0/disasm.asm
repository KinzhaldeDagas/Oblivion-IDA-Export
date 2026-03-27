0x719CB0: mov     eax, [esp+arg_1C]
0x719CB4: mov     edx, [esp+arg_14]
0x719CB8: push    esi
0x719CB9: push    eax
0x719CBA: mov     eax, [esp+8+arg_10]
0x719CBE: mov     esi, ecx
0x719CC0: mov     ecx, [esp+8+arg_18]
0x719CC4: push    ecx
0x719CC5: mov     ecx, [esp+0Ch+arg_C]
0x719CC9: push    edx
0x719CCA: mov     edx, [esp+10h+arg_8]
0x719CCE: push    eax
0x719CCF: mov     eax, [esp+14h+arg_4]
0x719CD3: push    ecx
0x719CD4: mov     ecx, [esp+18h+arg_0]
0x719CD8: push    edx
0x719CD9: push    eax
0x719CDA: push    ecx
0x719CDB: mov     ecx, esi
0x719CDD: call    NiTriBasedGeomData__NiTriBasedGeomData
0x719CE2: mov     eax, [esp+4+arg_24]
0x719CE6: mov     dx, [esp+4+arg_20]
0x719CEB: mov     ecx, [esp+4+arg_28]
0x719CEF: mov     [esi+48h], eax
0x719CF2: mov     dword ptr [esi], offset ??_7NiTriStripsData@@6B@; const NiTriStripsData::`vftable'
0x719CF8: mov     [esi+44h], dx
0x719CFC: mov     [esi+4Ch], ecx
0x719CFF: mov     eax, esi
0x719D01: pop     esi
0x719D02: retn    2Ch ; ','
