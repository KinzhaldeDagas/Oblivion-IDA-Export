0x4B9D70: push    esi
0x4B9D71: mov     esi, ecx
0x4B9D73: mov     eax, [esi+4]
0x4B9D76: push    eax
0x4B9D77: mov     dword ptr [esi], offset ??_7?$NiTArray@I@@6B@; const NiTArray<uint>::`vftable'
0x4B9D7D: call    FormHeapFree
0x4B9D82: add     esp, 4
0x4B9D85: test    [esp+4+arg_0], 1
0x4B9D8A: jz      short loc_4B9D95
0x4B9D8C: push    esi
0x4B9D8D: call    FormHeapFree
0x4B9D92: add     esp, 4
0x4B9D95: mov     eax, esi
0x4B9D97: pop     esi
0x4B9D98: retn    4
