0x4392C0: push    esi
0x4392C1: mov     esi, ecx
0x4392C3: call    ??1QueuedMagicItem@@UAE@XZ; QueuedMagicItem::~QueuedMagicItem(void)
0x4392C8: test    byte ptr [esp+4+arg_0], 1
0x4392CD: jz      short loc_4392D8
0x4392CF: push    esi
0x4392D0: call    FormHeapFree
0x4392D5: add     esp, 4
0x4392D8: mov     eax, esi
0x4392DA: pop     esi
0x4392DB: retn    4
