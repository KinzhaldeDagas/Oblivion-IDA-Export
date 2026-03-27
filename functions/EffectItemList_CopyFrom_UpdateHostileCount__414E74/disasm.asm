0x414E74: mov     ecx, edi
0x414E76: call    EffectItem_IsHostile
0x414E7B: test    al, al
0x414E7D: jz      short EffectItemList_CopyFrom___LoopContinue
0x414E7F: mov     eax, [esp+arg_10]
0x414E83: add     dword ptr [eax+0Ch], 1
