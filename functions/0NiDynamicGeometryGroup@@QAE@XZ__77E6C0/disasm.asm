0x77E6C0: push    esi
0x77E6C1: push    edi
0x77E6C2: mov     esi, ecx
0x77E6C4: call    sub_7828D0
0x77E6C9: xor     ecx, ecx
0x77E6CB: xor     edi, edi
0x77E6CD: mov     eax, 25h ; '%'
0x77E6D2: mov     edx, 4
0x77E6D7: mul     edx
0x77E6D9: seto    cl
0x77E6DC: mov     dword ptr [esi], offset ??_7NiDynamicGeometryGroup@@6B@; const NiDynamicGeometryGroup::`vftable'
0x77E6E2: mov     dword ptr [esi+0Ch], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiVBDynamicSet@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiVBDynamicSet *>::`vftable'
0x77E6E9: mov     dword ptr [esi+10h], 25h ; '%'
0x77E6F0: mov     [esi+18h], edi
0x77E6F3: neg     ecx
0x77E6F5: or      ecx, eax
0x77E6F7: push    ecx; Size
0x77E6F8: call    FormHeapAlloc
0x77E6FD: mov     ecx, [esi+10h]
0x77E700: add     ecx, ecx
0x77E702: add     ecx, ecx
0x77E704: push    ecx
0x77E705: push    edi
0x77E706: push    eax
0x77E707: mov     [esi+14h], eax
0x77E70A: call    __memset
0x77E70F: xor     ecx, ecx
0x77E711: mov     eax, 25h ; '%'
0x77E716: mov     edx, 4
0x77E71B: mul     edx
0x77E71D: seto    cl
0x77E720: mov     dword ptr [esi+0Ch], offset ??_7?$NiTPointerMap@IPAVNiVBDynamicSet@@@@6B@; const NiTPointerMap<uint,NiVBDynamicSet *>::`vftable'
0x77E727: mov     dword ptr [esi+1Ch], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiVBChip@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiVBChip *>::`vftable'
0x77E72E: mov     dword ptr [esi+20h], 25h ; '%'
0x77E735: mov     [esi+28h], edi
0x77E738: neg     ecx
0x77E73A: or      ecx, eax
0x77E73C: push    ecx; Size
0x77E73D: call    FormHeapAlloc
0x77E742: mov     ecx, [esi+20h]
0x77E745: add     ecx, ecx
0x77E747: add     ecx, ecx
0x77E749: push    ecx
0x77E74A: push    edi
0x77E74B: push    eax
0x77E74C: mov     [esi+24h], eax
0x77E74F: call    __memset
0x77E754: mov     dword ptr [esi+1Ch], offset ??_7?$NiTPointerMap@IPAVNiVBChip@@@@6B@; const NiTPointerMap<uint,NiVBChip *>::`vftable'
0x77E75B: mov     [esi+34h], di
0x77E75F: mov     [esi+36h], di
0x77E763: mov     [esi+38h], di
0x77E767: mov     [esi+30h], edi
0x77E76A: mov     dword ptr [esi+2Ch], offset ??_7?$NiTArray@PAVNiVBDynamicSet@@@@6B@; const NiTArray<NiVBDynamicSet *>::`vftable'
0x77E771: mov     eax, 1
0x77E776: mov     [esi+3Ah], ax
0x77E77A: mov     [esi+44h], di
0x77E77E: mov     [esi+4Ah], ax
0x77E782: mov     [esi+46h], di
0x77E786: mov     [esi+48h], di
0x77E78A: mov     [esi+40h], edi
0x77E78D: add     esp, 20h
0x77E790: mov     dword ptr [esi+3Ch], offset ??_7?$NiTArray@PAVNiVBChip@@@@6B@; const NiTArray<NiVBChip *>::`vftable'
0x77E797: mov     [esi+4Ch], edi
0x77E79A: pop     edi
0x77E79B: mov     eax, esi
0x77E79D: pop     esi
0x77E79E: retn
