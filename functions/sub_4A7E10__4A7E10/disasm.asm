0x4A7E10: push    esi
0x4A7E11: mov     esi, ecx
0x4A7E13: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@PAVSetting@@@@PBDPAVSetting@@@@6B@; const NiTMapBase<DFALL<Setting *>,char const *,Setting *>::`vftable'
0x4A7E19: call    NiTMap_Clear
0x4A7E1E: mov     eax, [esi+8]
0x4A7E21: push    eax
0x4A7E22: call    FormHeapFree
0x4A7E27: add     esp, 4
0x4A7E2A: pop     esi
0x4A7E2B: retn
