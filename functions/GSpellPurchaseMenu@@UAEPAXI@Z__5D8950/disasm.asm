0x5D8950: push    esi
0x5D8951: mov     esi, ecx
0x5D8953: mov     dword ptr [esi], offset ??_7SpellPurchaseMenu@@6B@; const SpellPurchaseMenu::`vftable'
0x5D8959: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5D895E: test    byte ptr [esp+4+arg_0], 1
0x5D8963: jz      short loc_5D896E
0x5D8965: push    esi
0x5D8966: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5D896B: add     esp, 4
0x5D896E: mov     eax, esi
0x5D8970: pop     esi
0x5D8971: retn    4
