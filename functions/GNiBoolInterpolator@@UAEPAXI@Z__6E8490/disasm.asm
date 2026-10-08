0x6E8490: push    esi
0x6E8491: mov     esi, ecx
0x6E8493: call    ??1NiBoolInterpolator@@UAE@XZ; NiBoolInterpolator::~NiBoolInterpolator(void)
0x6E8498: test    byte ptr [esp+4+arg_0], 1
0x6E849D: jz      short loc_6E84A8
0x6E849F: push    esi
0x6E84A0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6E84A5: add     esp, 4
0x6E84A8: mov     eax, esi
0x6E84AA: pop     esi
0x6E84AB: retn    4
