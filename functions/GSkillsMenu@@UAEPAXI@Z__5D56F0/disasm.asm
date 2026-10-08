0x5D56F0: push    esi
0x5D56F1: mov     esi, ecx
0x5D56F3: mov     dword ptr [esi], offset ??_7SkillsMenu@@6B@; const SkillsMenu::`vftable'
0x5D56F9: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5D56FE: test    byte ptr [esp+4+arg_0], 1
0x5D5703: jz      short loc_5D570E
0x5D5705: push    esi
0x5D5706: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5D570B: add     esp, 4
0x5D570E: mov     eax, esi
0x5D5710: pop     esi
0x5D5711: retn    4
