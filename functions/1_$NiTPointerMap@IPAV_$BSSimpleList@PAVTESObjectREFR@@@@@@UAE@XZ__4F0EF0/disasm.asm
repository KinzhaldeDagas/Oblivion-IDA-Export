0x4F0EF0: push    0FFFFFFFFh
0x4F0EF2: push    offset ??1?$NiTPointerMap@IPAV?$BSSimpleList@PAVTESObjectREFR@@@@@@UAE@XZ_SEH
0x4F0EF7: mov     eax, large fs:0
0x4F0EFD: push    eax
0x4F0EFE: push    ecx
0x4F0EFF: push    esi
0x4F0F00: mov     eax, ds:0B30AACh
0x4F0F05: xor     eax, esp
0x4F0F07: push    eax
0x4F0F08: lea     eax, [esp+18h+var_C]
0x4F0F0C: mov     large fs:0, eax
0x4F0F12: mov     esi, ecx
0x4F0F14: mov     [esp+18h+var_10], esi
0x4F0F18: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAV?$BSSimpleList@PAVTESObjectREFR@@@@@@6B@; const NiTPointerMap<uint,BSSimpleList<TESObjectREFR *> *>::`vftable'
0x4F0F1E: mov     [esp+18h+var_4], 0
0x4F0F26: call    NiTMap_Clear
0x4F0F2B: mov     ecx, esi
0x4F0F2D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4F0F35: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@PAVTESObjectREFR@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<TESObjectREFR *> *>::`vftable'
0x4F0F3B: call    NiTMap_Clear
0x4F0F40: mov     eax, [esi+8]
0x4F0F43: push    eax
0x4F0F44: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4F0F49: add     esp, 4
0x4F0F4C: mov     ecx, [esp+18h+var_C]
0x4F0F50: mov     large fs:0, ecx
0x4F0F57: pop     ecx
0x4F0F58: pop     esi
0x4F0F59: add     esp, 10h
0x4F0F5C: retn
0x4EF2F0: push    esi
0x4EF2F1: mov     esi, ecx
0x4EF2F3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@PAVTESObjectREFR@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<TESObjectREFR *> *>::`vftable'
0x4EF2F9: call    NiTMap_Clear
0x4EF2FE: mov     eax, [esi+8]
0x4EF301: push    eax
0x4EF302: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4EF307: add     esp, 4
0x4EF30A: pop     esi
0x4EF30B: retn
0x9B6770: mov     ecx, [ebp-10h]
0x9B6773: jmp     loc_4EF2F0
0x9B6778: mov     edx, [esp+arg_4]
0x9B677C: lea     eax, [edx-8]
0x9B677F: mov     ecx, [edx-0Ch]
0x9B6782: xor     ecx, eax
0x9B6784: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B6789: mov     eax, offset stru_AE15CC
0x9B678E: jmp     ___CxxFrameHandler3
