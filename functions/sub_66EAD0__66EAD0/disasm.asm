0x66EAD0: push    esi; int
0x66EAD1: mov     esi, ecx
0x66EAD3: call    sub_66B150
0x66EAD8: test    [esp+4+arg_0], 1
0x66EADD: jz      short loc_66EAE8
0x66EADF: push    esi
0x66EAE0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x66EAE5: add     esp, 4
0x66EAE8: mov     eax, esi
0x66EAEA: pop     esi
0x66EAEB: retn    4
