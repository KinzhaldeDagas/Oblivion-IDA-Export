0x587520: push    esi
0x587521: mov     esi, ecx
0x587523: mov     dword ptr [esi], offset ??_7ControlsMenu@@6B@; const ControlsMenu::`vftable'
0x587529: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x58752E: test    byte ptr [esp+4+arg_0], 1
0x587533: jz      short loc_58753E
0x587535: push    esi
0x587536: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x58753B: add     esp, 4
0x58753E: mov     eax, esi
0x587540: pop     esi
0x587541: retn    4
