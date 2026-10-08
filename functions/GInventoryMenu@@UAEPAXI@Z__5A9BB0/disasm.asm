0x5A9BB0: push    esi
0x5A9BB1: mov     esi, ecx
0x5A9BB3: mov     dword ptr [esi], offset ??_7InventoryMenu@@6B@; const InventoryMenu::`vftable'
0x5A9BB9: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5A9BBE: test    byte ptr [esp+4+arg_0], 1
0x5A9BC3: jz      short loc_5A9BCE
0x5A9BC5: push    esi
0x5A9BC6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5A9BCB: add     esp, 4
0x5A9BCE: mov     eax, esi
0x5A9BD0: pop     esi
0x5A9BD1: retn    4
