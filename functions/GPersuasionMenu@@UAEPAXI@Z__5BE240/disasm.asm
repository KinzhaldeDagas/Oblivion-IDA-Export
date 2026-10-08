0x5BE240: push    esi
0x5BE241: mov     esi, ecx
0x5BE243: mov     dword ptr [esi], offset ??_7PersuasionMenu@@6B@; const PersuasionMenu::`vftable'
0x5BE249: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5BE24E: test    byte ptr [esp+4+arg_0], 1
0x5BE253: jz      short loc_5BE25E
0x5BE255: push    esi
0x5BE256: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5BE25B: add     esp, 4
0x5BE25E: mov     eax, esi
0x5BE260: pop     esi
0x5BE261: retn    4
