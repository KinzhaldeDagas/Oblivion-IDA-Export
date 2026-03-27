0x416710: push    esi
0x416711: mov     esi, ecx
0x416713: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@PAVEffectSetting@@@@W4EffectID@MagicSystem@@PAVEffectSetting@@@@6B@; const NiTMapBase<DFALL<EffectSetting *>,MagicSystem::EffectID,EffectSetting *>::`vftable'
0x416719: call    NiTMap_Clear
0x41671E: mov     eax, [esi+8]
0x416721: push    eax
0x416722: call    FormHeapFree
0x416727: add     esp, 4
0x41672A: pop     esi
0x41672B: retn
