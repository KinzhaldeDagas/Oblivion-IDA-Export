0x77EA10: mov     eax, ds:0B428A4h
0x77EA15: test    eax, eax
0x77EA17: jnz     short locret_77EA3B
0x77EA19: push    50h ; 'P'; Size
0x77EA1B: call    FormHeapAlloc
0x77EA20: add     esp, 4
0x77EA23: test    eax, eax
0x77EA25: jz      short loc_77EA34
0x77EA27: mov     ecx, eax; this
0x77EA29: call    ??0NiDynamicGeometryGroup@@QAE@XZ; NiDynamicGeometryGroup::NiDynamicGeometryGroup(void)
0x77EA2E: mov     ds:0B428A4h, eax
0x77EA33: retn
0x77EA34: xor     eax, eax
0x77EA36: mov     ds:0B428A4h, eax
0x77EA3B: retn
