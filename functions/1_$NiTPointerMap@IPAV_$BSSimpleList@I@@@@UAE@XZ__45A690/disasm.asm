0x45A690: push    0FFFFFFFFh
0x45A692: push    offset ??1?$NiTPointerMap@IPAV?$BSSimpleList@I@@@@UAE@XZ_SEH
0x45A697: mov     eax, large fs:0
0x45A69D: push    eax
0x45A69E: push    ecx
0x45A69F: push    esi
0x45A6A0: mov     eax, ds:0B30AACh
0x45A6A5: xor     eax, esp
0x45A6A7: push    eax
0x45A6A8: lea     eax, [esp+18h+var_C]
0x45A6AC: mov     large fs:0, eax
0x45A6B2: mov     esi, ecx
0x45A6B4: mov     [esp+18h+var_10], esi
0x45A6B8: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAV?$BSSimpleList@I@@@@6B@; const NiTPointerMap<uint,BSSimpleList<uint> *>::`vftable'
0x45A6BE: mov     [esp+18h+var_4], 0
0x45A6C6: call    NiTMap_Clear
0x45A6CB: mov     ecx, esi
0x45A6CD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x45A6D5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@I@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<uint> *>::`vftable'
0x45A6DB: call    NiTMap_Clear
0x45A6E0: mov     eax, [esi+8]
0x45A6E3: push    eax
0x45A6E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x45A6E9: add     esp, 4
0x45A6EC: mov     ecx, [esp+18h+var_C]
0x45A6F0: mov     large fs:0, ecx
0x45A6F7: pop     ecx
0x45A6F8: pop     esi
0x45A6F9: add     esp, 10h
0x45A6FC: retn
0x452AD0: push    esi
0x452AD1: mov     esi, ecx
0x452AD3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@I@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<uint> *>::`vftable'
0x452AD9: call    NiTMap_Clear
0x452ADE: mov     eax, [esi+8]
0x452AE1: push    eax
0x452AE2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x452AE7: add     esp, 4
0x452AEA: pop     esi
0x452AEB: retn
0x9AE1A0: mov     ecx, [ebp-10h]
0x9AE1A3: jmp     loc_452AD0
0x9AE1A8: mov     edx, [esp+arg_4]
0x9AE1AC: lea     eax, [edx-8]
0x9AE1AF: mov     ecx, [edx-0Ch]
0x9AE1B2: xor     ecx, eax
0x9AE1B4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AE1B9: mov     eax, offset stru_ADAA60
0x9AE1BE: jmp     ___CxxFrameHandler3
