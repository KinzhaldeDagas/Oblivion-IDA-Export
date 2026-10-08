0x595350: push    esi
0x595351: mov     esi, ecx
0x595353: mov     dword ptr [esi], offset ??_7AudioMenu@@6B@; const AudioMenu::`vftable'
0x595359: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x59535E: test    byte ptr [esp+4+arg_0], 1
0x595363: jz      short loc_59536E
0x595365: push    esi
0x595366: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x59536B: add     esp, 4
0x59536E: mov     eax, esi
0x595370: pop     esi
0x595371: retn    4
