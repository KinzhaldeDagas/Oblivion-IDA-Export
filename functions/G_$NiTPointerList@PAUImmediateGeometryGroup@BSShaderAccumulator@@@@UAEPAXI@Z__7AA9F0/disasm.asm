0x7AA9F0: push    esi
0x7AA9F1: mov     esi, ecx
0x7AA9F3: call    ??1?$NiTPointerList@PAUImmediateGeometryGroup@BSShaderAccumulator@@@@UAE@XZ; NiTPointerList<BSShaderAccumulator::ImmediateGeometryGroup *>::~NiTPointerList<BSShaderAccumulator::ImmediateGeometryGroup *>(void)
0x7AA9F8: test    [esp+4+arg_0], 1
0x7AA9FD: jz      short loc_7AAA08
0x7AA9FF: push    esi
0x7AAA00: call    FormHeapFree
0x7AAA05: add     esp, 4
0x7AAA08: mov     eax, esi
0x7AAA0A: pop     esi
0x7AAA0B: retn    4
