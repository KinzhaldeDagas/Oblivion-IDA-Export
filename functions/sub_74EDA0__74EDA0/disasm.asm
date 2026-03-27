0x74EDA0: push    esi
0x74EDA1: mov     esi, ecx
0x74EDA3: call    sub_752BF0
0x74EDA8: fldz
0x74EDAA: fst     dword ptr [esi+18h]
0x74EDAD: mov     dword ptr [esi], offset ??_7NiPSysEmitter@@6B@; const NiPSysEmitter::`vftable'
0x74EDB3: fst     dword ptr [esi+1Ch]
0x74EDB6: fst     dword ptr [esi+20h]
0x74EDB9: fst     dword ptr [esi+24h]
0x74EDBC: fst     dword ptr [esi+28h]
0x74EDBF: fst     dword ptr [esi+2Ch]
0x74EDC2: mov     eax, ds:0B25AE0h
0x74EDC7: fld1
0x74EDC9: mov     [esi+30h], eax
0x74EDCC: mov     ecx, ds:0B25AE4h
0x74EDD2: mov     [esi+34h], ecx
0x74EDD5: mov     edx, ds:0B25AE8h
0x74EDDB: mov     [esi+38h], edx
0x74EDDE: mov     eax, ds:0B25AECh
0x74EDE3: fstp    dword ptr [esi+40h]
0x74EDE6: mov     [esi+3Ch], eax
0x74EDE9: fst     dword ptr [esi+44h]
0x74EDEC: mov     eax, esi
0x74EDEE: fst     dword ptr [esi+48h]
0x74EDF1: fstp    dword ptr [esi+4Ch]
0x74EDF4: pop     esi
0x74EDF5: retn
