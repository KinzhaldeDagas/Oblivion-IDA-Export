0x4F0E50: push    esi
0x4F0E51: mov     esi, ecx
0x4F0E53: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@HPAVTESObjectCELL@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,TESObjectCELL *>::`vftable'
0x4F0E59: call    NiTMap_Clear
0x4F0E5E: mov     eax, [esi+8]
0x4F0E61: push    eax
0x4F0E62: call    FormHeapFree
0x4F0E67: add     esp, 4
0x4F0E6A: test    [esp+4+arg_0], 1
0x4F0E6F: jz      short loc_4F0E7A
0x4F0E71: push    esi
0x4F0E72: call    FormHeapFree
0x4F0E77: add     esp, 4
0x4F0E7A: mov     eax, esi
0x4F0E7C: pop     esi
0x4F0E7D: retn    4
