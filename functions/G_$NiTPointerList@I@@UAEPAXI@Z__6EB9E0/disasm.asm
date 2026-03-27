0x6EB9E0: push    esi
0x6EB9E1: mov     esi, ecx
0x6EB9E3: call    ??1?$NiTPointerList@I@@UAE@XZ; NiTPointerList<uint>::~NiTPointerList<uint>(void)
0x6EB9E8: test    [esp+4+arg_0], 1
0x6EB9ED: jz      short loc_6EB9F8
0x6EB9EF: push    esi
0x6EB9F0: call    FormHeapFree
0x6EB9F5: add     esp, 4
0x6EB9F8: mov     eax, esi
0x6EB9FA: pop     esi
0x6EB9FB: retn    4
