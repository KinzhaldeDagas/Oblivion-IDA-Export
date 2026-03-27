0x4A7E60: mov     eax, [esp+arg_0]
0x4A7E64: push    esi
0x4A7E65: mov     esi, ecx
0x4A7E67: xor     ecx, ecx
0x4A7E69: mov     [esi+4], eax
0x4A7E6C: mov     edx, 4
0x4A7E71: mul     edx
0x4A7E73: seto    cl
0x4A7E76: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@PAVSetting@@@@PBDPAVSetting@@@@6B@; const NiTMapBase<DFALL<Setting *>,char const *,Setting *>::`vftable'
0x4A7E7C: mov     dword ptr [esi+0Ch], 0
0x4A7E83: neg     ecx
0x4A7E85: or      ecx, eax
0x4A7E87: push    ecx; Size
0x4A7E88: call    FormHeapAlloc
0x4A7E8D: mov     ecx, [esi+4]
0x4A7E90: add     ecx, ecx
0x4A7E92: add     ecx, ecx
0x4A7E94: push    ecx
0x4A7E95: push    0
0x4A7E97: push    eax
0x4A7E98: mov     [esi+8], eax
0x4A7E9B: call    __memset
0x4A7EA0: add     esp, 10h
0x4A7EA3: mov     dword ptr [esi], offset ??_7?$NiTMap@PBDPAVSetting@@@@6B@; const NiTMap<char const *,Setting *>::`vftable'
0x4A7EA9: mov     eax, esi
0x4A7EAB: pop     esi
0x4A7EAC: retn    4
