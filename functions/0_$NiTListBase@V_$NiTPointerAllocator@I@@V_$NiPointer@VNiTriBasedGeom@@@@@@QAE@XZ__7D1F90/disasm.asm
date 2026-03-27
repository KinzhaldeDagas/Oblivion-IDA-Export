0x7D1F90: test    [esp+arg_0], 1
0x7D1F95: push    esi
0x7D1F96: mov     esi, ecx
0x7D1F98: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiTriBasedGeom@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<NiTriBasedGeom>>::`vftable'
0x7D1F9E: jz      short loc_7D1FA9
0x7D1FA0: push    esi
0x7D1FA1: call    FormHeapFree
0x7D1FA6: add     esp, 4
0x7D1FA9: mov     eax, esi
0x7D1FAB: pop     esi
0x7D1FAC: retn    4
