0x6A33F0: push    esi; Verified scalar deleting destructor calls NonActorMagicTarget::~NonActorMagicTarget and frees the 0x20-byte allocation with FormHeapFree only when the low bit of freeMemory is set. The destructor itself does not clear the EffectNode chain.
0x6A33F1: mov     esi, ecx
0x6A33F3: call    ??1NonActorMagicTarget@@UAE@XZ; Verified Oblivion NonActorMagicTarget destructor runs MagicTarget_destr on subobject +0x0C and restores the BSExtraData vtable; no list removal appears in this function. Fallout's corresponding destructor explicitly removes all active-effect list entries first. This is a lifecycle difference; list ownership/cleanup responsibility in Oblivion remains Unknown pending all caller paths.
0x6A33F8: test    [esp+4+freeMemory], 1
0x6A33FD: jz      short loc_6A3408
0x6A33FF: push    esi
0x6A3400: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6A3405: add     esp, 4
0x6A3408: mov     eax, esi
0x6A340A: pop     esi
0x6A340B: retn    4
