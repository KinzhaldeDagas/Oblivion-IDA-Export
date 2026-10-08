0x595C40: push    esi
0x595C41: mov     esi, ecx
0x595C43: mov     dword ptr [esi], offset ??_7BookMenu@@6B@; const BookMenu::`vftable'
0x595C49: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x595C4E: test    byte ptr [esp+4+arg_0], 1
0x595C53: jz      short loc_595C5E
0x595C55: push    esi
0x595C56: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x595C5B: add     esp, 4
0x595C5E: mov     eax, esi
0x595C60: pop     esi
0x595C61: retn    4
