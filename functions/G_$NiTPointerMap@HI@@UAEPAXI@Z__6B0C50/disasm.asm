0x6B0C50: push    esi
0x6B0C51: mov     esi, ecx
0x6B0C53: call    ??1?$NiTPointerMap@HI@@UAE@XZ; NiTPointerMap<int,uint>::~NiTPointerMap<int,uint>(void)
0x6B0C58: test    [esp+4+arg_0], 1
0x6B0C5D: jz      short loc_6B0C68
0x6B0C5F: push    esi
0x6B0C60: call    FormHeapFree
0x6B0C65: add     esp, 4
0x6B0C68: mov     eax, esi
0x6B0C6A: pop     esi
0x6B0C6B: retn    4
