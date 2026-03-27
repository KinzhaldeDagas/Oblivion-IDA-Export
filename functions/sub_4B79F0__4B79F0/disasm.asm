0x4B79F0: push    esi
0x4B79F1: mov     esi, ecx
0x4B79F3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESObjectCELL@@_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESObjectCELL *,bool>::`vftable'
0x4B79F9: call    NiTMap_Clear
0x4B79FE: mov     eax, [esi+8]
0x4B7A01: push    eax
0x4B7A02: call    FormHeapFree
0x4B7A07: add     esp, 4
0x4B7A0A: test    [esp+4+arg_0], 1
0x4B7A0F: jz      short loc_4B7A1A
0x4B7A11: push    esi
0x4B7A12: call    FormHeapFree
0x4B7A17: add     esp, 4
0x4B7A1A: mov     eax, esi
0x4B7A1C: pop     esi
0x4B7A1D: retn    4
