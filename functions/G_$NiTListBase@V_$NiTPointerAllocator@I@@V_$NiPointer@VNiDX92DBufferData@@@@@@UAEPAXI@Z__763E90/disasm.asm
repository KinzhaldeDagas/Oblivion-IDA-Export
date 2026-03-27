0x763E90: test    [esp+arg_0], 1
0x763E95: push    esi
0x763E96: mov     esi, ecx
0x763E98: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiDX92DBufferData@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<NiDX92DBufferData>>::`vftable'
0x763E9E: jz      short loc_763EA9
0x763EA0: push    esi
0x763EA1: call    FormHeapFree
0x763EA6: add     esp, 4
0x763EA9: mov     eax, esi
0x763EAB: pop     esi
0x763EAC: retn    4
