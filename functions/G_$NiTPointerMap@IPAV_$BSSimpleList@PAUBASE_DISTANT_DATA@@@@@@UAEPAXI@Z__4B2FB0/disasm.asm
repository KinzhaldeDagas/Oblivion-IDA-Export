0x4B2FB0: push    esi
0x4B2FB1: mov     esi, ecx
0x4B2FB3: call    ??1?$NiTPointerMap@IPAV?$BSSimpleList@PAUBASE_DISTANT_DATA@@@@@@UAE@XZ; NiTPointerMap<uint,BSSimpleList<BASE_DISTANT_DATA *> *>::~NiTPointerMap<uint,BSSimpleList<BASE_DISTANT_DATA *> *>(void)
0x4B2FB8: test    [esp+4+arg_0], 1
0x4B2FBD: jz      short loc_4B2FC8
0x4B2FBF: push    esi
0x4B2FC0: call    FormHeapFree
0x4B2FC5: add     esp, 4
0x4B2FC8: mov     eax, esi
0x4B2FCA: pop     esi
0x4B2FCB: retn    4
