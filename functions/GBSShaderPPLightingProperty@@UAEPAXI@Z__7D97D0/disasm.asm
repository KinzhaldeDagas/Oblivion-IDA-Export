0x7D97D0: push    esi
0x7D97D1: mov     esi, ecx
0x7D97D3: call    ??1BSShaderPPLightingProperty@@UAE@XZ; Verified (Oblivion): BSShaderPPLightingProperty destructor releases and clears the reference-counted pointer at this+0xE0 (DWORD index 0x38), matching TextureEffectProperty_SetData and the viewer's "spTexEffectData" label. Fallout's CopyToMembers copies a NiPointer<BSShaderPPLightingProperty::TextureEffectData> at +0xE0; equivalent Oblivion clone retention is Probable but its mirror has not yet been located.
0x7D97D8: test    byte ptr [esp+4+arg_0], 1
0x7D97DD: jz      short loc_7D97E8
0x7D97DF: push    esi
0x7D97E0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7D97E5: add     esp, 4
0x7D97E8: mov     eax, esi
0x7D97EA: pop     esi
0x7D97EB: retn    4
