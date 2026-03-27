0x77C720: push    esi
0x77C721: mov     esi, ecx
0x77C723: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDV?$NiPointer@VNiShaderLibrary@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiPointer<NiShaderLibrary>>::`vftable'
0x77C729: call    NiTMap_Clear
0x77C72E: mov     eax, [esi+8]
0x77C731: push    eax
0x77C732: call    FormHeapFree
0x77C737: add     esp, 4
0x77C73A: test    [esp+4+arg_0], 1
0x77C73F: jz      short loc_77C74A
0x77C741: push    esi
0x77C742: call    FormHeapFree
0x77C747: add     esp, 4
0x77C74A: mov     eax, esi
0x77C74C: pop     esi
0x77C74D: retn    4
