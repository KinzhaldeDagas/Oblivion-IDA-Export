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
0x45A984: mov     dword ptr [esi], offset ??_7InteriorCellNewReferencesMap@@6B@; Verified vtable layout from raw RTTI and function pointers: +0x0 Deleting destructor, +0x4 key hash, +0x8 key equality, +0xC set key/value, +0x10 clear value no-op, +0x14 node-pool allocate, +0x18 node-pool release. Fallout constructor homologs: interior 82601B90, exterior 82601C58; both use 37 buckets, matching Oblivion constructors 45A940/45AA80. Fallout nested-list ownership and exterior record payload differ.
0x45A98A: mov     eax, esi
0x45A98C: pop     esi
0x45A98D: retn
