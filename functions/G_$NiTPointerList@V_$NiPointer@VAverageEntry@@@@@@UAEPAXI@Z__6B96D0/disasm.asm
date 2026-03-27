0x6B96D0: push    esi
0x6B96D1: mov     esi, ecx
0x6B96D3: call    ??1?$NiTPointerList@V?$NiPointer@VAverageEntry@@@@@@UAE@XZ; NiTPointerList<NiPointer<AverageEntry>>::~NiTPointerList<NiPointer<AverageEntry>>(void)
0x6B96D8: test    [esp+4+arg_0], 1
0x6B96DD: jz      short loc_6B96E8
0x6B96DF: push    esi
0x6B96E0: call    FormHeapFree
0x6B96E5: add     esp, 4
0x6B96E8: mov     eax, esi
0x6B96EA: pop     esi
0x6B96EB: retn    4
