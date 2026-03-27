0x77CDC0: push    esi
0x77CDC1: mov     esi, ecx
0x77CDC3: mov     dword ptr [esi], offset ??_7?$NiTMap@PBDPAVNiD3DGlobalConstantEntry@@@@6B@; const NiTMap<char const *,NiD3DGlobalConstantEntry *>::`vftable'
0x77CDC9: call    NiTMap_Clear
0x77CDCE: mov     ecx, esi
0x77CDD0: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@PAVNiD3DGlobalConstantEntry@@@@PBDPAVNiD3DGlobalConstantEntry@@@@6B@; const NiTMapBase<DFALL<NiD3DGlobalConstantEntry *>,char const *,NiD3DGlobalConstantEntry *>::`vftable'
0x77CDD6: call    NiTMap_Clear
0x77CDDB: mov     eax, [esi+8]
0x77CDDE: push    eax
0x77CDDF: call    FormHeapFree
0x77CDE4: add     esp, 4
0x77CDE7: test    [esp+4+arg_0], 1
0x77CDEC: jz      short loc_77CDF7
0x77CDEE: push    esi
0x77CDEF: call    FormHeapFree
0x77CDF4: add     esp, 4
0x77CDF7: mov     eax, esi
0x77CDF9: pop     esi
0x77CDFA: retn    4
