0x42AF80: push    esi
0x42AF81: mov     esi, ecx
0x42AF83: call    ??1ExtraSavedMovementData@@UAE@XZ; ExtraSavedMovementData::~ExtraSavedMovementData(void)
0x42AF88: test    byte ptr [esp+4+arg_0], 1
0x42AF8D: jz      short loc_42AF98
0x42AF8F: push    esi
0x42AF90: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x42AF95: add     esp, 4
0x42AF98: mov     eax, esi
0x42AF9A: pop     esi
0x42AF9B: retn    4
