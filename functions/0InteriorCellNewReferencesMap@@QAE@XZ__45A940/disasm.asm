0x45A940: push    esi
0x45A941: mov     esi, ecx
0x45A943: xor     ecx, ecx
0x45A945: mov     eax, 25h ; '%'
0x45A94A: mov     [esi+4], eax
0x45A94D: mov     edx, 4
0x45A952: mul     edx
0x45A954: seto    cl
0x45A957: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@I@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<uint> *>::`vftable'
0x45A95D: mov     dword ptr [esi+0Ch], 0
0x45A964: neg     ecx
0x45A966: or      ecx, eax
0x45A968: push    ecx; Size
0x45A969: call    FormHeapAlloc
0x45A96E: mov     ecx, [esi+4]
0x45A971: add     ecx, ecx
0x45A973: add     ecx, ecx
0x45A975: push    ecx
0x45A976: push    0
0x45A978: push    eax
0x45A979: mov     [esi+8], eax
0x45A97C: call    __memset
0x45A981: add     esp, 10h
0x45A984: mov     dword ptr [esi], offset ??_7InteriorCellNewReferencesMap@@6B@; const InteriorCellNewReferencesMap::`vftable'
0x45A98A: mov     eax, esi
0x45A98C: pop     esi
0x45A98D: retn
