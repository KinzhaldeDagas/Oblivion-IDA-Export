0x68D920: push    esi; Verified base-map construction path for NiTMap_AECreatorFuncs: installs NiTMapBase vtable, clears entries, and frees the old bucket pointer; the derived NiTPointerMap constructor then allocates/zeros 37 buckets and installs its vtable.
0x68D921: mov     esi, ecx
0x68D923: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@W4EffectID@MagicSystem@@P6APAVActiveEffect@@PAVMagicCaster@@PAVMagicItem@@PAVEffectItem@@@Z@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,MagicSystem::EffectID,ActiveEffect * (*)(MagicCaster *,MagicItem *,EffectItem *)>::`vftable'
0x68D929: call    NiTMap_Clear
0x68D92E: mov     eax, [esi+8]
0x68D931: push    eax
0x68D932: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x68D937: add     esp, 4
0x68D93A: pop     esi
0x68D93B: retn
