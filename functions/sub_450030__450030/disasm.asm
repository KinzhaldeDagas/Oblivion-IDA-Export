0x450030: push    esi
0x450031: mov     esi, ecx
0x450033: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVTESFile@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,TESFile *>::`vftable'
0x450039: call    NiTMap_Clear
0x45003E: mov     eax, [esi+8]
0x450041: push    eax
0x450042: call    FormHeapFree
0x450047: add     esp, 4
0x45004A: pop     esi
0x45004B: retn
