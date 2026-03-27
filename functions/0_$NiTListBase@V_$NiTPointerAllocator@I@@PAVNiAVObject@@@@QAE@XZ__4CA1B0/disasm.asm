0x4CA1B0: test    [esp+arg_0], 1
0x4CA1B5: push    esi
0x4CA1B6: mov     esi, ecx
0x4CA1B8: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiAVObject@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiAVObject *>::`vftable'
0x4CA1BE: jz      short loc_4CA1C9
0x4CA1C0: push    esi
0x4CA1C1: call    FormHeapFree
0x4CA1C6: add     esp, 4
0x4CA1C9: mov     eax, esi
0x4CA1CB: pop     esi
0x4CA1CC: retn    4
