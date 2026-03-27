0x412AC0: push    esi
0x412AC1: mov     esi, ecx
0x412AC3: call    ??1AlchemyItem@@UAE@XZ; AlchemyItem::~AlchemyItem(void)
0x412AC8: test    byte ptr [esp+4+arg_0], 1
0x412ACD: jz      short loc_412AD8
0x412ACF: push    esi
0x412AD0: call    FormHeapFree
0x412AD5: add     esp, 4
0x412AD8: mov     eax, esi
0x412ADA: pop     esi
0x412ADB: retn    4
