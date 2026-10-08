0x51AF50: push    esi
0x51AF51: mov     esi, ecx
0x51AF53: call    TESAnimGroup_destructor; Destroys TESAnimGroup-owned allocations: frees the required-note float array at +0x10 and the parsed 0x10-byte text-key event array at +0x28, then tears down the NiRefObject base.
0x51AF58: test    byte ptr [esp+4+arg_0], 1
0x51AF5D: jz      short loc_51AF68
0x51AF5F: push    esi
0x51AF60: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x51AF65: add     esp, 4
0x51AF68: mov     eax, esi
0x51AF6A: pop     esi
0x51AF6B: retn    4
