0xA24A40: mov     eax, g_TileUserTraitTable.data; Verified: dynamic trait entry pointer array. Header data+4,capacity+8,endIndex+0xA,count+0xC,growBy+0xE from AddUserTrait growth/writes. Custom numeric IDs depend on registry insertion order.
0xA24A45: push    eax
0xA24A46: mov     g_TileUserTraitTable.vtable, offset ??_7?$NiTArray@PAVStringListElement@Tile@@@@6B@; Verified: dynamic trait entry pointer array. Header data+4,capacity+8,endIndex+0xA,count+0xC,growBy+0xE from AddUserTrait growth/writes. Custom numeric IDs depend on registry insertion order.
0xA24A50: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA24A55: pop     ecx
0xA24A56: retn
