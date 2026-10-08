0x60A210: push    esi; ArrowProjectile scalar deleting destructor. Runs the complete destructor and frees this when deleteFlags bit 0 is set.
0x60A211: mov     esi, ecx
0x60A213: call    ArrowProjectile_Destroy; ArrowProjectile complete destructor; releases projectile-owned state, then invokes MobileObject destruction and returns this.
0x60A218: test    byte ptr [esp+4+deleteFlags], 1
0x60A21D: jz      short loc_60A228
0x60A21F: push    esi
0x60A220: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x60A225: add     esp, 4
0x60A228: mov     eax, esi
0x60A22A: pop     esi
0x60A22B: retn    4
