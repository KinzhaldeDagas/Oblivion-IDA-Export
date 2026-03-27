0x77F290: push    esi
0x77F291: mov     esi, ecx
0x77F293: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PBDPAVNiD3DVertexShader@@@@6B@; const NiTPointerMap<char const *,NiD3DVertexShader *>::`vftable'
0x77F299: call    NiTMap_Clear
0x77F29E: mov     ecx, esi
0x77F2A0: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiD3DVertexShader@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiD3DVertexShader *>::`vftable'
0x77F2A6: call    NiTMap_Clear
0x77F2AB: mov     eax, [esi+8]
0x77F2AE: push    eax
0x77F2AF: call    FormHeapFree
0x77F2B4: add     esp, 4
0x77F2B7: test    [esp+4+arg_0], 1
0x77F2BC: jz      short loc_77F2C7
0x77F2BE: push    esi
0x77F2BF: call    FormHeapFree
0x77F2C4: add     esp, 4
0x77F2C7: mov     eax, esi
0x77F2C9: pop     esi
0x77F2CA: retn    4
