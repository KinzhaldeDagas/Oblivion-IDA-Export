0x731A70: push    esi
0x731A71: mov     esi, ecx
0x731A73: call    ??1NiPropertyState@@UAE@XZ; Fog property propagation decode: NiPropertyState destructor releases all managed slots, including fog slot +0x0C when populated.
0x731A78: test    byte ptr [esp+4+arg_0], 1
0x731A7D: jz      short loc_731A88
0x731A7F: push    esi
0x731A80: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x731A85: add     esp, 4
0x731A88: mov     eax, esi
0x731A8A: pop     esi
0x731A8B: retn    4
