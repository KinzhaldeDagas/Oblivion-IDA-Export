0x4D8150: add     ecx, 44h ; 'D'; Remove ExtraLight or ExtraSpellEffectLight backing NiLight from the native full-light list. Its sole retail direct caller passes useSpellEffectExtraLight=false; no code/data xref selects this helper's true branch.
0x4D8153: cmp     [esp+useSpellEffectExtraLight], 0
0x4D8158: jz      short loc_4D8161
0x4D815A: call    ExtraDataList_GetSpellEffectLight; Returns the secondary/spell-effect REFR_LIGHT payload from extra type 0x49; TESObjectREF_UpdateLights processes it separately from normal ExtraLight.
0x4D815F: jmp     short loc_4D8166
0x4D8161: call    ExtraDataList_GetLight; Returns the REFR_LIGHT payload from ExtraLight type 0x30; heavily used by TESObjectREF lighting and equipped-light paths.
0x4D8166: test    eax, eax
0x4D8168: jz      short locret_4D8182
0x4D816A: mov     eax, [eax]
0x4D816C: test    eax, eax
0x4D816E: jz      short locret_4D8182
0x4D8170: push    eax; backingLight
0x4D8171: push    0
0x4D8173: call    GetShadowSceneNode
0x4D8178: add     esp, 4
0x4D817B: mov     ecx, eax; self
0x4D817D: call    ShadowSceneNode_RemoveFullLightBySource; Find a native full-list ShadowSceneLight whose backing NiLight identity equals the supplied source, then remove that entry.
0x4D8182: retn    4
