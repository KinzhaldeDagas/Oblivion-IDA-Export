0x4ACFF0: push    esi
0x4ACFF1: mov     esi, ecx
0x4ACFF3: lea     ecx, [esi+18h]; this
0x4ACFF6: call    TESEffectShaderData_InitializeDefaults; Verified (Oblivion): initializes the 0xE0-byte TESEffectShaderData block at TESEffectShader+0x18, including cFlags, blend defaults, particle lifetimes/velocity/scale/colors, and the byte/float values copied by TESEffectShader_ConfigureVisualProperty. Probable member names come from the matching Fallout EffectShaderData layout; the defaults and offsets are directly corroborated in Oblivion.
0x4ACFFB: mov     ecx, esi
0x4ACFFD: pop     esi
0x4ACFFE: jmp     j_TESForm_InitializeComponents
