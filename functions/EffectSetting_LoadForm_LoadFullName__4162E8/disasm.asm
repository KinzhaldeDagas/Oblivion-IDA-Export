0x4162E8: test    ebx, ebx
0x4162EA: jz      short loc_4162F8
0x4162EC: lea     eax, [ebx+38h]
0x4162EF: push    edi
0x4162F0: push    eax
0x4162F1: call    TESFullname_Load; FULL loader used by XMRK: empty payload frees/clears the string. Nonempty payload is copied with max=0 into the exact temporary and passed to BSStringT_Set/strlen; a missing terminal NUL can scan past the chunk allocation.
0x4162F6: jmp     short EffectSetting_LoadForm___ChunkLoopContinue_
0x4162F8: xor     eax, eax
0x4162FA: push    edi
0x4162FB: push    eax
0x4162FC: call    TESFullname_Load; FULL loader used by XMRK: empty payload frees/clears the string. Nonempty payload is copied with max=0 into the exact temporary and passed to BSStringT_Set/strlen; a missing terminal NUL can scan past the chunk allocation.
0x416301: jmp     short EffectSetting_LoadForm___ChunkLoopContinue_
