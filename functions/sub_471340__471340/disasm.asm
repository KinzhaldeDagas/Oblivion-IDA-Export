0x471340: push    esi
0x471341: mov     esi, ecx
0x471343: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@GPAVAnimSequenceBase@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,ushort,AnimSequenceBase *>::`vftable'
0x471349: call    NiTMap_Clear
0x47134E: mov     eax, [esi+8]
0x471351: push    eax
0x471352: call    FormHeapFree
0x471357: add     esp, 4
0x47135A: pop     esi
0x47135B: retn
