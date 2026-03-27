0x77EF10: push    esi
0x77EF11: mov     esi, ecx
0x77EF13: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiD3DPixelShader@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiD3DPixelShader *>::`vftable'
0x77EF19: call    NiTMap_Clear
0x77EF1E: mov     eax, [esi+8]
0x77EF21: push    eax
0x77EF22: call    FormHeapFree
0x77EF27: add     esp, 4
0x77EF2A: test    [esp+4+arg_0], 1
0x77EF2F: jz      short loc_77EF3A
0x77EF31: push    esi
0x77EF32: call    FormHeapFree
0x77EF37: add     esp, 4
0x77EF3A: mov     eax, esi
0x77EF3C: pop     esi
0x77EF3D: retn    4
