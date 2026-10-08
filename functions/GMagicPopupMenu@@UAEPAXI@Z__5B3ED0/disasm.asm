0x5B3ED0: push    esi
0x5B3ED1: mov     esi, ecx
0x5B3ED3: mov     dword ptr [esi], offset ??_7MagicPopupMenu@@6B@; const MagicPopupMenu::`vftable'
0x5B3ED9: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5B3EDE: test    byte ptr [esp+4+arg_0], 1
0x5B3EE3: jz      short loc_5B3EEE
0x5B3EE5: push    esi
0x5B3EE6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5B3EEB: add     esp, 4
0x5B3EEE: mov     eax, esi
0x5B3EF0: pop     esi
0x5B3EF1: retn    4
