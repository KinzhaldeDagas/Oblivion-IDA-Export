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
0x6C4F14: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6C4F19: add     esp, 4
0x6C4F1C: mov     ecx, [esp+18h+var_C]
0x6C4F20: mov     large fs:0, ecx
0x6C4F27: pop     ecx
0x6C4F28: pop     esi
0x6C4F29: add     esp, 10h
0x6C4F2C: retn
0x6C44C0: push    esi
0x6C44C1: mov     esi, ecx
0x6C44C3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiAVObject@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiAVObject *>::`vftable'
0x6C44C9: call    NiTMap_Clear
0x6C44CE: mov     eax, [esi+8]
0x6C44D1: push    eax
0x6C44D2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6C44D7: add     esp, 4
0x6C44DA: pop     esi
0x6C44DB: retn
0x9C7290: mov     ecx, [ebp-10h]
0x9C7293: jmp     loc_6C44C0
0x9C7298: mov     edx, [esp+arg_4]
0x9C729C: lea     eax, [edx-8]
0x9C729F: mov     ecx, [edx-0Ch]
0x9C72A2: xor     ecx, eax
0x9C72A4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C72A9: mov     eax, offset stru_AEF6FC
0x9C72AE: jmp     ___CxxFrameHandler3
