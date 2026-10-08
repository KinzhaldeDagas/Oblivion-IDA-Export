0x471340: push    esi; Destroys the UInt16-to-AnimSequenceBase map contents, then frees its bucket array. Does not free the map object itself.
0x471341: mov     esi, ecx
0x471343: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@GPAVAnimSequenceBase@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,ushort,AnimSequenceBase *>::`vftable'
0x471349: call    NiTMap_Clear
0x47134E: mov     eax, [esi+8]
0x471351: push    eax
0x471352: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x471357: add     esp, 4
0x47135A: pop     esi
0x47135B: retn
