0x452BC0: push    esi
0x452BC1: mov     esi, ecx
0x452BC3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@PAUExteriorCellReferenceData@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<ExteriorCellReferenceData *> *>::`vftable'
0x452BC9: call    NiTMap_Clear
0x452BCE: mov     eax, [esi+8]
0x452BD1: push    eax
0x452BD2: call    FormHeapFree
0x452BD7: add     esp, 4
0x452BDA: test    [esp+4+arg_0], 1
0x452BDF: jz      short loc_452BEA
0x452BE1: push    esi
0x452BE2: call    FormHeapFree
0x452BE7: add     esp, 4
0x452BEA: mov     eax, esi
0x452BEC: pop     esi
0x452BED: retn    4
