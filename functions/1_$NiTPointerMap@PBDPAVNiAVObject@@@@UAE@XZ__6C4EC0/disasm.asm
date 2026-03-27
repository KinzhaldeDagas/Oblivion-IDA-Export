0x6C4EC0: push    0FFFFFFFFh
0x6C4EC2: push    offset ??1?$NiTPointerMap@PBDPAVNiAVObject@@@@UAE@XZ_SEH
0x6C4EC7: mov     eax, large fs:0
0x6C4ECD: push    eax
0x6C4ECE: push    ecx
0x6C4ECF: push    esi
0x6C4ED0: mov     eax, ds:0B30AACh
0x6C4ED5: xor     eax, esp
0x6C4ED7: push    eax
0x6C4ED8: lea     eax, [esp+18h+var_C]
0x6C4EDC: mov     large fs:0, eax
0x6C4EE2: mov     esi, ecx
0x6C4EE4: mov     [esp+18h+var_10], esi
0x6C4EE8: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PBDPAVNiAVObject@@@@6B@; const NiTPointerMap<char const *,NiAVObject *>::`vftable'
0x6C4EEE: mov     [esp+18h+var_4], 0
0x6C4EF6: call    NiTMap_Clear
0x6C4EFB: mov     ecx, esi
0x6C4EFD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6C4F05: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiAVObject@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiAVObject *>::`vftable'
0x6C4F0B: call    NiTMap_Clear
0x6C4F10: mov     eax, [esi+8]
0x6C4F13: push    eax
0x6C4F14: call    FormHeapFree
0x6C4F19: add     esp, 4
0x6C4F1C: mov     ecx, [esp+18h+var_C]
0x6C4F20: mov     large fs:0, ecx
0x6C4F27: pop     ecx
0x6C4F28: pop     esi
0x6C4F29: add     esp, 10h
0x6C4F2C: retn
