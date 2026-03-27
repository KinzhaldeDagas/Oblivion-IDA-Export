0x77F4E0: push    esi
0x77F4E1: mov     esi, ecx
0x77F4E3: call    ??1?$NiTStringPointerMap@PAVNiD3DShaderProgramCreator@@@@UAE@XZ; NiTStringPointerMap<NiD3DShaderProgramCreator *>::~NiTStringPointerMap<NiD3DShaderProgramCreator *>(void)
0x77F4E8: test    [esp+4+arg_0], 1
0x77F4ED: jz      short loc_77F4F8
0x77F4EF: push    esi
0x77F4F0: call    FormHeapFree
0x77F4F5: add     esp, 4
0x77F4F8: mov     eax, esi
0x77F4FA: pop     esi
0x77F4FB: retn    4
