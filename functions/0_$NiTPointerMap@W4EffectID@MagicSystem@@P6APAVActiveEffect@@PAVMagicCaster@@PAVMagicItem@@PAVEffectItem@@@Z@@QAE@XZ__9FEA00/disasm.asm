0x9FEA00: xor     ecx, ecx
0x9FEA02: mov     eax, 25h ; '%'
0x9FEA07: mov     edx, 4
0x9FEA0C: mul     edx
0x9FEA0E: seto    cl
0x9FEA11: neg     ecx
0x9FEA13: or      ecx, eax
0x9FEA15: push    ecx; Size
0x9FEA16: call    FormHeapAlloc
0x9FEA1B: mov     ecx, dword_B15A10
0x9FEA21: lea     edx, ds:0[ecx*4]
0x9FEA28: push    edx
0x9FEA29: push    0
0x9FEA2B: push    eax
0x9FEA2C: mov     dword_B15A14, eax
0x9FEA31: call    __memset
0x9FEA36: push    offset sub_A25F90; void (__cdecl *)()
0x9FEA3B: mov     NiTMap_AECreatorFuncs, offset ??_7?$NiTPointerMap@W4EffectID@MagicSystem@@P6APAVActiveEffect@@PAVMagicCaster@@PAVMagicItem@@PAVEffectItem@@@Z@@6B@; const NiTPointerMap<MagicSystem::EffectID,ActiveEffect * (*)(MagicCaster *,MagicItem *,EffectItem *)>::`vftable' ...
0x9FEA45: call    _atexit
0x9FEA4A: add     esp, 14h
0x9FEA4D: retn
