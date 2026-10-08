0x414C78: mov     edi, [esi+4]
0x414C7B: test    edi, edi
0x414C7D: jz      short EffectItemList_Clear___NextEntryNode
0x414C7F: mov     ecx, edi
0x414C81: call    EffectItem_destr
0x414C86: push    edi
0x414C87: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x414C8C: mov     eax, [esi+8]
0x414C8F: add     esp, 4
0x414C92: test    eax, eax
0x414C94: jz      short EffectItemList_Clear___ClearEntryData
