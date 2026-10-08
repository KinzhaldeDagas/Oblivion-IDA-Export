0x5DDA20: push    esi
0x5DDA21: mov     esi, ecx
0x5DDA23: mov     dword ptr [esi], offset ??_7VideoDisplayMenu@@6B@; const VideoDisplayMenu::`vftable'
0x5DDA29: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5DDA2E: test    byte ptr [esp+4+arg_0], 1
0x5DDA33: jz      short loc_5DDA3E
0x5DDA35: push    esi
0x5DDA36: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5DDA3B: add     esp, 4
0x5DDA3E: mov     eax, esi
0x5DDA40: pop     esi
0x5DDA41: retn    4
