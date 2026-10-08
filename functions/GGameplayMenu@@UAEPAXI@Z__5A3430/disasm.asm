0x5A3430: push    esi
0x5A3431: mov     esi, ecx
0x5A3433: mov     dword ptr [esi], offset ??_7GameplayMenu@@6B@; const GameplayMenu::`vftable'
0x5A3439: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5A343E: test    byte ptr [esp+4+arg_0], 1
0x5A3443: jz      short loc_5A344E
0x5A3445: push    esi
0x5A3446: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5A344B: add     esp, 4
0x5A344E: mov     eax, esi
0x5A3450: pop     esi
0x5A3451: retn    4
