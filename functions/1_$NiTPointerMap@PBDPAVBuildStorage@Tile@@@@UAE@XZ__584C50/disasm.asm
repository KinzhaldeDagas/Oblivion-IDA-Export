0x584C50: push    0FFFFFFFFh
0x584C52: push    offset ??1?$NiTPointerMap@PBDPAVBuildStorage@Tile@@@@UAE@XZ_SEH
0x584C57: mov     eax, large fs:0
0x584C5D: push    eax
0x584C5E: push    ecx
0x584C5F: push    esi
0x584C60: mov     eax, ds:0B30AACh
0x584C65: xor     eax, esp
0x584C67: push    eax
0x584C68: lea     eax, [esp+18h+var_C]
0x584C6C: mov     large fs:0, eax
0x584C72: mov     esi, ecx
0x584C74: mov     [esp+18h+var_10], esi
0x584C78: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PBDPAVBuildStorage@Tile@@@@6B@; const NiTPointerMap<char const *,Tile::BuildStorage *>::`vftable'
0x584C7E: mov     [esp+18h+var_4], 0
0x584C86: call    NiTMap_Clear
0x584C8B: mov     ecx, esi
0x584C8D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x584C95: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVBuildStorage@Tile@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,Tile::BuildStorage *>::`vftable'
0x584C9B: call    NiTMap_Clear
0x584CA0: mov     eax, [esi+8]
0x584CA3: push    eax
0x584CA4: call    FormHeapFree
0x584CA9: add     esp, 4
0x584CAC: mov     ecx, [esp+18h+var_C]
0x584CB0: mov     large fs:0, ecx
0x584CB7: pop     ecx
0x584CB8: pop     esi
0x584CB9: add     esp, 10h
0x584CBC: retn
