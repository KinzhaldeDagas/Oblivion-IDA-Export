0x7B3BA0: push    esi
0x7B3BA1: mov     esi, ecx
0x7B3BA3: call    ??1?$NiTPointerMap@IPAVCachedDistantLOD@DistantLODShaderProperty@@@@UAE@XZ; NiTPointerMap<uint,DistantLODShaderProperty::CachedDistantLOD *>::~NiTPointerMap<uint,DistantLODShaderProperty::CachedDistantLOD *>(void)
0x7B3BA8: test    [esp+4+arg_0], 1
0x7B3BAD: jz      short loc_7B3BB8
0x7B3BAF: push    esi
0x7B3BB0: call    FormHeapFree
0x7B3BB5: add     esp, 4
0x7B3BB8: mov     eax, esi
0x7B3BBA: pop     esi
0x7B3BBB: retn    4
