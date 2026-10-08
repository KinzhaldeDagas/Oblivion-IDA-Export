0x44D8E0: push    0FFFFFFFFh
0x44D8E2: push    offset ??1?$NiTPointerMap@PAVTESForm@@_N@@UAE@XZ_SEH
0x44D8E7: mov     eax, large fs:0
0x44D8ED: push    eax
0x44D8EE: push    ecx
0x44D8EF: push    esi
0x44D8F0: mov     eax, ds:0B30AACh
0x44D8F5: xor     eax, esp
0x44D8F7: push    eax
0x44D8F8: lea     eax, [esp+18h+var_C]
0x44D8FC: mov     large fs:0, eax
0x44D902: mov     esi, ecx
0x44D904: mov     [esp+18h+var_10], esi
0x44D908: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVTESForm@@_N@@6B@; const NiTPointerMap<TESForm *,bool>::`vftable'
0x44D90E: mov     [esp+18h+var_4], 0
0x44D916: call    NiTMap_Clear
0x44D91B: mov     ecx, esi
0x44D91D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x44D925: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESForm@@_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESForm *,bool>::`vftable'
0x44D92B: call    NiTMap_Clear
0x44D930: mov     eax, [esi+8]
0x44D933: push    eax
0x44D934: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x44D939: add     esp, 4
0x44D93C: mov     ecx, [esp+18h+var_C]
0x44D940: mov     large fs:0, ecx
0x44D947: pop     ecx
0x44D948: pop     esi
0x44D949: add     esp, 10h
0x44D94C: retn
0x449140: push    esi
0x449141: mov     esi, ecx
0x449143: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESForm@@_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESForm *,bool>::`vftable'
0x449149: call    NiTMap_Clear
0x44914E: mov     eax, [esi+8]
0x449151: push    eax
0x449152: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x449157: add     esp, 4
0x44915A: pop     esi
0x44915B: retn
0x9ADC70: mov     ecx, [ebp-10h]
0x9ADC73: jmp     loc_449140
0x9ADC78: mov     edx, [esp+arg_4]
0x9ADC7C: lea     eax, [edx-8]
0x9ADC7F: mov     ecx, [edx-0Ch]
0x9ADC82: xor     ecx, eax
0x9ADC84: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ADC89: mov     eax, offset stru_ADA5E8
0x9ADC8E: jmp     ___CxxFrameHandler3
