0x68E150: push    esi
0x68E151: mov     esi, ecx
0x68E153: call    ??1?$NiTPointerMap@W4EffectID@MagicSystem@@P6APAVActiveEffect@@PAVMagicCaster@@PAVMagicItem@@PAVEffectItem@@@Z@@UAE@XZ; NiTPointerMap<MagicSystem::EffectID,ActiveEffect * (*)(MagicCaster *,MagicItem *,EffectItem *)>::~NiTPointerMap<MagicSystem::EffectID,ActiveEffect * (*)(MagicCaster *,MagicItem *,EffectItem *)>(void)
0x68E158: test    [esp+4+arg_0], 1
0x68E15D: jz      short loc_68E168
0x68E15F: push    esi
0x68E160: call    FormHeapFree
0x68E165: add     esp, 4
0x68E168: mov     eax, esi
0x68E16A: pop     esi
0x68E16B: retn    4
