0x506EE0: test    [esp+arg_0], 1
0x506EE5: push    esi
0x506EE6: mov     esi, ecx
0x506EE8: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiSourceTexture@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<NiSourceTexture>>::`vftable'
0x506EEE: jz      short loc_506EF9
0x506EF0: push    esi
0x506EF1: call    FormHeapFree
0x506EF6: add     esp, 4
0x506EF9: mov     eax, esi
0x506EFB: pop     esi
0x506EFC: retn    4
