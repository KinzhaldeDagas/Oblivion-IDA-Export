0x74DBD0: push    esi
0x74DBD1: push    edi
0x74DBD2: push    28h ; '('; Size
0x74DBD4: call    FormHeapAlloc
0x74DBD9: mov     esi, eax
0x74DBDB: xor     edi, edi
0x74DBDD: add     esp, 4
0x74DBE0: cmp     esi, edi
0x74DBE2: jz      short loc_74DC12
0x74DBE4: mov     ecx, esi
0x74DBE6: call    sub_752BF0
0x74DBEB: mov     dword ptr [esi], offset ??_7NiPSysMeshUpdateModifier@@6B@; const NiPSysMeshUpdateModifier::`vftable'
0x74DBF1: mov     [esi+20h], di
0x74DBF5: mov     [esi+22h], di
0x74DBF9: mov     [esi+24h], di
0x74DBFD: mov     [esi+1Ch], edi
0x74DC00: pop     edi
0x74DC01: mov     dword ptr [esi+18h], offset ??_7?$NiTArray@V?$NiPointer@VNiAVObject@@@@@@6B@; const NiTArray<NiPointer<NiAVObject>>::`vftable'
0x74DC08: mov     word ptr [esi+26h], 1
0x74DC0E: mov     eax, esi
0x74DC10: pop     esi
0x74DC11: retn
0x74DC12: pop     edi
0x74DC13: xor     eax, eax
0x74DC15: pop     esi
0x74DC16: retn
