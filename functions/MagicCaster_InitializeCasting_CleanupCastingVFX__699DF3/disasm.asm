0x699DF3: mov     edi, [esi+4]
0x699DF6: test    edi, edi
0x699DF8: jz      short loc_699E0A
0x699DFA: mov     ecx, edi; this
0x699DFC: call    MagicCaster_CastingVFX_destr
0x699E01: push    edi
0x699E02: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x699E07: add     esp, 4
0x699E0A: mov     dword ptr [esi+4], 0
