0x898850: test    [esp+arg_0], 1
0x898855: push    esi
0x898856: mov     esi, ecx
0x898858: mov     dword ptr [esi], offset ??_7hkBroadPhaseCastCollector@@6B@; const hkBroadPhaseCastCollector::`vftable'
0x89885E: jz      short loc_898869
0x898860: push    esi
0x898861: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x898866: add     esp, 4
0x898869: mov     eax, esi
0x89886B: pop     esi
0x89886C: retn    4
