0x707450: test    [esp+arg_0], 1
0x707455: push    esi
0x707456: mov     esi, ecx
0x707458: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiProperty@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<NiProperty>>::`vftable'
0x70745E: jz      short loc_707469
0x707460: push    esi
0x707461: call    FormHeapFree
0x707466: add     esp, 4
0x707469: mov     eax, esi
0x70746B: pop     esi
0x70746C: retn    4
