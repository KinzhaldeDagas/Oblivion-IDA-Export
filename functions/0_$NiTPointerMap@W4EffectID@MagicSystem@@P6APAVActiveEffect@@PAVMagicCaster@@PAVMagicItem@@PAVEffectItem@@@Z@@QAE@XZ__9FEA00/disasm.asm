0x9FEA00: xor     ecx, ecx; Verified (Oblivion): constructor allocates and zeroes the 37-bucket NiTMap_AECreatorFuncs (0x94-byte bucket array), installs its NiTPointerMap vtable, and registers the atexit cleanup. Invocation timing relative to the ActiveEffect_Register_* wrappers remains Unknown.
0x9FEA02: mov     eax, 25h ; '%'
0x9FEA07: mov     edx, 4
0x9FEA0C: mul     edx
0x9FEA0E: seto    cl
0x9FEA11: neg     ecx
0x9FEA13: or      ecx, eax
0x9FEA15: push    ecx; Size
0x9FEA16: call    FormHeapAlloc
0x9FEA1B: mov     ecx, NiTMap_AECreatorFuncs.bucketCount
0x9FEA21: lea     edx, ds:0[ecx*4]
0x9FEA28: push    edx
0x9FEA29: push    0
0x9FEA2B: push    eax
0x9FEA2C: mov     NiTMap_AECreatorFuncs.buckets, eax
0x9FEA31: call    __memset
0x9FEA36: push    offset ActiveEffectCreatorMap_AtexitCleanup; void (__cdecl *)()
0x9FEA3B: mov     NiTMap_AECreatorFuncs.vftable, offset ??_7?$NiTPointerMap@W4EffectID@MagicSystem@@P6APAVActiveEffect@@PAVMagicCaster@@PAVMagicItem@@PAVEffectItem@@@Z@@6B@; Verified (Oblivion): stores the NiTPointerMap vtable in NiTMap_AECreatorFuncs after allocation/zeroing. Do not infer from this initializer alone that the effect factory wrappers have run.
0x9FEA45: call    _atexit
0x9FEA4A: add     esp, 14h
0x9FEA4D: retn
