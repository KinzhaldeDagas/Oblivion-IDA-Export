0x7DAF10: push    esi
0x7DAF11: mov     esi, ecx
0x7DAF13: call    ??1?$NiTPointerMap@PBDPAVShaderBufferEntry@@@@UAE@XZ; NiTPointerMap<char const *,ShaderBufferEntry *>::~NiTPointerMap<char const *,ShaderBufferEntry *>(void)
0x7DAF18: test    [esp+4+arg_0], 1
0x7DAF1D: jz      short loc_7DAF28
0x7DAF1F: push    esi
0x7DAF20: call    FormHeapFree
0x7DAF25: add     esp, 4
0x7DAF28: mov     eax, esi
0x7DAF2A: pop     esi
0x7DAF2B: retn    4
