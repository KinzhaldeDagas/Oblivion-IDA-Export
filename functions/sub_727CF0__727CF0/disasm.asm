0x727CF0: push    10h; Size
0x727CF2: call    FormHeapAlloc
0x727CF7: xor     ecx, ecx
0x727CF9: add     esp, 4
0x727CFC: cmp     eax, ecx
0x727CFE: jz      short loc_727D13
0x727D00: mov     [eax+4], ecx
0x727D03: mov     [eax+8], ecx
0x727D06: mov     [eax+0Ch], cl
0x727D09: mov     dword ptr [eax], offset ??_7NiBSPackedAGDDataBlock@BSPackedAdditionalGeometryData@@6B@; const BSPackedAdditionalGeometryData::NiBSPackedAGDDataBlock::`vftable'
0x727D0F: mov     [eax+0Dh], cl
0x727D12: retn
0x727D13: xor     eax, eax
0x727D15: retn
