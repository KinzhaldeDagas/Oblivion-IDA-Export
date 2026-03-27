0x450AC0: push    esi
0x450AC1: mov     esi, ecx
0x450AC3: call    ??1?$NiTPointerMap@IPAVTESFile@@@@UAE@XZ; NiTPointerMap<uint,TESFile *>::~NiTPointerMap<uint,TESFile *>(void)
0x450AC8: test    [esp+4+arg_0], 1
0x450ACD: jz      short loc_450AD8
0x450ACF: push    esi
0x450AD0: call    FormHeapFree
0x450AD5: add     esp, 4
0x450AD8: mov     eax, esi
0x450ADA: pop     esi
0x450ADB: retn    4
