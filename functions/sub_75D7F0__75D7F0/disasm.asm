0x75D7F0: push    esi
0x75D7F1: push    edi
0x75D7F2: push    84h ; '„'; Size
0x75D7F7: call    FormHeapAlloc
0x75D7FC: mov     esi, eax
0x75D7FE: xor     edi, edi
0x75D800: add     esp, 4
0x75D803: cmp     esi, edi
0x75D805: jz      short loc_75D83E
0x75D807: mov     ecx, esi
0x75D809: call    sub_7597F0
0x75D80E: mov     dword ptr [esi], offset ??_7NiMeshPSysData@@6B@; const NiMeshPSysData::`vftable'
0x75D814: mov     [esi+68h], edi
0x75D817: mov     [esi+7Ch], di
0x75D81B: mov     [esi+7Eh], di
0x75D81F: mov     [esi+80h], di
0x75D826: mov     [esi+78h], edi
0x75D829: pop     edi
0x75D82A: mov     dword ptr [esi+74h], offset ??_7?$NiTArray@PAV?$NiTArray@V?$NiPointer@VNiAVObject@@@@@@@@6B@; const NiTArray<NiTArray<NiPointer<NiAVObject>> *>::`vftable'
0x75D831: mov     word ptr [esi+82h], 1
0x75D83A: mov     eax, esi
0x75D83C: pop     esi
0x75D83D: retn
0x75D83E: pop     edi
0x75D83F: xor     eax, eax
0x75D841: pop     esi
0x75D842: retn
