0x77F4C0: push    esi
0x77F4C1: mov     esi, ecx
0x77F4C3: call    ??1?$NiTStringPointerMap@PAVNiD3DVertexShader@@@@UAE@XZ; NiTStringPointerMap<NiD3DVertexShader *>::~NiTStringPointerMap<NiD3DVertexShader *>(void)
0x77F4C8: test    [esp+4+arg_0], 1
0x77F4CD: jz      short loc_77F4D8
0x77F4CF: push    esi
0x77F4D0: call    FormHeapFree
0x77F4D5: add     esp, 4
0x77F4D8: mov     eax, esi
0x77F4DA: pop     esi
0x77F4DB: retn    4
