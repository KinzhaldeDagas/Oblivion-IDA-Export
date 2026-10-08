0x426890: push    esi
0x426891: mov     esi, ecx
0x426893: call    ??1ExtraEditorID@@UAE@XZ; ExtraEditorID::~ExtraEditorID(void)
0x426898: test    byte ptr [esp+4+arg_0], 1
0x42689D: jz      short loc_4268A8
0x42689F: push    esi
0x4268A0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4268A5: add     esp, 4
0x4268A8: mov     eax, esi
0x4268AA: pop     esi
0x4268AB: retn    4
