0x4E8F10: push    0FFFFFFFFh
0x4E8F12: push    offset ??1?$NiTPointerMap@IPAV?$BSSimpleList@PAVTESConnectedPoint@@@@@@UAE@XZ_SEH
0x4E8F17: mov     eax, large fs:0
0x4E8F1D: push    eax
0x4E8F1E: push    ecx
0x4E8F1F: push    esi
0x4E8F20: mov     eax, ds:0B30AACh
0x4E8F25: xor     eax, esp
0x4E8F27: push    eax
0x4E8F28: lea     eax, [esp+18h+var_C]
0x4E8F2C: mov     large fs:0, eax
0x4E8F32: mov     esi, ecx
0x4E8F34: mov     [esp+18h+var_10], esi
0x4E8F38: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAV?$BSSimpleList@PAVTESConnectedPoint@@@@@@6B@; const NiTPointerMap<uint,BSSimpleList<TESConnectedPoint *> *>::`vftable'
0x4E8F3E: mov     [esp+18h+var_4], 0
0x4E8F46: call    NiTMap_Clear
0x4E8F4B: mov     ecx, esi
0x4E8F4D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4E8F55: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@PAVTESConnectedPoint@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<TESConnectedPoint *> *>::`vftable'
0x4E8F5B: call    NiTMap_Clear
0x4E8F60: mov     eax, [esi+8]
0x4E8F63: push    eax
0x4E8F64: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4E8F69: add     esp, 4
0x4E8F6C: mov     ecx, [esp+18h+var_C]
0x4E8F70: mov     large fs:0, ecx
0x4E8F77: pop     ecx
0x4E8F78: pop     esi
0x4E8F79: add     esp, 10h
0x4E8F7C: retn
0x4E8770: push    esi
0x4E8771: mov     esi, ecx
0x4E8773: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@PAVTESConnectedPoint@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<TESConnectedPoint *> *>::`vftable'
0x4E8779: call    NiTMap_Clear
0x4E877E: mov     eax, [esi+8]
0x4E8781: push    eax
0x4E8782: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4E8787: add     esp, 4
0x4E878A: pop     esi
0x4E878B: retn
0x9B5F60: mov     ecx, [ebp-10h]
0x9B5F63: jmp     loc_4E8770
0x9B5F68: mov     edx, [esp+arg_4]
0x9B5F6C: lea     eax, [edx-8]
0x9B5F6F: mov     ecx, [edx-0Ch]
0x9B5F72: xor     ecx, eax
0x9B5F74: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B5F79: mov     eax, offset stru_AE0EB8
0x9B5F7E: jmp     ___CxxFrameHandler3
