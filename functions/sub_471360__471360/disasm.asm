0x471360: push    esi; Deleting destructor for the UInt16-to-AnimSequenceBase map: clears entries, frees buckets, and conditionally frees the map object.
0x471361: mov     esi, ecx
0x471363: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@GPAVAnimSequenceBase@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,ushort,AnimSequenceBase *>::`vftable'
0x471369: call    NiTMap_Clear
0x47136E: mov     eax, [esi+8]
0x471371: push    eax
0x471372: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x471377: add     esp, 4
0x47137A: test    [esp+4+arg_0], 1
0x47137F: jz      short loc_47138A
0x471381: push    esi
0x471382: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x471387: add     esp, 4
0x47138A: mov     eax, esi
0x47138C: pop     esi
0x47138D: retn    4
