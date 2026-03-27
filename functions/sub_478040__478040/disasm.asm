0x478040: push    esi
0x478041: mov     esi, ecx
0x478043: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiObject@@_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiObject *,bool>::`vftable'
0x478049: call    NiTMap_Clear
0x47804E: mov     eax, [esi+8]
0x478051: push    eax
0x478052: call    FormHeapFree
0x478057: add     esp, 4
0x47805A: test    [esp+4+arg_0], 1
0x47805F: jz      short loc_47806A
0x478061: push    esi
0x478062: call    FormHeapFree
0x478067: add     esp, 4
0x47806A: mov     eax, esi
0x47806C: pop     esi
0x47806D: retn    4
