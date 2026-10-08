0x5AC5B0: push    esi
0x5AC5B1: mov     esi, ecx
0x5AC5B3: mov     dword ptr [esi], offset ??_7LevelUpMenu@@6B@; const LevelUpMenu::`vftable'
0x5AC5B9: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5AC5BE: test    byte ptr [esp+4+arg_0], 1
0x5AC5C3: jz      short loc_5AC5CE
0x5AC5C5: push    esi
0x5AC5C6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5AC5CB: add     esp, 4
0x5AC5CE: mov     eax, esi
0x5AC5D0: pop     esi
0x5AC5D1: retn    4
