0x4A7EB0: push    0FFFFFFFFh
0x4A7EB2: push    offset ??1?$NiTMap@PBDPAVSetting@@@@UAE@XZ_SEH
0x4A7EB7: mov     eax, large fs:0
0x4A7EBD: push    eax
0x4A7EBE: push    ecx
0x4A7EBF: push    esi
0x4A7EC0: mov     eax, ds:0B30AACh
0x4A7EC5: xor     eax, esp
0x4A7EC7: push    eax
0x4A7EC8: lea     eax, [esp+18h+var_C]
0x4A7ECC: mov     large fs:0, eax
0x4A7ED2: mov     esi, ecx
0x4A7ED4: mov     [esp+18h+var_10], esi
0x4A7ED8: mov     dword ptr [esi], offset ??_7?$NiTMap@PBDPAVSetting@@@@6B@; const NiTMap<char const *,Setting *>::`vftable'
0x4A7EDE: mov     [esp+18h+var_4], 0
0x4A7EE6: call    NiTMap_Clear
0x4A7EEB: mov     ecx, esi
0x4A7EED: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4A7EF5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@PAVSetting@@@@PBDPAVSetting@@@@6B@; const NiTMapBase<DFALL<Setting *>,char const *,Setting *>::`vftable'
0x4A7EFB: call    NiTMap_Clear
0x4A7F00: mov     eax, [esi+8]
0x4A7F03: push    eax
0x4A7F04: call    FormHeapFree
0x4A7F09: add     esp, 4
0x4A7F0C: mov     ecx, [esp+18h+var_C]
0x4A7F10: mov     large fs:0, ecx
0x4A7F17: pop     ecx
0x4A7F18: pop     esi
0x4A7F19: add     esp, 10h
0x4A7F1C: retn
