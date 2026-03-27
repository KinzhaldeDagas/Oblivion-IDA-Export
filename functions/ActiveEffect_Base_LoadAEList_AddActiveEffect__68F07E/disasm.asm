0x68F07E: test    esi, esi
0x68F080: jz      short ActiveEffect_Base_LoadAEList?___LoadActiveEffects_Next
0x68F082: push    offset MagicTarget_ActiveEffectComparisonFunc
0x68F087: push    esi
0x68F088: mov     ecx, ebx
0x68F08A: call    BSSimpleList_InsertSorted
