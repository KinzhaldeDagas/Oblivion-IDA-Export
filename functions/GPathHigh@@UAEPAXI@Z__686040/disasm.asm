0x686040: push    esi
0x686041: mov     esi, ecx
0x686043: call    ??1PathHigh@@UAE@XZ; PathHigh::~PathHigh(void)
0x686048: test    byte ptr [esp+4+arg_0], 1
0x68604D: jz      short loc_686058
0x68604F: push    esi
0x686050: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x686055: add     esp, 4
0x686058: mov     eax, esi
0x68605A: pop     esi
0x68605B: retn    4
