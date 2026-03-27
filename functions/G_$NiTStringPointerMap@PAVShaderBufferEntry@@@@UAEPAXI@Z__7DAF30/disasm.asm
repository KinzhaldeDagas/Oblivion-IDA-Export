0x7DAF30: push    esi
0x7DAF31: mov     esi, ecx
0x7DAF33: call    ??1?$NiTStringPointerMap@PAVShaderBufferEntry@@@@UAE@XZ; NiTStringPointerMap<ShaderBufferEntry *>::~NiTStringPointerMap<ShaderBufferEntry *>(void)
0x7DAF38: test    [esp+4+arg_0], 1
0x7DAF3D: jz      short loc_7DAF48
0x7DAF3F: push    esi
0x7DAF40: call    FormHeapFree
0x7DAF45: add     esp, 4
0x7DAF48: mov     eax, esi
0x7DAF4A: pop     esi
0x7DAF4B: retn    4
