0x6AF820: push    esi
0x6AF821: mov     esi, ecx
0x6AF823: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@HI@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,uint>::`vftable'
0x6AF829: call    NiTMap_Clear
0x6AF82E: mov     eax, [esi+8]
0x6AF831: push    eax
0x6AF832: call    FormHeapFree
0x6AF837: add     esp, 4
0x6AF83A: test    [esp+4+arg_0], 1
0x6AF83F: jz      short loc_6AF84A
0x6AF841: push    esi
0x6AF842: call    FormHeapFree
0x6AF847: add     esp, 4
0x6AF84A: mov     eax, esi
0x6AF84C: pop     esi
0x6AF84D: retn    4
