0x45AA80: push    esi
0x45AA81: mov     esi, ecx
0x45AA83: xor     ecx, ecx
0x45AA85: mov     eax, 25h ; '%'
0x45AA8A: mov     [esi+4], eax
0x45AA8D: mov     edx, 4
0x45AA92: mul     edx
0x45AA94: seto    cl
0x45AA97: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@PAUExteriorCellReferenceData@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<ExteriorCellReferenceData *> *>::`vftable'
0x45AA9D: mov     dword ptr [esi+0Ch], 0
0x45AAA4: neg     ecx
0x45AAA6: or      ecx, eax
0x45AAA8: push    ecx; Size
0x45AAA9: call    FormHeapAlloc
0x45AAAE: mov     ecx, [esi+4]
0x45AAB1: add     ecx, ecx
0x45AAB3: add     ecx, ecx
0x45AAB5: push    ecx
0x45AAB6: push    0
0x45AAB8: push    eax
0x45AAB9: mov     [esi+8], eax
0x45AABC: call    __memset
0x45AAC1: add     esp, 10h
0x45AAC4: mov     dword ptr [esi], offset ??_7ExteriorCellNewReferencesMap@@6B@; Verified vtable layout from raw RTTI and function pointers: +0x0 Deleting destructor, +0x4 key hash, +0x8 key equality, +0xC set key/value, +0x10 clear value no-op, +0x14 node-pool allocate, +0x18 node-pool release. Fallout constructor homologs: interior 82601B90, exterior 82601C58; both use 37 buckets, matching Oblivion constructors 45A940/45AA80. Fallout nested-list ownership and exterior record payload differ.
0x45AACA: mov     eax, esi
0x45AACC: pop     esi
0x45AACD: retn
