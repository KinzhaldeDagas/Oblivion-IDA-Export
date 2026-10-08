0x6A7E70: push    esi
0x6A7E71: mov     esi, ecx
0x6A7E73: call    sub_6A7830
0x6A7E78: mov     eax, [esi+0Ch]
0x6A7E7B: mov     ecx, [eax+1Ch]
0x6A7E7E: mov     edx, [ecx+78h]
0x6A7E81: mov     eax, [esi+48h]
0x6A7E84: push    edx; effectShader
0x6A7E85: push    eax; targetReference
0x6A7E86: mov     ecx, (offset qword_B3BB2C+1D4h); this
0x6A7E8B: call    ActorProcessManager_FinishShaderEffectsForTarget; Verified (Oblivion): walks the temp-effect RTTI chain to NiRTTI_MagicShaderHitEffect and marks matching targetReference/TESEffectShader effects finished.
0x6A7E90: mov     ecx, esi
0x6A7E92: pop     esi
0x6A7E93: jmp     ValueModifierEffect_Remove
