0x5BDA60: push    esi
0x5BDA61: mov     esi, ecx
0x5BDA63: mov     dword ptr [esi], offset ??_7PauseMenu@@6B@; const PauseMenu::`vftable'
0x5BDA69: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5BDA6E: test    byte ptr [esp+4+arg_0], 1
0x5BDA73: jz      short loc_5BDA7E
0x5BDA75: push    esi
0x5BDA76: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5BDA7B: add     esp, 4
0x5BDA7E: mov     eax, esi
0x5BDA80: pop     esi
0x5BDA81: retn    4
