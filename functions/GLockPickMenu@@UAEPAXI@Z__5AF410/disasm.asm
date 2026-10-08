0x5AF410: push    esi
0x5AF411: mov     esi, ecx
0x5AF413: mov     dword ptr [esi], offset ??_7LockPickMenu@@6B@; const LockPickMenu::`vftable'
0x5AF419: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5AF41E: test    byte ptr [esp+4+arg_0], 1
0x5AF423: jz      short loc_5AF42E
0x5AF425: push    esi
0x5AF426: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5AF42B: add     esp, 4
0x5AF42E: mov     eax, esi
0x5AF430: pop     esi
0x5AF431: retn    4
