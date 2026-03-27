0x419200: push    esi
0x419201: mov     esi, ecx
0x419203: call    ??1EnchantmentItem@@UAE@XZ; EnchantmentItem::~EnchantmentItem(void)
0x419208: test    byte ptr [esp+4+arg_0], 1
0x41920D: jz      short loc_419218
0x41920F: push    esi
0x419210: call    FormHeapFree
0x419215: add     esp, 4
0x419218: mov     eax, esi
0x41921A: pop     esi
0x41921B: retn    4
