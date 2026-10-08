0x6B94E0: push    esi; Destroys the singleton MenuTopicManager without closing IDA: clears owned MenuTopics, frees the manager, and nulls the singleton storage.
0x6B94E1: mov     esi, ds:0B3C218h
0x6B94E7: test    esi, esi
0x6B94E9: jz      short loc_6B950E
0x6B94EB: push    1; clearAll
0x6B94ED: mov     ecx, esi; this
0x6B94EF: mov     dword ptr [esi+0Ch], 0
0x6B94F6: call    MenuTopicManager__ClearData; ClearData owns ordinary MenuTopics but deliberately does not destroy isInfoGeneralTopic entries. Those are actor-specific caches owned by ExtraInfoGeneralTopic (0x59).
0x6B94FB: push    esi
0x6B94FC: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6B9501: add     esp, 4
0x6B9504: mov     dword ptr ds:0B3C218h, 0
0x6B950E: pop     esi
0x6B950F: retn
