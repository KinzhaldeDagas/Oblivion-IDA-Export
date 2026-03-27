0x7AAA10: push    esi
0x7AAA11: mov     esi, ecx
0x7AAA13: call    ??1?$NiTPointerList@PAVShadowVolumeRPList@BSShaderAccumulator@@@@UAE@XZ; NiTPointerList<BSShaderAccumulator::ShadowVolumeRPList *>::~NiTPointerList<BSShaderAccumulator::ShadowVolumeRPList *>(void)
0x7AAA18: test    [esp+4+arg_0], 1
0x7AAA1D: jz      short loc_7AAA28
0x7AAA1F: push    esi
0x7AAA20: call    FormHeapFree
0x7AAA25: add     esp, 4
0x7AAA28: mov     eax, esi
0x7AAA2A: pop     esi
0x7AAA2B: retn    4
