0x5D9D70: push    esi
0x5D9D71: mov     esi, ecx
0x5D9D73: mov     dword ptr [esi], offset ??_7StatsMenu@@6B@; const StatsMenu::`vftable'
0x5D9D79: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5D9D7E: test    byte ptr [esp+4+arg_0], 1
0x5D9D83: jz      short loc_5D9D8E
0x5D9D85: push    esi
0x5D9D86: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5D9D8B: add     esp, 4
0x5D9D8E: mov     eax, esi
0x5D9D90: pop     esi
0x5D9D91: retn    4
