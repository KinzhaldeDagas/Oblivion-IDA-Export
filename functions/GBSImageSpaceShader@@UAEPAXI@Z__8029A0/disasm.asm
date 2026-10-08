0x8029A0: push    esi
0x8029A1: mov     esi, ecx
0x8029A3: call    ??1BSImageSpaceShader@@UAE@XZ; MoonSugarEffect decode: BSImageSpaceShader dtor releases source BSRenderedTexture at +0x7C, clears +0x80..+0x8C, then calls BSShader dtor.
0x8029A8: test    byte ptr [esp+4+arg_0], 1
0x8029AD: jz      short loc_8029B8
0x8029AF: push    esi
0x8029B0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x8029B5: add     esp, 4
0x8029B8: mov     eax, esi
0x8029BA: pop     esi
0x8029BB: retn    4
