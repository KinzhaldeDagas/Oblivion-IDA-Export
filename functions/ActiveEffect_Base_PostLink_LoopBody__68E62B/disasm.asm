0x68E62B: mov     edi, [esi]; Verified BSTempEffect ownership handoff after load: each +0x84 postLink callback receives owner ActiveEffect, linkContext, and null fallback; ActorProcessManager_RegisterTempEffect increments its refcount and inserts it. ActiveEffect::~ActiveEffect later clears ownerActiveEffect/sets bFinished and frees only its association nodes; the manager releases its own object reference after Update returns false or its parent cell unloads.
0x68E62D: mov     edx, [edi]
0x68E62F: mov     eax, [edx+84h]
0x68E635: push    0
0x68E637: push    ebp
0x68E638: push    ebx
0x68E639: mov     ecx, edi
0x68E63B: call    eax
0x68E63D: push    edi; effect
0x68E63E: mov     ecx, (offset qword_B3BB2C+1D4h); self
0x68E643: call    ActorProcessManager_RegisterTempEffect; [Verified] ActorProcessManager_RegisterTempEffect increments the effect reference and routes GetTypeID 4-6 into extendedTempEffects (+0x48), all other IDs into activeTempEffects (+0x40). Vtable evidence confirms decals 0/1 and particles 2 use the active list. Fallout divergence: its BGSDecalManager updates distinct simple-decal and emitter collections instead of using this per-actor temp-effect routing; one-to-one equivalence is Unknown.
0x68E648: mov     esi, [esi+4]
0x68E64B: test    esi, esi
0x68E64D: jnz     short ActiveEffect_Base_PostLink___LoopTest
