0x67FC80: push    0FFFFFFFFh; Verified outer map destructor restores its NiTPointerMap/base-map vtables, clears entries, then frees the bucket-head array.
0x67FC82: push    offset ??1?$NiTPointerMap@PAVTESForm@@PAV?$NiTPointerMap@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@@@UAE@XZ_SEH
0x67FC87: mov     eax, large fs:0
0x67FC8D: push    eax
0x67FC8E: push    ecx
0x67FC8F: push    esi
0x67FC90: mov     eax, ds:0B30AACh
0x67FC95: xor     eax, esp
0x67FC97: push    eax
0x67FC98: lea     eax, [esp+18h+var_C]
0x67FC9C: mov     large fs:0, eax
0x67FCA2: mov     esi, ecx
0x67FCA4: mov     [esp+18h+var_10], esi
0x67FCA8: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVTESForm@@PAV?$NiTPointerMap@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@@@6B@; const NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::`vftable'
0x67FCAE: mov     [esp+18h+var_4], 0
0x67FCB6: call    NiTMap_Clear
0x67FCBB: mov     ecx, esi
0x67FCBD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x67FCC5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESForm@@PAV?$NiTPointerMap@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::`vftable'
0x67FCCB: call    NiTMap_Clear
0x67FCD0: mov     eax, [esi+8]
0x67FCD3: push    eax
0x67FCD4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x67FCD9: add     esp, 4
0x67FCDC: mov     ecx, [esp+18h+var_C]
0x67FCE0: mov     large fs:0, ecx
0x67FCE7: pop     ecx
0x67FCE8: pop     esi
0x67FCE9: add     esp, 10h
0x67FCEC: retn
0x67FA70: push    esi
0x67FA71: mov     esi, ecx
0x67FA73: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESForm@@PAV?$NiTPointerMap@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::`vftable'
0x67FA79: call    NiTMap_Clear
0x67FA7E: mov     eax, [esi+8]
0x67FA81: push    eax
0x67FA82: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x67FA87: add     esp, 4
0x67FA8A: pop     esi
0x67FA8B: retn
0x9C4B20: mov     ecx, [ebp-10h]
0x9C4B23: jmp     loc_67FA70
0x9C4B28: mov     edx, [esp+arg_4]
0x9C4B2C: lea     eax, [edx-8]
0x9C4B2F: mov     ecx, [edx-0Ch]
0x9C4B32: xor     ecx, eax
0x9C4B34: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C4B39: mov     eax, offset stru_AED434
0x9C4B3E: jmp     ___CxxFrameHandler3
