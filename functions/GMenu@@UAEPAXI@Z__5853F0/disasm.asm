0x5853F0: push    esi
0x5853F1: mov     esi, ecx
0x5853F3: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5853F8: test    byte ptr [esp+4+arg_0], 1
0x5853FD: jz      short loc_585408
0x5853FF: push    esi
0x585400: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x585405: add     esp, 4
0x585408: mov     eax, esi
0x58540A: pop     esi
0x58540B: retn    4
