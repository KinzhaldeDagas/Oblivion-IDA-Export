0x7AA990: push    esi
0x7AA991: mov     esi, ecx
0x7AA993: call    ??1?$NiTPointerList@PAUGeometryGroup@BSShaderAccumulator@@@@UAE@XZ; NiTPointerList<BSShaderAccumulator::GeometryGroup *>::~NiTPointerList<BSShaderAccumulator::GeometryGroup *>(void)
0x7AA998: test    [esp+4+arg_0], 1
0x7AA99D: jz      short loc_7AA9A8
0x7AA99F: push    esi
0x7AA9A0: call    FormHeapFree
0x7AA9A5: add     esp, 4
0x7AA9A8: mov     eax, esi
0x7AA9AA: pop     esi
0x7AA9AB: retn    4
