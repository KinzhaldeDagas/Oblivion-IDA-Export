0x863700: push    esi
0x863701: mov     esi, ecx
0x863703: call    Lighting30ShaderProperty_Destructor; Oblivion Lighting30ShaderProperty destructor. Reasserts the exact A9576C derived vptr during derived cleanup, releases/nulls the +0x104 reference member, then invokes BSShaderPPLightingProperty destruction. The accumulator cannot encounter this transition while traversing the live property-owned pass list.
0x863708: test    byte ptr [esp+4+deleteFlags], 1
0x86370D: jz      short loc_863718
0x86370F: push    esi
0x863710: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x863715: add     esp, 4
0x863718: mov     eax, esi
0x86371A: pop     esi
0x86371B: retn    4
