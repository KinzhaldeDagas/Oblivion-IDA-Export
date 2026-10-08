0x6A32A0: push    esi
0x6A32A1: mov     esi, ecx
0x6A32A3: call    ??1NonActorMagicCaster@@UAE@XZ; NonActorMagicCaster::~NonActorMagicCaster(void)
0x6A32A8: test    byte ptr [esp+4+arg_0], 1
0x6A32AD: jz      short loc_6A32B8
0x6A32AF: push    esi
0x6A32B0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6A32B5: add     esp, 4
0x6A32B8: mov     eax, esi
0x6A32BA: pop     esi
0x6A32BB: retn    4
