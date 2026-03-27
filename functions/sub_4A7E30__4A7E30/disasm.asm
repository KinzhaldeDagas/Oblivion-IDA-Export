0x4A7E30: push    esi
0x4A7E31: mov     esi, ecx
0x4A7E33: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@PAVSetting@@@@PBDPAVSetting@@@@6B@; const NiTMapBase<DFALL<Setting *>,char const *,Setting *>::`vftable'
0x4A7E39: call    NiTMap_Clear
0x4A7E3E: mov     eax, [esi+8]
0x4A7E41: push    eax
0x4A7E42: call    FormHeapFree
0x4A7E47: add     esp, 4
0x4A7E4A: test    [esp+4+arg_0], 1
0x4A7E4F: jz      short loc_4A7E5A
0x4A7E51: push    esi
0x4A7E52: call    FormHeapFree
0x4A7E57: add     esp, 4
0x4A7E5A: mov     eax, esi
0x4A7E5C: pop     esi
0x4A7E5D: retn    4
