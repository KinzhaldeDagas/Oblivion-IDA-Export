0x6A3680: push    esi; Verified scalar deleting destructor invokes ActiveEffect::~ActiveEffect and FormHeapFree(this) only when freeMemory bit 0 is set.
0x6A3681: mov     esi, ecx
0x6A3683: call    ??1ActiveEffect@@UAE@XZ; Verified ActiveEffect destructor detaches each associated MagicHitEffect by setting bFinished and ownerActiveEffect=null, clears/frees only the HitEffectNode list, and relies on the ActorProcessManager reference added during PostLink to own the BSTempEffect object's later update/removal.
0x6A3688: test    [esp+4+freeMemory], 1
0x6A368D: jz      short loc_6A3698
0x6A368F: push    esi
0x6A3690: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6A3695: add     esp, 4
0x6A3698: mov     eax, esi
0x6A369A: pop     esi
0x6A369B: retn    4
