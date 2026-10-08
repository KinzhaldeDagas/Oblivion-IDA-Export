0x6AA6D0: push    esi
0x6AA6D1: mov     esi, ecx
0x6AA6D3: call    ??1?$NiTPointerList@PAVSoundMessage@AudioManager@@@@UAE@XZ; NiTPointerList<AudioManager::SoundMessage *>::~NiTPointerList<AudioManager::SoundMessage *>(void)
0x6AA6D8: test    [esp+4+arg_0], 1
0x6AA6DD: jz      short loc_6AA6E8
0x6AA6DF: push    esi
0x6AA6E0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6AA6E5: add     esp, 4
0x6AA6E8: mov     eax, esi
0x6AA6EA: pop     esi
0x6AA6EB: retn    4
