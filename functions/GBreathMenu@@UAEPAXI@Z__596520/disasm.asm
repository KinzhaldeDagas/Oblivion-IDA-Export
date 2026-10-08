0x596520: push    esi
0x596521: mov     esi, ecx
0x596523: mov     dword ptr [esi], offset ??_7BreathMenu@@6B@; const BreathMenu::`vftable'
0x596529: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x59652E: test    byte ptr [esp+4+arg_0], 1
0x596533: jz      short loc_59653E
0x596535: push    esi
0x596536: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x59653B: add     esp, 4
0x59653E: mov     eax, esi
0x596540: pop     esi
0x596541: retn    4
