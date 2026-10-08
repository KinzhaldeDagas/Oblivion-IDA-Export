0x7C3770: push    0FFFFFFFFh
0x7C3772: push    offset ??1?$NiTPointerMap@PBDV?$NiPointer@VCachedGeometry@TallGrassShaderProperty@@@@@@UAE@XZ_SEH
0x7C3777: mov     eax, large fs:0
0x7C377D: push    eax
0x7C377E: push    ecx
0x7C377F: push    esi
0x7C3780: mov     eax, ds:0B30AACh
0x7C3785: xor     eax, esp
0x7C3787: push    eax
0x7C3788: lea     eax, [esp+18h+var_C]
0x7C378C: mov     large fs:0, eax
0x7C3792: mov     esi, ecx
0x7C3794: mov     [esp+18h+var_10], esi
0x7C3798: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PBDV?$NiPointer@VCachedGeometry@TallGrassShaderProperty@@@@@@6B@; const NiTPointerMap<char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>::`vftable'
0x7C379E: mov     [esp+18h+var_4], 0
0x7C37A6: call    NiTMap_Clear
0x7C37AB: mov     ecx, esi
0x7C37AD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x7C37B5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDV?$NiPointer@VCachedGeometry@TallGrassShaderProperty@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>::`vftable'
0x7C37BB: call    NiTMap_Clear
0x7C37C0: mov     eax, [esi+8]
0x7C37C3: push    eax
0x7C37C4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7C37C9: add     esp, 4
0x7C37CC: mov     ecx, [esp+18h+var_C]
0x7C37D0: mov     large fs:0, ecx
0x7C37D7: pop     ecx
0x7C37D8: pop     esi
0x7C37D9: add     esp, 10h
0x7C37DC: retn
0x7C3110: push    esi
0x7C3111: mov     esi, ecx
0x7C3113: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDV?$NiPointer@VCachedGeometry@TallGrassShaderProperty@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>::`vftable'
0x7C3119: call    NiTMap_Clear
0x7C311E: mov     eax, [esi+8]
0x7C3121: push    eax
0x7C3122: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7C3127: add     esp, 4
0x7C312A: pop     esi
0x7C312B: retn
0x9CE4F0: mov     ecx, [ebp-10h]
0x9CE4F3: jmp     loc_7C3110
0x9CE4F8: mov     edx, [esp+arg_4]
0x9CE4FC: lea     eax, [edx-8]
0x9CE4FF: mov     ecx, [edx-0Ch]
0x9CE502: xor     ecx, eax
0x9CE504: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CE509: mov     eax, offset stru_AF74E8
0x9CE50E: jmp     ___CxxFrameHandler3
