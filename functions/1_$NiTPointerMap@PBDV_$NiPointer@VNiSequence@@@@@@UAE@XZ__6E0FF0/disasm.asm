0x6E0FF0: push    0FFFFFFFFh
0x6E0FF2: push    offset ??1?$NiTPointerMap@PBDV?$NiPointer@VNiSequence@@@@@@UAE@XZ_SEH
0x6E0FF7: mov     eax, large fs:0
0x6E0FFD: push    eax
0x6E0FFE: push    ecx
0x6E0FFF: push    esi
0x6E1000: mov     eax, ds:0B30AACh
0x6E1005: xor     eax, esp
0x6E1007: push    eax
0x6E1008: lea     eax, [esp+18h+var_C]
0x6E100C: mov     large fs:0, eax
0x6E1012: mov     esi, ecx
0x6E1014: mov     [esp+18h+var_10], esi
0x6E1018: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PBDV?$NiPointer@VNiSequence@@@@@@6B@; const NiTPointerMap<char const *,NiPointer<NiSequence>>::`vftable'
0x6E101E: mov     [esp+18h+var_4], 0
0x6E1026: call    NiTMap_Clear
0x6E102B: mov     ecx, esi
0x6E102D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6E1035: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDV?$NiPointer@VNiSequence@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiPointer<NiSequence>>::`vftable'
0x6E103B: call    NiTMap_Clear
0x6E1040: mov     eax, [esi+8]
0x6E1043: push    eax
0x6E1044: call    FormHeapFree
0x6E1049: add     esp, 4
0x6E104C: mov     ecx, [esp+18h+var_C]
0x6E1050: mov     large fs:0, ecx
0x6E1057: pop     ecx
0x6E1058: pop     esi
0x6E1059: add     esp, 10h
0x6E105C: retn
