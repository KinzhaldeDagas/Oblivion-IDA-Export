0x59FC30: push    esi
0x59FC31: mov     esi, ecx
0x59FC33: mov     dword ptr [esi], offset ??_7EffectSettingMenu@@6B@; const EffectSettingMenu::`vftable'
0x59FC39: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x59FC3E: test    byte ptr [esp+4+arg_0], 1
0x59FC43: jz      short loc_59FC4E
0x59FC45: push    esi
0x59FC46: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x59FC4B: add     esp, 4
0x59FC4E: mov     eax, esi
0x59FC50: pop     esi
0x59FC51: retn    4
