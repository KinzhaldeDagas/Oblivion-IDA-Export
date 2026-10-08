0x863430: push    esi
0x863431: mov     esi, ecx
0x863433: call    ??0BSShaderPPLightingProperty@@QAE@XZ; Verified (Oblivion): BSShaderPPLightingProperty constructor initializes the reference-counted TextureEffectData slot at this+0xE0 (DWORD index 0x38) to null. TextureEffectProperty_SetData replaces that same offset; BSShaderPPLightingProperty destructor releases and clears it before chaining to BSShaderLightingProperty. Fallout's typed property layout calls the member spTexEffectData at the same +0xE0 offset.
0x863438: fldz
0x86343A: mov     dword ptr [esi], offset Lighting30ShaderProperty_vftable; Primary live-object creation route: store exact Lighting30ShaderProperty vptr A9576C after the PP-lighting base constructor.
0x863440: fst     dword ptr [esi+0F0h]
0x863446: fst     dword ptr [esi+0F4h]
0x86344C: mov     eax, esi
0x86344E: fst     dword ptr [esi+0F8h]
0x863454: fstp    dword ptr [esi+0FCh]
0x86345A: mov     dword ptr [esi+104h], 0
0x863464: pop     esi
0x863465: retn
