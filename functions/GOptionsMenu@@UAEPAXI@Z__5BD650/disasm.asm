0x5BD650: push    esi
0x5BD651: mov     esi, ecx
0x5BD653: mov     dword ptr [esi], offset ??_7OptionsMenu@@6B@; const OptionsMenu::`vftable'
0x5BD659: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5BD65E: test    byte ptr [esp+4+arg_0], 1
0x5BD663: jz      short loc_5BD66E
0x5BD665: push    esi
0x5BD666: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5BD66B: add     esp, 4
0x5BD66E: mov     eax, esi
0x5BD670: pop     esi
0x5BD671: retn    4
