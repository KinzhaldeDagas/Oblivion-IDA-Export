0x51ED00: push    esi; int
0x51ED01: mov     esi, ecx
0x51ED03: call    TESCreature_Destructor
0x51ED08: test    byte ptr [esp+4+flags], 1
0x51ED0D: jz      short loc_51ED18
0x51ED0F: push    esi
0x51ED10: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x51ED15: add     esp, 4
0x51ED18: mov     eax, esi
0x51ED1A: pop     esi
0x51ED1B: retn    4
