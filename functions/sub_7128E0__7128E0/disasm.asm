0x7128E0: push    esi
0x7128E1: mov     esi, ecx
0x7128E3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDG@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,ushort>::`vftable'
0x7128E9: call    NiTMap_Clear
0x7128EE: mov     eax, [esi+8]
0x7128F1: push    eax
0x7128F2: call    FormHeapFree
0x7128F7: add     esp, 4
0x7128FA: test    [esp+4+arg_0], 1
0x7128FF: jz      short loc_71290A
0x712901: push    esi
0x712902: call    FormHeapFree
0x712907: add     esp, 4
0x71290A: mov     eax, esi
0x71290C: pop     esi
0x71290D: retn    4
