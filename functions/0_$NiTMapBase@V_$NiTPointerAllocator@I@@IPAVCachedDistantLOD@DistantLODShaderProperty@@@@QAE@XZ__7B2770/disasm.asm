0x7B2770: push    esi
0x7B2771: mov     esi, ecx
0x7B2773: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVCachedDistantLOD@DistantLODShaderProperty@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,DistantLODShaderProperty::CachedDistantLOD *>::`vftable'
0x7B2779: call    NiTMap_Clear
0x7B277E: mov     eax, [esi+8]
0x7B2781: push    eax
0x7B2782: call    FormHeapFree
0x7B2787: add     esp, 4
0x7B278A: test    [esp+4+arg_0], 1
0x7B278F: jz      short loc_7B279A
0x7B2791: push    esi
0x7B2792: call    FormHeapFree
0x7B2797: add     esp, 4
0x7B279A: mov     eax, esi
0x7B279C: pop     esi
0x7B279D: retn    4
