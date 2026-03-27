0x77F2D0: push    esi
0x77F2D1: mov     esi, ecx
0x77F2D3: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PBDPAVNiD3DPixelShader@@@@6B@; const NiTPointerMap<char const *,NiD3DPixelShader *>::`vftable'
0x77F2D9: call    NiTMap_Clear
0x77F2DE: mov     ecx, esi
0x77F2E0: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiD3DPixelShader@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiD3DPixelShader *>::`vftable'
0x77F2E6: call    NiTMap_Clear
0x77F2EB: mov     eax, [esi+8]
0x77F2EE: push    eax
0x77F2EF: call    FormHeapFree
0x77F2F4: add     esp, 4
0x77F2F7: test    [esp+4+arg_0], 1
0x77F2FC: jz      short loc_77F307
0x77F2FE: push    esi
0x77F2FF: call    FormHeapFree
0x77F304: add     esp, 4
0x77F307: mov     eax, esi
0x77F309: pop     esi
0x77F30A: retn    4
