0x725FE0: push    10h; Size
0x725FE2: call    FormHeapAlloc
0x725FE7: xor     ecx, ecx
0x725FE9: add     esp, 4
0x725FEC: cmp     eax, ecx
0x725FEE: jz      short loc_726000
0x725FF0: mov     dword ptr [eax], offset ??_7NiAGDDataBlock@NiAdditionalGeometryData@@6B@; const NiAdditionalGeometryData::NiAGDDataBlock::`vftable'
0x725FF6: mov     [eax+4], ecx
0x725FF9: mov     [eax+8], ecx
0x725FFC: mov     [eax+0Ch], cl
0x725FFF: retn
0x726000: xor     eax, eax
0x726002: retn
