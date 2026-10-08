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
0x6E1044: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6E1049: add     esp, 4
0x6E104C: mov     ecx, [esp+18h+var_C]
0x6E1050: mov     large fs:0, ecx
0x6E1057: pop     ecx
0x6E1058: pop     esi
0x6E1059: add     esp, 10h
0x6E105C: retn
0x6E0FA0: push    esi
0x6E0FA1: mov     esi, ecx
0x6E0FA3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDV?$NiPointer@VNiSequence@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiPointer<NiSequence>>::`vftable'
0x6E0FA9: call    NiTMap_Clear
0x6E0FAE: mov     eax, [esi+8]
0x6E0FB1: push    eax
0x6E0FB2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6E0FB7: add     esp, 4
0x6E0FBA: pop     esi
0x6E0FBB: retn
0x9C8030: mov     ecx, [ebp-10h]
0x9C8033: jmp     loc_6E0FA0
0x9C8038: mov     edx, [esp+arg_4]
0x9C803C: lea     eax, [edx-8]
0x9C803F: mov     ecx, [edx-0Ch]
0x9C8042: xor     ecx, eax
0x9C8044: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8049: mov     eax, offset stru_AF0338
0x9C804E: jmp     ___CxxFrameHandler3
