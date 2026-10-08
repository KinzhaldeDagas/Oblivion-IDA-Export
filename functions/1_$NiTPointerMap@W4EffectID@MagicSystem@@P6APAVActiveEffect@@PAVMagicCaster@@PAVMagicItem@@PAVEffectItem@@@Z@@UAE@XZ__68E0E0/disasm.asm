0x68E0E0: push    0FFFFFFFFh; Verified ActiveEffectCreatorMap destructor: clears entries, restores the NiTMapBase vtable, clears the base map, and frees the bucket array. The global object itself is static storage.
0x68E0E2: push    offset ??1?$NiTPointerMap@W4EffectID@MagicSystem@@P6APAVActiveEffect@@PAVMagicCaster@@PAVMagicItem@@PAVEffectItem@@@Z@@UAE@XZ_SEH
0x68E0E7: mov     eax, large fs:0
0x68E0ED: push    eax
0x68E0EE: push    ecx
0x68E0EF: push    esi
0x68E0F0: mov     eax, ds:0B30AACh
0x68E0F5: xor     eax, esp
0x68E0F7: push    eax
0x68E0F8: lea     eax, [esp+18h+var_C]
0x68E0FC: mov     large fs:0, eax
0x68E102: mov     esi, ecx
0x68E104: mov     [esp+18h+var_10], esi
0x68E108: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@W4EffectID@MagicSystem@@P6APAVActiveEffect@@PAVMagicCaster@@PAVMagicItem@@PAVEffectItem@@@Z@@6B@; const NiTPointerMap<MagicSystem::EffectID,ActiveEffect * (*)(MagicCaster *,MagicItem *,EffectItem *)>::`vftable'
0x68E10E: mov     [esp+18h+var_4], 0
0x68E116: call    NiTMap_Clear
0x68E11B: mov     ecx, esi
0x68E11D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x68E125: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@W4EffectID@MagicSystem@@P6APAVActiveEffect@@PAVMagicCaster@@PAVMagicItem@@PAVEffectItem@@@Z@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,MagicSystem::EffectID,ActiveEffect * (*)(MagicCaster *,MagicItem *,EffectItem *)>::`vftable'
0x68E12B: call    NiTMap_Clear
0x68E130: mov     eax, [esi+8]
0x68E133: push    eax
0x68E134: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x68E139: add     esp, 4
0x68E13C: mov     ecx, [esp+18h+var_C]
0x68E140: mov     large fs:0, ecx
0x68E147: pop     ecx
0x68E148: pop     esi
0x68E149: add     esp, 10h
0x68E14C: retn
0x9C5480: mov     ecx, [ebp-10h]; this
0x9C5483: jmp     NiTMapBase_AECreatorFuncs_constr; Verified base-map construction path for NiTMap_AECreatorFuncs: installs NiTMapBase vtable, clears entries, and frees the old bucket pointer; the derived NiTPointerMap constructor then allocates/zeros 37 buckets and installs its vtable.
0x9C5488: mov     edx, [esp+arg_4]
0x9C548C: lea     eax, [edx-8]
0x9C548F: mov     ecx, [edx-0Ch]
0x9C5492: xor     ecx, eax
0x9C5494: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C5499: mov     eax, offset stru_AEDC5C
0x9C549E: jmp     ___CxxFrameHandler3
