0x5A82A0: push    esi
0x5A82A1: mov     esi, ecx
0x5A82A3: mov     dword ptr [esi], offset ??_7HUDReticle@@6B@; const HUDReticle::`vftable'
0x5A82A9: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5A82AE: test    byte ptr [esp+4+arg_0], 1
0x5A82B3: jz      short loc_5A82BE
0x5A82B5: push    esi
0x5A82B6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5A82BB: add     esp, 4
0x5A82BE: mov     eax, esi
0x5A82C0: pop     esi
0x5A82C1: retn    4
