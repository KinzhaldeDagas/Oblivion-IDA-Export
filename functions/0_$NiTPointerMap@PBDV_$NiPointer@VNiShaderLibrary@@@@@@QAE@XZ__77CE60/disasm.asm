0x77CE60: push    esi
0x77CE61: mov     esi, ecx
0x77CE63: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PBDV?$NiPointer@VNiShaderLibrary@@@@@@6B@; const NiTPointerMap<char const *,NiPointer<NiShaderLibrary>>::`vftable'
0x77CE69: call    NiTMap_Clear
0x77CE6E: mov     ecx, esi
0x77CE70: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDV?$NiPointer@VNiShaderLibrary@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiPointer<NiShaderLibrary>>::`vftable'
0x77CE76: call    NiTMap_Clear
0x77CE7B: mov     eax, [esi+8]
0x77CE7E: push    eax
0x77CE7F: call    FormHeapFree
0x77CE84: add     esp, 4
0x77CE87: test    [esp+4+arg_0], 1
0x77CE8C: jz      short loc_77CE97
0x77CE8E: push    esi
0x77CE8F: call    FormHeapFree
0x77CE94: add     esp, 4
0x77CE97: mov     eax, esi
0x77CE99: pop     esi
0x77CE9A: retn    4
