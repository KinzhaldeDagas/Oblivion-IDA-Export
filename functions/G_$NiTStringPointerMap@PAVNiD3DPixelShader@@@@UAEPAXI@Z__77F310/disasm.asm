0x77F310: push    esi
0x77F311: mov     esi, ecx
0x77F313: call    ??1?$NiTStringPointerMap@PAVNiD3DPixelShader@@@@UAE@XZ; NiTStringPointerMap<NiD3DPixelShader *>::~NiTStringPointerMap<NiD3DPixelShader *>(void)
0x77F318: test    [esp+4+arg_0], 1
0x77F31D: jz      short loc_77F328
0x77F31F: push    esi
0x77F320: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x77F325: add     esp, 4
0x77F328: mov     eax, esi
0x77F32A: pop     esi
0x77F32B: retn    4
