0x416730: push    esi
0x416731: mov     esi, ecx
0x416733: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@PAVEffectSetting@@@@W4EffectID@MagicSystem@@PAVEffectSetting@@@@6B@; const NiTMapBase<DFALL<EffectSetting *>,MagicSystem::EffectID,EffectSetting *>::`vftable'
0x416739: call    NiTMap_Clear
0x41673E: mov     eax, [esi+8]
0x416741: push    eax
0x416742: call    FormHeapFree
0x416747: add     esp, 4
0x41674A: test    [esp+4+arg_0], 1
0x41674F: jz      short loc_41675A
0x416751: push    esi
0x416752: call    FormHeapFree
0x416757: add     esp, 4
0x41675A: mov     eax, esi
0x41675C: pop     esi
0x41675D: retn    4
