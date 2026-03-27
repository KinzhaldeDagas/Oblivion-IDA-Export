0x77CE00: push    esi
0x77CE01: mov     esi, ecx
0x77CE03: call    ??1?$NiTStringMap@PAVNiD3DGlobalConstantEntry@@@@UAE@XZ; NiTStringMap<NiD3DGlobalConstantEntry *>::~NiTStringMap<NiD3DGlobalConstantEntry *>(void)
0x77CE08: test    [esp+4+arg_0], 1
0x77CE0D: jz      short loc_77CE18
0x77CE0F: push    esi
0x77CE10: call    FormHeapFree
0x77CE15: add     esp, 4
0x77CE18: mov     eax, esi
0x77CE1A: pop     esi
0x77CE1B: retn    4
