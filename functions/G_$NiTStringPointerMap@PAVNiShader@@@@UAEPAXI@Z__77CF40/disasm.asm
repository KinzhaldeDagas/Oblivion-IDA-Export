0x77CF40: push    esi
0x77CF41: mov     esi, ecx
0x77CF43: call    ??1?$NiTStringPointerMap@PAVNiShader@@@@UAE@XZ; NiTStringPointerMap<NiShader *>::~NiTStringPointerMap<NiShader *>(void)
0x77CF48: test    [esp+4+arg_0], 1
0x77CF4D: jz      short loc_77CF58
0x77CF4F: push    esi
0x77CF50: call    FormHeapFree
0x77CF55: add     esp, 4
0x77CF58: mov     eax, esi
0x77CF5A: pop     esi
0x77CF5B: retn    4
