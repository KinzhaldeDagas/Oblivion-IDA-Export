0x55E6B0: push    0FFFFFFFFh
0x55E6B2: push    offset ??1?$NiTPointerMap@PAVTESObjectTREE@@PAV?$NiPointer@VBSTreeModel@@@@@@UAE@XZ_SEH
0x55E6B7: mov     eax, large fs:0
0x55E6BD: push    eax
0x55E6BE: push    ecx
0x55E6BF: push    esi
0x55E6C0: mov     eax, ds:0B30AACh
0x55E6C5: xor     eax, esp
0x55E6C7: push    eax
0x55E6C8: lea     eax, [esp+18h+var_C]
0x55E6CC: mov     large fs:0, eax
0x55E6D2: mov     esi, ecx
0x55E6D4: mov     [esp+18h+var_10], esi
0x55E6D8: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVTESObjectTREE@@PAV?$NiPointer@VBSTreeModel@@@@@@6B@; const NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>::`vftable'
0x55E6DE: mov     [esp+18h+var_4], 0
0x55E6E6: call    NiTMap_Clear
0x55E6EB: mov     ecx, esi
0x55E6ED: mov     [esp+18h+var_4], 0FFFFFFFFh
0x55E6F5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESObjectTREE@@PAV?$NiPointer@VBSTreeModel@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESObjectTREE *,NiPointer<BSTreeModel> *>::`vftable'
0x55E6FB: call    NiTMap_Clear
0x55E700: mov     eax, [esi+8]
0x55E703: push    eax
0x55E704: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x55E709: add     esp, 4
0x55E70C: mov     ecx, [esp+18h+var_C]
0x55E710: mov     large fs:0, ecx
0x55E717: pop     ecx
0x55E718: pop     esi
0x55E719: add     esp, 10h
0x55E71C: retn
0x55E2F0: push    esi
0x55E2F1: mov     esi, ecx
0x55E2F3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESObjectTREE@@PAV?$NiPointer@VBSTreeModel@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESObjectTREE *,NiPointer<BSTreeModel> *>::`vftable'
0x55E2F9: call    NiTMap_Clear
0x55E2FE: mov     eax, [esi+8]
0x55E301: push    eax
0x55E302: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x55E307: add     esp, 4
0x55E30A: pop     esi
0x55E30B: retn
0x9BCB40: mov     ecx, [ebp-10h]
0x9BCB43: jmp     loc_55E2F0
0x9BCB48: mov     edx, [esp+arg_4]
0x9BCB4C: lea     eax, [edx-8]
0x9BCB4F: mov     ecx, [edx-0Ch]
0x9BCB52: xor     ecx, eax
0x9BCB54: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BCB59: mov     eax, offset stru_AE66C8
0x9BCB5E: jmp     ___CxxFrameHandler3
