0x7128B0: push    esi
0x7128B1: mov     esi, ecx
0x7128B3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDP6APAVNiObject@@XZ@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiObject * (*)(void)>::`vftable'
0x7128B9: call    NiTMap_Clear
0x7128BE: mov     eax, [esi+8]
0x7128C1: push    eax
0x7128C2: call    FormHeapFree
0x7128C7: add     esp, 4
0x7128CA: test    [esp+4+arg_0], 1
0x7128CF: jz      short loc_7128DA
0x7128D1: push    esi
0x7128D2: call    FormHeapFree
0x7128D7: add     esp, 4
0x7128DA: mov     eax, esi
0x7128DC: pop     esi
0x7128DD: retn    4
