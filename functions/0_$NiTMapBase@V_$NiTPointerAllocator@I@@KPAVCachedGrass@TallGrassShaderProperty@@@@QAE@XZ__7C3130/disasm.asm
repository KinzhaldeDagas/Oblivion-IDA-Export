0x7C3130: push    esi
0x7C3131: mov     esi, ecx
0x7C3133: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@KPAVCachedGrass@TallGrassShaderProperty@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,ulong,TallGrassShaderProperty::CachedGrass *>::`vftable'
0x7C3139: call    NiTMap_Clear
0x7C313E: mov     eax, [esi+8]
0x7C3141: push    eax
0x7C3142: call    FormHeapFree
0x7C3147: add     esp, 4
0x7C314A: test    [esp+4+arg_0], 1
0x7C314F: jz      short loc_7C315A
0x7C3151: push    esi
0x7C3152: call    FormHeapFree
0x7C3157: add     esp, 4
0x7C315A: mov     eax, esi
0x7C315C: pop     esi
0x7C315D: retn    4
