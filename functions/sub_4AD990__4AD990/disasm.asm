0x4AD990: push    ebx; Verified (Oblivion): constructs a ParticleShaderProperty from the TESEffectShader and selected visual nodes, configures it with a NiSourceTexture*, initializes its animation time, and returns the property retained by MagicShaderHitEffect +0x3C.
0x4AD991: mov     ebx, [esp+4+sourceTexture]
0x4AD995: test    ebx, ebx
0x4AD997: push    edi
0x4AD998: mov     edi, ecx
0x4AD99A: jz      short loc_4AD9D1
0x4AD99C: mov     eax, [esp+8+secondaryNode]
0x4AD9A0: mov     ecx, [esp+8+targetNode]
0x4AD9A4: push    esi
0x4AD9A5: push    eax; secondaryNode
0x4AD9A6: push    ecx; targetNode
0x4AD9A7: call    NiNode_CreateAttachedParticleShaderProperty; Verified (Oblivion): clones and attaches the effect's scenegraph property, then returns it only when it is ParticleShaderProperty (virtual subtype ID 0xE). This supplies the concrete type stored at MagicShaderHitEffect +0x3C.
0x4AD9AC: add     esp, 8
0x4AD9AF: mov     esi, eax
0x4AD9B1: push    ebx; sourceTexture
0x4AD9B2: push    esi; property
0x4AD9B3: mov     ecx, edi; this
0x4AD9B5: call    TESEffectShader_ConfigureVisualProperty; Verified (Oblivion): maps TESEffectShaderData fields into ParticleShaderProperty parameters and retains a NiSourceTexture*. The member labels in TESEffectShaderData are Probable correspondences to Fallout's named fields, corroborated by these direct Oblivion copies and the initializer.
0x4AD9BA: fld     [esp+0Ch+elapsedSeconds]
0x4AD9BE: push    ecx
0x4AD9BF: mov     ecx, esi; this
0x4AD9C1: fstp    [esp+10h+newTime]; newTime
0x4AD9C4: call    ParticleShaderProperty_ResetParticleStateAtTime; Verified (Oblivion): resets every 0x20-byte particle slot to the inactive sentinel, seeds per-slot lifetime factors from fParticleLifetime_84/fParticleLifeVar_88, sets activeParticleCount_7C to zero, and initializes simulationTime_F8 to newTime. Fallout's RewindTimer instead shifts birth times of already active particles; the lifecycle behavior diverges.
0x4AD9C9: mov     eax, esi
0x4AD9CB: pop     esi
0x4AD9CC: pop     edi
0x4AD9CD: pop     ebx
0x4AD9CE: retn    10h
0x4AD9D1: pop     edi
0x4AD9D2: xor     eax, eax
0x4AD9D4: pop     ebx
0x4AD9D5: retn    10h
