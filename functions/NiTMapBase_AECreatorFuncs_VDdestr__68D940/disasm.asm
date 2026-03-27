0x68D940: push    esi
0x68D941: mov     esi, ecx
0x68D943: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@W4EffectID@MagicSystem@@P6APAVActiveEffect@@PAVMagicCaster@@PAVMagicItem@@PAVEffectItem@@@Z@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,MagicSystem::EffectID,ActiveEffect * (*)(MagicCaster *,MagicItem *,EffectItem *)>::`vftable'
0x68D949: call    NiTMap_Clear
0x68D94E: mov     eax, [esi+8]
0x68D951: push    eax
0x68D952: call    FormHeapFree
0x68D957: add     esp, 4
0x68D95A: test    [esp+4+arg_0], 1
0x68D95F: jz      short loc_68D96A
0x68D961: push    esi
0x68D962: call    FormHeapFree
0x68D967: add     esp, 4
0x68D96A: mov     eax, esi
0x68D96C: pop     esi
0x68D96D: retn    4
