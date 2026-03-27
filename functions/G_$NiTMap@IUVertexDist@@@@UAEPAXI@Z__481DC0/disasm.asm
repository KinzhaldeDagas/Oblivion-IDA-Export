0x481DC0: push    esi
0x481DC1: mov     esi, ecx
0x481DC3: call    ??1?$NiTMap@IUVertexDist@@@@UAE@XZ; NiTMap<uint,VertexDist>::~NiTMap<uint,VertexDist>(void)
0x481DC8: test    [esp+4+arg_0], 1
0x481DCD: jz      short loc_481DD8
0x481DCF: push    esi
0x481DD0: call    FormHeapFree
0x481DD5: add     esp, 4
0x481DD8: mov     eax, esi
0x481DDA: pop     esi
0x481DDB: retn    4
