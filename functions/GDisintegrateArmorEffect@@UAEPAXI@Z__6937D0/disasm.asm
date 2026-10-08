0x6937D0: push    esi
0x6937D1: mov     esi, ecx
0x6937D3: call    ??1DisintegrateArmorEffect@@UAE@XZ; DisintegrateArmorEffect::~DisintegrateArmorEffect(void)
0x6937D8: test    byte ptr [esp+4+arg_0], 1
0x6937DD: jz      short loc_6937E8
0x6937DF: push    esi
0x6937E0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6937E5: add     esp, 4
0x6937E8: mov     eax, esi
0x6937EA: pop     esi
0x6937EB: retn    4
