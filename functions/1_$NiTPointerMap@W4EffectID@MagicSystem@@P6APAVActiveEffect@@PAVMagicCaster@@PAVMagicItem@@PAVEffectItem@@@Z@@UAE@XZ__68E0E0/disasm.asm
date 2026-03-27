0x68E0E0: push    0FFFFFFFFh
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
0x68E134: call    FormHeapFree
0x68E139: add     esp, 4
0x68E13C: mov     ecx, [esp+18h+var_C]
0x68E140: mov     large fs:0, ecx
0x68E147: pop     ecx
0x68E148: pop     esi
0x68E149: add     esp, 10h
0x68E14C: retn
