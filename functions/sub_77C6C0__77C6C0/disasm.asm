0x77C6C0: push    esi
0x77C6C1: mov     esi, ecx
0x77C6C3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@PAVNiD3DGlobalConstantEntry@@@@PBDPAVNiD3DGlobalConstantEntry@@@@6B@; const NiTMapBase<DFALL<NiD3DGlobalConstantEntry *>,char const *,NiD3DGlobalConstantEntry *>::`vftable'
0x77C6C9: call    NiTMap_Clear
0x77C6CE: mov     eax, [esi+8]
0x77C6D1: push    eax
0x77C6D2: call    FormHeapFree
0x77C6D7: add     esp, 4
0x77C6DA: test    [esp+4+arg_0], 1
0x77C6DF: jz      short loc_77C6EA
0x77C6E1: push    esi
0x77C6E2: call    FormHeapFree
0x77C6E7: add     esp, 4
0x77C6EA: mov     eax, esi
0x77C6EC: pop     esi
0x77C6ED: retn    4
