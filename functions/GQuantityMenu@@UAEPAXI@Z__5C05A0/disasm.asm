0x5C05A0: push    esi
0x5C05A1: mov     esi, ecx
0x5C05A3: mov     dword ptr [esi], offset ??_7QuantityMenu@@6B@; const QuantityMenu::`vftable'
0x5C05A9: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5C05AE: test    byte ptr [esp+4+arg_0], 1
0x5C05B3: jz      short loc_5C05BE
0x5C05B5: push    esi
0x5C05B6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5C05BB: add     esp, 4
0x5C05BE: mov     eax, esi
0x5C05C0: pop     esi
0x5C05C1: retn    4
