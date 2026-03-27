0x72E190: push    0FFFFFFFFh
0x72E192: push    offset ??1?$NiTPointerMap@IM@@UAE@XZ_SEH
0x72E197: mov     eax, large fs:0
0x72E19D: push    eax
0x72E19E: push    ecx
0x72E19F: push    esi
0x72E1A0: mov     eax, ds:0B30AACh
0x72E1A5: xor     eax, esp
0x72E1A7: push    eax
0x72E1A8: lea     eax, [esp+18h+var_C]
0x72E1AC: mov     large fs:0, eax
0x72E1B2: mov     esi, ecx
0x72E1B4: mov     [esp+18h+var_10], esi
0x72E1B8: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IM@@6B@; const NiTPointerMap<uint,float>::`vftable'
0x72E1BE: mov     [esp+18h+var_4], 0
0x72E1C6: call    NiTMap_Clear
0x72E1CB: mov     ecx, esi
0x72E1CD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x72E1D5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IM@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,float>::`vftable'
0x72E1DB: call    NiTMap_Clear
0x72E1E0: mov     eax, [esi+8]
0x72E1E3: push    eax
0x72E1E4: call    FormHeapFree
0x72E1E9: add     esp, 4
0x72E1EC: mov     ecx, [esp+18h+var_C]
0x72E1F0: mov     large fs:0, ecx
0x72E1F7: pop     ecx
0x72E1F8: pop     esi
0x72E1F9: add     esp, 10h
0x72E1FC: retn
