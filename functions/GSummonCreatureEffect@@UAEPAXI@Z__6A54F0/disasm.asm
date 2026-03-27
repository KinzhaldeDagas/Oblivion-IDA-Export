0x6A54F0: push    esi
0x6A54F1: mov     esi, ecx
0x6A54F3: call    ??1SummonCreatureEffect@@UAE@XZ; SummonCreatureEffect::~SummonCreatureEffect(void)
0x6A54F8: test    byte ptr [esp+4+arg_0], 1
0x6A54FD: jz      short loc_6A5508
0x6A54FF: push    esi
0x6A5500: call    FormHeapFree
0x6A5505: add     esp, 4
0x6A5508: mov     eax, esi
0x6A550A: pop     esi
0x6A550B: retn    4
