0x415548: push    ebx
0x415549: lea     ecx, [esi+4]
0x41554C: call    BSSimpleList_PushBack
0x415551: mov     ecx, ebx
0x415553: call    EffectItem_IsHostile
0x415558: test    al, al
0x41555A: jz      EffectItemList_LoadItem___Done
0x415560: add     dword ptr [esi+0Ch], 1
0x415564: jmp     EffectItemList_LoadItem___Done
