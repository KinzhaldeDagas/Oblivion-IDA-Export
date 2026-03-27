0x475B40: push    esi
0x475B41: mov     esi, ecx
0x475B43: call    ??1?$NiTPointerMap@GPAVAnimSequenceBase@@@@UAE@XZ; NiTPointerMap<ushort,AnimSequenceBase *>::~NiTPointerMap<ushort,AnimSequenceBase *>(void)
0x475B48: test    [esp+4+arg_0], 1
0x475B4D: jz      short loc_475B58
0x475B4F: push    esi
0x475B50: call    FormHeapFree
0x475B55: add     esp, 4
0x475B58: mov     eax, esi
0x475B5A: pop     esi
0x475B5B: retn    4
