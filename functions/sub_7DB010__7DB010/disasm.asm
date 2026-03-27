0x7DB010: push    esi
0x7DB011: mov     esi, ecx
0x7DB013: mov     eax, [esi]
0x7DB015: test    eax, eax
0x7DB017: jz      short loc_7DB028
0x7DB019: push    eax
0x7DB01A: call    FormHeapFree
0x7DB01F: add     esp, 4
0x7DB022: mov     dword ptr [esi], 0
0x7DB028: mov     eax, [esi+4]
0x7DB02B: test    eax, eax
0x7DB02D: jz      short loc_7DB03F
0x7DB02F: push    eax
0x7DB030: call    FormHeapFree
0x7DB035: add     esp, 4
0x7DB038: mov     dword ptr [esi+4], 0
0x7DB03F: lea     ecx, [esi+8]
0x7DB042: pop     esi
0x7DB043: jmp     ??1?$NiTStringPointerMap@PAVShaderBufferEntry@@@@UAE@XZ; NiTStringPointerMap<ShaderBufferEntry *>::~NiTStringPointerMap<ShaderBufferEntry *>(void)
