0x4B2FD0: push    esi
0x4B2FD1: mov     esi, ecx
0x4B2FD3: call    ??1?$NiTPointerMap@IPAVTESTextureList@@@@UAE@XZ; NiTPointerMap<uint,TESTextureList *>::~NiTPointerMap<uint,TESTextureList *>(void)
0x4B2FD8: test    [esp+4+arg_0], 1
0x4B2FDD: jz      short loc_4B2FE8
0x4B2FDF: push    esi
0x4B2FE0: call    FormHeapFree
0x4B2FE5: add     esp, 4
0x4B2FE8: mov     eax, esi
0x4B2FEA: pop     esi
0x4B2FEB: retn    4
