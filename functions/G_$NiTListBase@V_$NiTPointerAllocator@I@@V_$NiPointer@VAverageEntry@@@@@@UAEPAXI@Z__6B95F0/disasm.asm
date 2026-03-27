0x6B95F0: test    [esp+arg_0], 1
0x6B95F5: push    esi
0x6B95F6: mov     esi, ecx
0x6B95F8: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VAverageEntry@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<AverageEntry>>::`vftable'
0x6B95FE: jz      short loc_6B9609
0x6B9600: push    esi
0x6B9601: call    FormHeapFree
0x6B9606: add     esp, 4
0x6B9609: mov     eax, esi
0x6B960B: pop     esi
0x6B960C: retn    4
