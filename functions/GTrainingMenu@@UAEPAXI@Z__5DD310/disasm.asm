0x5DD310: push    esi
0x5DD311: mov     esi, ecx
0x5DD313: mov     dword ptr [esi], offset ??_7TrainingMenu@@6B@; const TrainingMenu::`vftable'
0x5DD319: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5DD31E: test    byte ptr [esp+4+arg_0], 1
0x5DD323: jz      short loc_5DD32E
0x5DD325: push    esi
0x5DD326: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5DD32B: add     esp, 4
0x5DD32E: mov     eax, esi
0x5DD330: pop     esi
0x5DD331: retn    4
