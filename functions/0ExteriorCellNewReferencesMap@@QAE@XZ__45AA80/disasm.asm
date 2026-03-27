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
0x45AAC4: mov     dword ptr [esi], offset ??_7ExteriorCellNewReferencesMap@@6B@; const ExteriorCellNewReferencesMap::`vftable'
0x45AACA: mov     eax, esi
0x45AACC: pop     esi
0x45AACD: retn
