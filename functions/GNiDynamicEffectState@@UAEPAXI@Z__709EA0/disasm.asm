0x709EA0: push    esi
0x709EA1: mov     esi, ecx
0x709EA3: call    ??1NiDynamicEffectState@@UAE@XZ; NiDynamicEffectState::~NiDynamicEffectState(void)
0x709EA8: test    byte ptr [esp+4+arg_0], 1
0x709EAD: jz      short loc_709EB8
0x709EAF: push    esi
0x709EB0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x709EB5: add     esp, 4
0x709EB8: mov     eax, esi
0x709EBA: pop     esi
0x709EBB: retn    4
