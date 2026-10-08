0x73C870: push    esi
0x73C871: mov     esi, ecx
0x73C873: call    ??1NiSwitchStringExtraData@@UAE@XZ; NiSwitchStringExtraData::~NiSwitchStringExtraData(void)
0x73C878: test    byte ptr [esp+4+arg_0], 1
0x73C87D: jz      short loc_73C888
0x73C87F: push    esi
0x73C880: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x73C885: add     esp, 4
0x73C888: mov     eax, esi
0x73C88A: pop     esi
0x73C88B: retn    4
