0x7B27A0: push    esi
0x7B27A1: mov     esi, ecx
0x7B27A3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IV?$NiPointer@VCachedGeometry@DistantLODShaderProperty@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiPointer<DistantLODShaderProperty::CachedGeometry>>::`vftable'
0x7B27A9: call    NiTMap_Clear
0x7B27AE: mov     eax, [esi+8]
0x7B27B1: push    eax
0x7B27B2: call    FormHeapFree
0x7B27B7: add     esp, 4
0x7B27BA: test    [esp+4+arg_0], 1
0x7B27BF: jz      short loc_7B27CA
0x7B27C1: push    esi
0x7B27C2: call    FormHeapFree
0x7B27C7: add     esp, 4
0x7B27CA: mov     eax, esi
0x7B27CC: pop     esi
0x7B27CD: retn    4
