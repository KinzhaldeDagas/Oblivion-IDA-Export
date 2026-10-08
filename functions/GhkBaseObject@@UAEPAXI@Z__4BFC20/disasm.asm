0x4BFC20: test    byte ptr [esp+arg_0], 1
0x4BFC25: push    esi
0x4BFC26: mov     esi, ecx
0x4BFC28: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x4BFC2E: jz      short loc_4BFC39
0x4BFC30: push    esi
0x4BFC31: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4BFC36: add     esp, 4
0x4BFC39: mov     eax, esi
0x4BFC3B: pop     esi
0x4BFC3C: retn    4
