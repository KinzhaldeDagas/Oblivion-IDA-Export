0x5C0CF0: push    esi
0x5C0CF1: mov     esi, ecx
0x5C0CF3: mov     dword ptr [esi], offset ??_7QuickKeysMenu@@6B@; const QuickKeysMenu::`vftable'
0x5C0CF9: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5C0CFE: test    byte ptr [esp+4+arg_0], 1
0x5C0D03: jz      short loc_5C0D0E
0x5C0D05: push    esi
0x5C0D06: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5C0D0B: add     esp, 4
0x5C0D0E: mov     eax, esi
0x5C0D10: pop     esi
0x5C0D11: retn    4
