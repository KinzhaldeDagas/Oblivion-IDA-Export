0x4A1D20: push    esi
0x4A1D21: mov     esi, ecx
0x4A1D23: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDV?$NiPointer@VNiTexture@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiPointer<NiTexture>>::`vftable'
0x4A1D29: call    NiTMap_Clear
0x4A1D2E: mov     eax, [esi+8]
0x4A1D31: push    eax
0x4A1D32: call    FormHeapFree
0x4A1D37: add     esp, 4
0x4A1D3A: test    [esp+4+arg_0], 1
0x4A1D3F: jz      short loc_4A1D4A
0x4A1D41: push    esi
0x4A1D42: call    FormHeapFree
0x4A1D47: add     esp, 4
0x4A1D4A: mov     eax, esi
0x4A1D4C: pop     esi
0x4A1D4D: retn    4
