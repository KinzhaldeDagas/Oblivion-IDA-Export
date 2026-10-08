0x45F0B0: push    esi
0x45F0B1: mov     esi, ecx
0x45F0B3: call    ExteriorCellNewReferencesMap_dtor;
0x45F0B8: test    byte ptr [esp+4+deleteFlags], 1
0x45F0BD: jz      short loc_45F0C8
0x45F0BF: push    esi
0x45F0C0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x45F0C5: add     esp, 4
0x45F0C8: mov     eax, esi
0x45F0CA: pop     esi
0x45F0CB: retn    4
