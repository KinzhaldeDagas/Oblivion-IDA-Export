0x7EFCF0: push    esi
0x7EFCF1: mov     esi, ecx
0x7EFCF3: call    ??1PrecipitationShaderProperty@@UAE@XZ; PrecipitationShaderProperty::~PrecipitationShaderProperty(void)
0x7EFCF8: test    byte ptr [esp+4+arg_0], 1
0x7EFCFD: jz      short loc_7EFD08
0x7EFCFF: push    esi
0x7EFD00: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7EFD05: add     esp, 4
0x7EFD08: mov     eax, esi
0x7EFD0A: pop     esi
0x7EFD0B: retn    4
