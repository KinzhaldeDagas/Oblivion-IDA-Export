0x532DD0: push    esi
0x532DD1: mov     esi, ecx
0x532DD3: call    ??1bhkNiCollisionObject@@UAE@XZ; bhkNiCollisionObject::~bhkNiCollisionObject(void)
0x532DD8: test    byte ptr [esp+4+arg_0], 1
0x532DDD: jz      short loc_532DE8
0x532DDF: push    esi
0x532DE0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x532DE5: add     esp, 4
0x532DE8: mov     eax, esi
0x532DEA: pop     esi
0x532DEB: retn    4
